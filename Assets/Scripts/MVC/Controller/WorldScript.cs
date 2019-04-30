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
	 */
	Block GetBlockBelow(Vector3 loc) {
		loc.y--;
		loc.y = (float)Math.Ceiling(loc.y);
		return map.GetBlock(loc);
	}

	/**
	 * Get the block at the given location.
	 */
	Block GetBlockAt(Vector3 loc) {
		return map.GetBlock(loc);
	}

	/**
	 * Get the block above the given location.
	 */
	Block GetBlockAbove(Vector3 loc) {
		loc.y++;
		loc.y = (float)Math.Ceiling(loc.y);
		return map.GetBlock(loc);
	}

	float timer = 0; // used to delay level transition before wind sound plays

	/**
	 * Checks what block the alpaca is on currently and handles its logic.
	 * (Dies for lava and wins for win block.)
	 */
	void ProcessCurrBlock() {
		Block currBlock = GetBlockBelow(alpaca.GetCurrAlpacaLocation());
		if(currBlock == null) {
			// Debug.Log(alpaca.GetCurrAlpacaLocation());
			// Debug.Log("Current block alpaca is on is null!");
			return;
		}
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

	int lastClickedWhere = 2; // used to check if should just change direction or walk
							  // see ClickedWhere() for more

	/**
	 * Changes the alpaca's coordinates depending on the click location, and
	 * the surrounding blocks.
	 */
	void MoveOnClick() {
		int where = ClickedWhere();
		// change facing direction before walking in that direction
		if( lastClickedWhere != where) {
			lastClickedWhere = where;
			return;
		}
    	Vector3 curr = alpaca.GetCurrAlpacaLocation();
    	Vector3 dest = curr;
    	switch(where) {
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
		lastClickedWhere = where;
    }

    /**
     * Picks up a block if there's a moveable on in front,
     * or drops a block if the alpaca has one and there's a platform it can fall on.
     */
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

	Vector2 clickPos; // Position of click on this update, if is clicking right now
	bool didClick = false; // Whether there was a click the last update (click start/end detection)
	float lastTimeClicked = 0; // Duration of a click, if currently active. 100+ otherwise.

	/**
	 * Processes the input for this update. In charge of:
	 * - Moving alpaca
	 * - Picking up/setting down blocks
	 */
    void ProcessInput() {
    	if(!ClickedNow() && didClick) { // click just ended
    		if(lastTimeClicked < 100) //did not pick up block
    			MoveOnClick();
    		lastTimeClicked = 0;
    	} else if(ClickedNow()) { // click is happening
    		clickPos = Input.mousePosition;
    		// check if pick up block
    		lastTimeClicked += Time.deltaTime;
    		if(lastTimeClicked > 0.5f && lastTimeClicked < 100) { // timer reached
    			if(AttemptPickUpOrPlaceBlock())
    				lastTimeClicked = 100; // don't allow any more attempts for this click
    		}
    	}
    	didClick = ClickedNow();
	}

	/**
	 * Returns true iff there was a click during this update.
	 */
	bool ClickedNow() {
		return Input.GetMouseButton(0) && !EventSystem.current.IsPointerOverGameObject();	
	}

	// Used to determine which quadrant is clicked
    int middle_x = Screen.width / 2;
    int middle_y = Screen.height / 2;

    /**
     * Returns which quadrant the click this update was on.
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

