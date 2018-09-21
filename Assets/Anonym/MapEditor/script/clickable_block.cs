using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clickable_block : MonoBehaviour {

	//vars usable in every function
	//Vector3 tempPos;
	//bool debounceSelect;
    bool isSelected;
	SpriteRenderer sr;
    LandableBlock landableBlockScript;

	// initializer
	void Start () {
        isSelected = false;
		sr = GetComponentInChildren<SpriteRenderer>();
	}
	
	//Called when mouse enters block
	void OnMouseEnter(){
        //Highlights over clickable block when mouse hovers
		if(!isSelected) {
            sr.color = new Color(0.835f,0.878f,1.0f,1.0f);
        }
	}

	//Called when mouse exits block
	void OnMouseExit(){
        //Changes back to normal color if the clickable block has not been selected
		if(!isSelected) {
            setBlockToRegularColor();
        }
	}

	// Called whenever the mouse is over the gameobject
//	void OnMouseOver(){
//        if(Input.GetMouseButtonDown(0)){
//			selectedBlock = !selectedBlock;
//			if(selectedBlock){
//				sr.color=new Color(0.78f,0.80f,1.0f,1.0f);
//			}
//		} 
//    }
    
    void OnMouseDown() {
        //Toggles if the block has been selected or unselected
        isSelected = !isSelected;
        
        if (isSelected) { //Block was just selected
            sr.color=new Color(0.78f,0.80f,1.0f,1.0f);
            gameObject.tag = "SelectedBlock";

            //Tell all landable blocks that a block has been selected
            GameObject[] allLandableBlocks = GameObject.FindGameObjectsWithTag("Landable"); 
            foreach(GameObject landableBlock in allLandableBlocks) {
                LandableBlock landableBlockScript = landableBlock.GetComponent<LandableBlock>();
                landableBlockScript.setSelectedBlock();
            }
        } else { //Block was unselected
            gameObject.tag = "Clickable";
            nullifyClickableBlockForLandableBlocks();
        }
    }

	// Update is called once per frame
	void Update () {
//		//Debug.Log(Input.mousePosition);
//		if(selectedBlock){
//			//Debug.Log("block selected");
//			if(Input.GetMouseButtonUp(0)){
//				debounceSelect = true;
//			}
//			if(Input.GetMouseButtonDown(0) && debounceSelect){
//				//Debug.Log("setting down");
//				tempPos = gameObject.transform.position;
//				//Vector3 camPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
//				//tempPos.x = camPos.x;
//				//tempPos.z = camPos.z;
//				tempPos.z -= 2.01f;
////                tempPos.x = Input.mousePosition.x;
////                tempPos.y = Input.mousePosition.y;
////                tempPos.z = Input.mousePosition.z;
//                //Debug.Log(Input.mousePosition);
//				//gameObject.transform.position = tempPos;
//				debounceSelect = false;
//				selectedBlock = false;
//				sr.color=new Color(1.0f,1.0f,1.0f,1.0f);
//			}
//		}
//		else {}//Debug.Log("block not selected");
	}
    
    void nullifyClickableBlockForLandableBlocks() {
        //Tell all landable blocks that a block has been unselected
        GameObject[] allLandableBlocks = GameObject.FindGameObjectsWithTag("Landable");
        foreach(GameObject landableBlock in allLandableBlocks) {
            LandableBlock landableBlockScript = landableBlock.GetComponent<LandableBlock>();
            landableBlockScript.nullSelectedBlock();
        }
    }
    
    //Moves the selected block
    public void move(Vector3 position) {
        nullifyClickableBlockForLandableBlocks();
        isSelected = false; 
        transform.position = position;
        
        //Selected block is now landable
        gameObject.tag = "Landable";
        gameObject.AddComponent<LandableBlock>();
        setBlockToRegularColor();
        clickable_block clickableBlockScript = GetComponent<clickable_block>();
        Destroy(clickableBlockScript);
    }
	
    void setBlockToRegularColor() {
        sr.color=new Color(1.0f,1.0f,1.0f,1.0f);
    }
}
