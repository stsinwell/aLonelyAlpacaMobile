using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DelayMangoSound : MonoBehaviour {

	// Use this for initialization
	public float delayTime = 1.5f;
	void Start () {
		gameObject.GetComponent<AudioSource>().PlayDelayed(delayTime);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
