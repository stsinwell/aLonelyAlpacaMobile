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

        Debug.Log("level number is " + levelNumber);
        //record level number and level name
        LoggingManager.instance.RecordLevelStart(levelNumber, scene.name);
    }

    void OnApplicationQuit() {
        //Record time in seconds from when player begins game to when player exits game.
        LoggingManager.instance.RecordEvent(4, "Player has quit game. Session took " + Time.time + " seconds.");

        //Record the level in which player exits the game.
        Regex getNumber = new Regex(@"\d+$");
        var lastLevelBeforePlayerExits = Int32.Parse(getNumber.Match(SceneManager.GetActiveScene().name).ToString());
        LoggingManager.instance.RecordEvent(5, "Player quit the game on level " + lastLevelBeforePlayerExits);
    }
}

//todo:
	//position in front is logged in console. use this to determine player death position
    //user SceneManager.sceneUnloaded to detect when level ends