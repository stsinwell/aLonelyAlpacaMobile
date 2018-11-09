using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class PressSpaceToAdvance : MonoBehaviour {

	public string levelName;

	// Use this for initialization
	void Start () {
		
	}
	
	//Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Space)) {
			startGame();
		}		
	}

	public void startGame(){
		GameObject gmobjct = GameObject.FindWithTag("GameManager");
		gmobjct.GetComponent<loggingInGameManager>().OnLevelFinishedLoading(levelName.Substring(0,2));
		SceneManager.LoadScene(levelName, LoadSceneMode.Single);
	}
}
