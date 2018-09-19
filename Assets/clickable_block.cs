using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clickable_block : MonoBehaviour {

	//vars usable in every function
	Vector3 tempPos;
	bool selectedBlock = false;
	bool debounceSelect;
	SpriteRenderer sr;

	// initializer
	void Start () {
		sr = GetComponentInChildren<SpriteRenderer>();
	}
	
	//Called when mouse enters block
	void OnMouseEnter(){
		if(!selectedBlock)sr.color=new Color(0.835f,0.878f,1.0f,1.0f);
	}

	//Called when mouse exits block
	void OnMouseExit(){
		if(!selectedBlock)sr.color=new Color(1.0f,1.0f,1.0f,1.0f);
	}

	// Called whenever the mouse is over the gameobject
	void OnMouseOver(){
        if(Input.GetMouseButtonDown(0)){
			selectedBlock = !selectedBlock;
			if(selectedBlock){
				sr.color=new Color(0.78f,0.80f,1.0f,1.0f);
			}
		} 
    }

	// Update is called once per frame
	void Update () {
		print(Input.mousePosition);
		if(selectedBlock){
			print("block selected");
			if(Input.GetMouseButtonUp(0)){
				debounceSelect = true;
			}
			if(Input.GetMouseButtonDown(0) && debounceSelect){
				print("setting down");
				tempPos = gameObject.transform.position;
				//Vector3 camPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
				//tempPos.x = camPos.x;
				//tempPos.z = camPos.z;
				tempPos.z -= 1.01f;
				gameObject.transform.position = tempPos;
				debounceSelect = false;
				selectedBlock = false;
				sr.color=new Color(1.0f,1.0f,1.0f,1.0f);
			}
		}
		else print("block not selected");
	}
	
}
