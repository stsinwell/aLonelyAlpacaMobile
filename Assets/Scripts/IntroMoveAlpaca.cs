using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroMoveAlpaca : MonoBehaviour {

	// Use this for initialization
	
	private RectTransform rt;
	private bool moveIt;
	private float moveSpeed;

	void Start () {	
		rt = GetComponent<RectTransform>();
		moveSpeed = 55f;
	}
	
	// Update is called once per frame
	void Update () {
		print(rt.position.y);
		if(moveIt){
			Vector3 temp = rt.position; 
			if(Input.GetKeyDown(KeyCode.Space)){
				temp.y = 361.5f;
				rt.position = temp;
				moveIt = false;
			}
			else{
				temp.y += moveSpeed*Time.deltaTime;
				rt.position = temp;
				if(rt.position.y >= 361.5f){
					temp.y = 361.5f;
					rt.position = temp;
					moveIt = false;
				}
			}
		}		
	}

	public void setMoveIt(bool move){ this.moveIt = move;}
}
