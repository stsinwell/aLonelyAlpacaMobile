using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelControlScript : MonoBehaviour {

	public static LevelControlScript instance = null;
	
	int sceneIndex, levelPassed;

	// Use this for initialization
	void Start () {
		if (instance == null){
			instance = this;
		}
		else if (instance != this){
			Destroy (gameObject);
		}

		//sceneIndex = SceneManager.GetActiveScene().buildIndex;
		//levelPassed = PlayerPrefs.GetInt("LevelPassed");
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
