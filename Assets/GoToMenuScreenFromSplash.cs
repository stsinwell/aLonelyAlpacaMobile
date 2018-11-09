using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToMenuScreenFromSplash : MonoBehaviour {

	public float delay = 3;
    public string menuScreen = "B0 - Menu";

	// Use this for initialization
	void Start () {
		StartCoroutine(LoadLevelAfterDelay(delay));
	}
	
	IEnumerator LoadLevelAfterDelay(float delay)
     {
         yield return new WaitForSeconds(delay);
         SceneManager.LoadScene(menuScreen);
     }

	// Update is called once per frame
	void Update () {
		
	}
}
