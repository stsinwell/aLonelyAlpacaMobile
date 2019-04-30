using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Anonym.Isometric;


public class Alpaca : MonoBehaviour {

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	// Use this for initialization
	void Start () {
		// Vector3 vec = gameObject.transform.position;
		// vec.x = (int) vec.x;
		// vec.y = (int) vec.y;
		// vec.y -= 0.2f;
		// vec.z = (int) vec.z;
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
    	Vector3 coords = gameObject.transform.position;
		coords.x = (float)Math.Round(coords.x);
		coords.y = (float)Math.Round(coords.y);
		coords.z = (float)Math.Round(coords.z);
    	return coords;
    }

    public void Move(Vector3 direction)
    {
    	// direction.y -= 0.2f;
		gameObject.transform.position = direction;
    }
}

