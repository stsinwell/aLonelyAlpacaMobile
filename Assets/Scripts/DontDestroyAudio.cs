using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class DontDestroyAudio : MonoBehaviour {

	static bool AudioBegin = false;

	// Use this for initialization
	void Start () {
		
	}

	void Awake() {
		if (!AudioBegin) {
			GetComponent<AudioSource>().Play();
			DontDestroyOnLoad (gameObject);
			AudioBegin = true;
		}

		if (FindObjectsOfType(GetType()).Length > 1)
         {
             Destroy(gameObject);
         }
	}
	
	// Update is called once per frame
	void Update () {
	}
}
