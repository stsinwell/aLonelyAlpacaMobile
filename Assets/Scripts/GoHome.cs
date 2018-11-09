using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoHome : MonoBehaviour {

	public string menuLevel;
	public string levelSelect;
	
	// Use this for initialization
	void Start () {
		
	}
	
	public void goHome() {
		SceneManager.LoadScene(menuLevel, LoadSceneMode.Single);
		LoggingManager.instance.RecordEvent(7, "Player pressed HOME button.");
	}

	public void goToLevelSelect() {
		SceneManager.LoadScene(levelSelect, LoadSceneMode.Single);
		LoggingManager.instance.RecordEvent(7, "Player pressed LEVEL SELECT button.");
	}
}
