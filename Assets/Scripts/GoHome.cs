using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoHome : MonoBehaviour
{

  public string menuLevel;
  public string levelSelect;
  GameObject currentLevel;
  currentLevelName currentLevelScript;
  GameObject previousLevel;
  currentLevelName previousLevelScript;

  // Use this for initialization
  void Start()
  {

  }

  public void goHome()
  {
    SceneManager.LoadScene(menuLevel, LoadSceneMode.Single);
  }

  public void goToLevelSelect()
  {
    currentLevel = GameObject.Find("GameObject");
    currentLevelScript = currentLevel.GetComponent<currentLevelName>();
    currentLevelScript.currentLevelNameString = SceneManager.GetActiveScene().name;
    Debug.Log("current level name: " + currentLevelScript.currentLevelNameString);

    SceneManager.LoadScene(levelSelect, LoadSceneMode.Single);
  }

  public void goBackToPreviousLevel()
  {
    previousLevel = GameObject.Find("GameObject");
    if (previousLevel == null)
    {
      goHome();
    }
    else
    {
      previousLevelScript = previousLevel.GetComponent<currentLevelName>();
      SceneManager.LoadScene(previousLevelScript.currentLevelNameString, LoadSceneMode.Single);
    }
  }
}
