﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;


public class VolcanoAnimationController : MonoBehaviour {
	public float delay = 0f;
	public 
	float speed = 2.0f; //how fast it shakes
	float amount = 20.0f; //how much it shakes
	float position;
	Animator animatorComponent;

	public GameObject player;
	public GameObject canvas;

	// Use this for initialization
	void Start () {
		//animatorComponent.speed = 0.5f;
		//StartCoroutine(playAnimation());
		position = gameObject.transform.position.x;
		Destroy (gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + delay); 
		StartCoroutine(stopMovement());
	}
	
	// Update is called once per frame
	void Update () {
		position = Mathf.Sin(Time.time * speed) * amount;
	}
	
	public IEnumerator stopMovement() {
	 	canvas.SetActive(false);
		player.GetComponent<WorldScript>().enabled = false;
    	yield return new WaitForSeconds(this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length - 0.1f);
		player.GetComponent<WorldScript>().enabled = true;
 		canvas.SetActive(true);
	}
}
