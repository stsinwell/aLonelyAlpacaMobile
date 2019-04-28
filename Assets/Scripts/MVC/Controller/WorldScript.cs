using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class WorldScript : MonoBehaviour {

	Map map;
	Alpaca alpaca;

	// Use this for initialization
	void Start () {
		if(map == null) {
			map = new Map(100, 100);
		}
	}
	
	public void AddBlock(string name, Vector3 last, Vector3 coords) {
		if(map == null) {
			map = new Map(100, 100);
		}
		map.AddBlock(name, last, coords);
	}

	public void AddAlpaca(Alpaca a) {
		if(map == null) {
			map = new Map(100, 100);
		}
		alpaca = a;
	}

	// Update is called once per frame
	void Update () {
		ProcessInput();
	}

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	Block BlockAlpacaOn(Vector3 loc) {
		loc.y -= 1;
		return map.GetBlock(loc);
	}

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	Vector2 clickPos;
	bool didClick;
	float lastTimeClicked = -1;

    int middle_x = Screen.width / 2;
    int middle_y = Screen.height / 2;

    void ProcessInput() {
    	if(clickedNow() && !didClick) {
    		clickPos = Input.mousePosition;
    		lastTimeClicked = Time.deltaTime;
    	} else {
    		lastTimeClicked = -1;
    	}
    	didClick = clickedNow();

    	if(lastTimeClicked != -1) {
			MoveOnClick();
			Debug.Log(alpaca.GetCurrAlpacaLocation());
		}
	}

	bool clickedNow() {
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

    void MoveOnClick() {
    	Vector3 dest = alpaca.GetCurrAlpacaLocation();
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
    	Block block = BlockAlpacaOn(dest);
		if(block != null) {
			Debug.Log(block.b_type);
    		alpaca.Move(dest);
    	}
    }
}

