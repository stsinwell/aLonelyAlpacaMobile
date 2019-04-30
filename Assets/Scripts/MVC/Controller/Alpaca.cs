using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Anonym.Isometric;


public class Alpaca : MonoBehaviour {

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	// Use this for initialization
	void Start () {
        if(GameObject.FindGameObjectsWithTag("WORLD").Length > 0) {
            WorldScript world = GameObject.FindGameObjectsWithTag("WORLD")[0].GetComponent<WorldScript>();
            world.AddAlpaca(this);
        }
	}
	
	// Update is called once per frame
	void Update () {
	}

	/**
	 * Get current alpaca position
	 */
	public Vector3 GetCurrAlpacaLocation()
    {
    	Vector3 coords = gameObject.transform.position;
		coords.x = (float)Math.Round(coords.x);
		coords.y = (float)Math.Round(coords.y);
		coords.z = (float)Math.Round(coords.z);
    	return coords;
    }

    /**
     * Move alpaca to this block
     *
     * @ param {direction} coordinate of where alpaca goes
     */
    public void Move(Vector3 direction)
    {
    	// direction.y -= 0.2f;
		gameObject.transform.position = direction;
    }

    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

    public Animator animator;

    public void SetSquashed() {

    }

    public void SetFlamed() {

    }

    public void SetFacingDirection(int dir) {

    }

    public void SetFalling() {

    }

    public void SetHasBlock() {

    }

    public void SetNoBlock() {

    }
}

