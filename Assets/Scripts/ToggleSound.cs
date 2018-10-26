using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleSound : MonoBehaviour {

	//private AudioListener audioListener;
	private bool t;

	// Use this for initialization
	void Start () {
		t = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void toggle(){
		t = !t;
		if (t)
			AudioListener.volume = 1f;
		else
			AudioListener.volume = 0f;
	}

}
