using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using System;
using Anonym.Isometric;

public class WorldScript : MonoBehaviour {

    public AudioSource winSound;
	Map map;
	Alpaca alpaca;

	// Use this for initialization
	void Start () {
		if(map == null) {
			map = new Map(100, 100);
		}
	}
	
	/**
	 * Adds a block to the map.
	 * 
	 * @param {name} Name of block
	 * @param {last} Previous coordinate of block, if existed
	 * @param {coords} Location of block
	 */
	public void AddBlock(string name, Vector3 last, Vector3 coords, GridCoordinates obj) {
		if(map == null) {
			map = new Map(100, 100);
		}
		map.AddBlock(name, last, coords, obj);
	}

	/**
	 * Adds the alpaca model to world.
	 * 
	 * @param {a} Alpaca
	 */
	public void AddAlpaca(Alpaca a) {
		if(map == null) {
			map = new Map(100, 100);
		}
		alpaca = a;
	}

	// Update is called once per frame
	void Update () {
		ProcessCurrBlock();
		ProcessInput();
	}

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	/**
	 * Get the block below the given location.
	 * 
	 * @param {loc}
	 */
	Block GetBlockBelow(Vector3 loc) {
		loc.y--;
		loc.y = (float)Math.Ceiling(loc.y);
		return map.GetBlock(loc);
	}

	Block GetBlockAt(Vector3 loc) {
		// loc.y = (float)Math.Ceiling(loc.y);
		// Debug.Log("Get block at " + loc);
		return map.GetBlock(loc);
	}

	Block GetBlockAbove(Vector3 loc) {
		loc.y++;
		loc.y = (float)Math.Ceiling(loc.y);
		return map.GetBlock(loc);
	}

	float timer = 0;

	void ProcessCurrBlock() {
		Block currBlock = GetBlockBelow(alpaca.GetCurrAlpacaLocation());
		if(currBlock == null) {
			// Debug.Log(alpaca.GetCurrAlpacaLocation());
			// Debug.Log("Current block alpaca is on is null!");
			return;
		}
		//{GRASS, LAVA, MOVEABLE, WIN, NONE}
		switch(currBlock.b_type) {
			case Block.BlockType.LAVA:
				break;
			case Block.BlockType.WIN:
				if(timer == 0)
					winSound.Play();
				timer += Time.deltaTime;
				if(timer > 0.2f) {
					int sceneIndex = SceneManager.GetActiveScene().buildIndex;
					int levelPassed = PlayerPrefs.GetInt("LevelPassed");
					Debug.Log("sceneIndex: " + sceneIndex + ", levelPassed: " + levelPassed);
					if (levelPassed < sceneIndex)
					{
						Debug.Log("levelPassed < sceneIndex :^0");
						PlayerPrefs.SetInt("LevelPassed", sceneIndex);
					}
						SceneManager.LoadScene("B" + (sceneIndex+1), LoadSceneMode.Single);
						Debug.Log("Player moving on to level " + "B" + (sceneIndex+1));
					}
				break;
			case Block.BlockType.GRASS: 
			case Block.BlockType.MOVEABLE:
				// do nothing
				return;
			default:
				Debug.Log("Alpaca is on a none block!");
				return;
		}
	}

	void MoveOnClick() {
    	Vector3 curr = alpaca.GetCurrAlpacaLocation();
    	Vector3 dest = curr;
    	switch(ClickedWhere()) {
    		case 0:
    			dest.x--;
    			break;
    		case 1:
    			dest.z++;
    			break;
    		case 2:
    			dest.x++;
    			break;
    		case 3:
    			dest.z--;
    			break;
    		default:
    			return;
    	}
		if(GetBlockAt(dest) != null) { // Is there a block right in front? --> climb mode
			Debug.Log("1" + GetBlockAt(dest).b_type + " " + dest);
			Debug.Log("alpaca at " + curr);
			if(GetBlockAt(curr) != null) // Is there a block above alpaca?
				return;
			else {
				if(GetBlockAbove(dest) != null) // Is there a block the one right in front?
					return;
				else {
					dest.y++;
					alpaca.Move(dest);
				}
			}
		} else {
			Debug.Log("2");
			if(GetBlockBelow(dest) != null) { // Is there a block that can walk on straight?
				Debug.Log("2.5");
				alpaca.Move(dest);
			} else {
				Debug.Log("3");
				Block top = map.GetHighestBlockBelow(dest);
				if(top != null) { // Is there a block alpaca can fall on?
					dest = top.getCoords();
					dest.y++;
					alpaca.Move(dest);
					Debug.Log("4");
				}
			}
		}
    }

    bool AttemptPickUpOrPlaceBlock() {
    	Vector3 curr = alpaca.GetCurrAlpacaLocation();
    	Vector3 dest = curr;
    	switch(ClickedWhere()) {
    		case 0:
    			dest.x--;
    			break;
    		case 1:
    			dest.z++;
    			break;
    		case 2:
    			dest.x++;
    			break;
    		case 3:
    			dest.z--;
    			break;
    		default:
    			return false;
    	}
    	return (map.TryHoldOrPlaceBlock(dest));
    }

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	Vector2 clickPos;
	bool didClick = false;
	float lastTimeClicked = 0;

    int middle_x = Screen.width / 2;
    int middle_y = Screen.height / 2;

    void ProcessInput() {
    	if(ClickedNow() && !didClick) {
    		// click just started
    		// if(Input.touches.Length > 0)
    		// 	clickPos = Input.GetTouch(0).position; 
    		// else 
    		clickPos = Input.mousePosition;
    		// lastTimeClicked = 0;
    	} else if(!ClickedNow() && didClick) {
    		// click just ended
    		if(lastTimeClicked < 100) //did not pick up block
    			MoveOnClick();
    		lastTimeClicked = 0;
    	} else if(ClickedNow()) {
    		// check if pick up block
    		lastTimeClicked += Time.deltaTime;
    		if(lastTimeClicked > 0.5f && lastTimeClicked < 100) {
    			if(AttemptPickUpOrPlaceBlock())
    				lastTimeClicked = 100;
    		}
    	}
    	didClick = ClickedNow();
	}

	bool ClickedNow() {
		return Input.GetMouseButton(0) && !EventSystem.current.IsPointerOverGameObject();	
	}

    /**
     *  -----------
	 * |  0  |  1  |
	 * |-----------
	 * |  3  |  2  |
	 *  -----------
     */
    int ClickedWhere() {
		if(clickPos.x < middle_x) {
			if (clickPos.y < middle_y) return 3;
			else return 0;
		} else {
			if (clickPos.y < middle_y) return 2;
			else return 1;
		}
    }
}

