using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class fireBlockCollision : MonoBehaviour {

    bool fireCollision = false;
	// Use this for initialization
	void Start () {
        
		
	}
	
	// Update is called once per frame
	void Update () {
    }

    void OnControllerColliderHit(ControllerColliderHit hit)
    {
        
        if (hit.collider.tag == "FireBlock")
        {
            fireCollision = true;
            //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

    public bool hasCollided(){
        return fireCollision;
    }
}
