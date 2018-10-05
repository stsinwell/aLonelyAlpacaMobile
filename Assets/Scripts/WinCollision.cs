using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WinCollision : MonoBehaviour {

<<<<<<< HEAD
	public string nextLevel;

=======
    public Object nextLevel;
>>>>>>> 40d7e43b381422a907d3d426e9f9323ab2a66441
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	}

	void OnControllerColliderHit(ControllerColliderHit hit){
		if(hit.collider.tag == "Goal"){
<<<<<<< HEAD
			SceneManager.LoadScene(nextLevel, LoadSceneMode.Single);
=======
			SceneManager.LoadScene(nextLevel.name, LoadSceneMode.Single);
>>>>>>> 40d7e43b381422a907d3d426e9f9323ab2a66441
		}
	}

}
