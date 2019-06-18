using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class EnterLevelSelect : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void startLevelSelect(){
		SceneManager.LoadScene("Level Select Menu", LoadSceneMode.Single);
	}
}
