using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class DontDestroyAudio : MonoBehaviour {

	bool AudioBegin = false;
	public bool actuallyDestroyAfterAll;
	// Use this for initialization
	void Start () {
		
	}

	void Awake() {
		if (!AudioBegin) {
			GetComponent<AudioSource>().Play();
			if(!actuallyDestroyAfterAll) 
				DontDestroyOnLoad (this);
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
