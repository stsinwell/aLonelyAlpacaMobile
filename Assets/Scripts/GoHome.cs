using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoHome : MonoBehaviour {

	public string menuLevel;
	
	// Use this for initialization
	void Start () {
		
	}
	
	public void goHome() {
		SceneManager.LoadScene(menuLevel, LoadSceneMode.Single);
		LoggingManager.instance.RecordEvent(7, "Player pressed HOME button.");
	}
}
