using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class PressSpaceToAdvance : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Space)) {
			GameObject gmobjct = GameObject.FindWithTag("GameManager");
			gmobjct.GetComponent<loggingInGameManager>().OnLevelFinishedLoading("B1");
			SceneManager.LoadScene("B1", LoadSceneMode.Single);
		}
		
	}
}
