using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class currentLevelName : MonoBehaviour {

	public string currentLevelNameString;
	// Use this for initialization
	void Start () {
		DontDestroyOnLoad(gameObject);
		// PlayerPrefs.DeleteAll();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
