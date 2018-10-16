using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Text.RegularExpressions;

public class loggingInGameManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		LoggingManager.instance.Initialize(890, 1, false);
		LoggingManager.instance.RecordPageLoad(); //sends data to server indicating game has been loaded.


	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnEnable() {
        //Tell OnLevelFinishedLoading to start listening for a scene change
        //as soon as this script is enabled.
        SceneManager.sceneLoaded += OnLevelFinishedLoading;
    }

    void OnDisable() {
        SceneManager.sceneLoaded -= OnLevelFinishedLoading;
    }

    void OnLevelFinishedLoading(Scene scene, LoadSceneMode mode){

        //get last number of level name
        //e.g. level B4 -> 4
        Regex getNumber = new Regex(@"\d+$");
        var levelNumber = Int32.Parse(getNumber.Match(scene.name).ToString());

        //record level number and level name
        LoggingManager.instance.RecordLevelStart(levelNumber, scene.name);
    }
}

//todo:
	//position in front is logged in console. use this to determine player death position