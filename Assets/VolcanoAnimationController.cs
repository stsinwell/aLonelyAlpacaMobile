using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolcanoAnimationController : MonoBehaviour {
	public float delay = 0f;
	Animator animatorComponent;

	// Use this for initialization
	void Start () {
		//animatorComponent.speed = 0.5f;
		Destroy (gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + delay); 
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
