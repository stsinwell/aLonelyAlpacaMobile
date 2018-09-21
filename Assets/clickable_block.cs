using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clickable_block : MonoBehaviour {

	//vars usable in every function
	Vector3 tempPos;
	public bool selectedBlock;
	bool debounceSelect;
	SpriteRenderer sr;
    LandableBlock landableBlockScript;

	// initializer
	void Start () {
        Debug.Log("Starttttt");
        selectedBlock = false;
		sr = GetComponentInChildren<SpriteRenderer>();
        Debug.Log("End of Start");
	}
	
	//Called when mouse enters block
	void OnMouseEnter(){
        Debug.Log("OnMouseEnter");
		if(!selectedBlock)sr.color=new Color(0.835f,0.878f,1.0f,1.0f);
	}

	//Called when mouse exits block
	void OnMouseExit(){
        Debug.Log("OnMouseExit");
		if(!selectedBlock) {
            setBlockToRegularColor();
        }
	}

	// Called whenever the mouse is over the gameobject
	void OnMouseOver(){
        Debug.Log("OnMouseOver");
        if(Input.GetMouseButtonDown(0)){
            Debug.Log("inner");
			selectedBlock = !selectedBlock;
			if(selectedBlock){
				sr.color=new Color(0.78f,0.80f,1.0f,1.0f);
			}
		} 
    }
    
    void OnMouseDown() {
        Debug.Log("OnMouseDown");
        gameObject.tag = "SelectedBlock";
        
        GameObject[] allLandableBlocks = GameObject.FindGameObjectsWithTag("Landable");
        foreach(GameObject landableBlock in allLandableBlocks) {
            LandableBlock landableBlockScript = landableBlock.GetComponent<LandableBlock>();
            landableBlockScript.setSelectedBlock();
            
            selectedBlock = false;
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
    
    public void move(Vector3 position) {
        selectedBlock = false;
        transform.position = position;
        
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
