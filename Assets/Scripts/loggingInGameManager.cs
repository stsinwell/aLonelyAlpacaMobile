using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Text.RegularExpressions;
//using System.Threading.Tasks;
using UnityEditor;

public class loggingInGameManager : MonoBehaviour {

    static string SceneName = null;
	// Use this for initialization
	void Start () {
        LoggingManager.instance.Initialize(890, 2, false);
        LoggingManager.instance.RecordPageLoad();
        DontDestroyOnLoad(gameObject); // Prevent the logging manager been destroyed accidentally.
	}
	
	// Update is called once per frame
	void Update () {
        if(SceneName != SceneManager.GetActiveScene().name && SceneManager.GetActiveScene().name != "B1"
        && SceneManager.GetActiveScene().name != "privacything")
        {
            Debug.Log("active scene is " + SceneManager.GetActiveScene().name);
            // New scene has been loaded
            SceneName = SceneManager.GetActiveScene().name;
            Debug.Log("SceneName is now " + SceneName);
            OnLevelFinishedLoading(SceneName);
        }
	}

	void OnEnable() {
        //Tell OnLevelFinishedLoading to start listening for a scene change
        //as soon as this script is enabled.
        // SceneManager.sceneLoaded += OnLevelFinishedLoading;
    }

    void OnDisable() {
        // SceneManager.sceneLoaded -= OnLevelFinishedLoading;
    }

    public void OnLevelFinishedLoading(string sceneName){
        //get last number of level name
        //e.g. level B4 -> 4
        Regex getNumber = new Regex(@"\d+$");
        var levelNumber = Int32.Parse(getNumber.Match(sceneName).ToString());

        Debug.Log("level number is " + levelNumber);
        //record level number and level name
        LoggingManager.instance.RecordLevelStart(levelNumber, sceneName);
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