using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinCollision : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnControllerColliderHit(ControllerColliderHit hit){
		if(hit.transform.tag == "Player"){
			print("win");
		}
	}

}
