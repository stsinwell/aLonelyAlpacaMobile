using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WinCollision : MonoBehaviour {

    public Object nextLevel;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	}

	void OnControllerColliderHit(ControllerColliderHit hit){
		if(hit.collider.tag == "Goal"){
			SceneManager.LoadScene(nextLevel.name, LoadSceneMode.Single);
		}
	}

}
