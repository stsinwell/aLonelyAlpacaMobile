using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;


public class Alpaca : MonoBehaviour {

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	// Use this for initialization
	void Start () {
        // Add to game model
        if(GameObject.FindGameObjectsWithTag("WORLD").Length > 0) {
            WorldScript world = GameObject.FindGameObjectsWithTag("WORLD")[0].GetComponent<WorldScript>();
            world.AddAlpaca(this);
        }
	}
	
	// Update is called once per frame
	void Update () {

	}

	// Get current alpaca position
	public Vector3 GetCurrAlpacaLocation()
    {
    	Vector3 vec = gameObject.transform.position;
    	vec.y += 0.2f;
    	return vec;
    }

    public void Move(Vector3 direction)
    {
    	direction.y -= 0.2f;
		gameObject.transform.position = direction;
    }
}

