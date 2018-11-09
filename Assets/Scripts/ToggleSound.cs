using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleSound : MonoBehaviour {

	//private AudioListener audioListener;
	static bool t = true;

	// Use this for initialization
	void Start () {
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
