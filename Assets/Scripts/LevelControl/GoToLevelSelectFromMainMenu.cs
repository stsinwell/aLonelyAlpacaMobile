using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToLevelSelectFromMainMenu : MonoBehaviour {

	public void GoToLevelSelect() {
		SceneManager.LoadScene("Level Select Menu Mobile");
	}
}
