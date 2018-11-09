using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelMenuControllerScript : MonoBehaviour {

	public Button B1Button, B2Button, B3Button, B4Button, B5Button, B6Button, 
				  B7Button, B8Button, B9Button, B10Button, B11Button, B12Button,
				  B13Button, B14Button, B15Button;
	int levelPassed;

	public Sprite alpacaLeft;
	public Sprite alpacaRight;

	// Use this for initialization
	void Start () {
		levelPassed = PlayerPrefs.GetInt("LevelPassed");
		B1Button.interactable = true;
		B2Button.interactable = false;
		B3Button.interactable = false;
		B4Button.interactable = false;
		B5Button.interactable = false;
		B6Button.interactable = false;
		B7Button.interactable = false;
		B8Button.interactable = false;
		B9Button.interactable = false;
		B10Button.interactable = false;
		B11Button.interactable = false;
		B12Button.interactable = false;
		B13Button.interactable = false;
		B14Button.interactable = false;
		B15Button.interactable = false;

		switch(levelPassed){
			case 1:
				B2Button.interactable = true;
				break;
			case 2:
				B2Button.interactable = true;
				B3Button.interactable = true;
				break;
			case 3:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				break;
			case 4:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				break;
			case 5:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				break;
			case 6:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				break;
			case 7:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				break;
			case 8:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				break;
			case 9:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				B10Button.interactable = true;
				break;
			case 10:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				B10Button.interactable = true;
				B11Button.interactable = true;
				break;
			case 11:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				B10Button.interactable = true;
				B11Button.interactable = true;
				B12Button.interactable = true;
				break;
			case 12:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				B10Button.interactable = true;
				B11Button.interactable = true;
				B12Button.interactable = true;
				B13Button.interactable = true;
				break;
			case 13:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				B10Button.interactable = true;
				B11Button.interactable = true;
				B12Button.interactable = true;
				B13Button.interactable = true;
				B14Button.interactable = true;
				break;
			case 14:
				B2Button.interactable = true;
				B3Button.interactable = true;
				B4Button.interactable = true;
				B5Button.interactable = true;
				B6Button.interactable = true;
				B7Button.interactable = true;
				B8Button.interactable = true;
				B9Button.interactable = true;
				B10Button.interactable = true;
				B11Button.interactable = true;
				B12Button.interactable = true;
				B13Button.interactable = true;
				B14Button.interactable = true;
				B15Button.interactable = true;
				break;
		}

		positionAlpacaOnRecentLevel(levelPassed);
	}

	public void levelToLoad(int level){
		//LoggingManager.instance.RecordLevelStart(level, "Selected from Level Select Menu.");
		if (SceneManager.GetActiveScene().name != "B0 - Menu") LoggingManager.instance.RecordLevelEnd();
		SceneManager.LoadScene(level);
	}

	public void positionAlpacaOnRecentLevel(int mostRecentLevel) {
		string findThisButton = "B" + (mostRecentLevel + 1).ToString() + "Button";
		GameObject mostRecentStar = GameObject.Find(findThisButton);
		Vector3 mostRecentStarPosition = mostRecentStar.GetComponent<RectTransform>().position;

		GameObject alpacaSprite = GameObject.Find("AlpacaSprite");
		alpacaSprite.GetComponent<RectTransform>().position = mostRecentStarPosition + new Vector3(0, 40, 0);
		if (mostRecentLevel >= 1 && mostRecentLevel <= 6) alpacaSprite.GetComponent<Image>().sprite = alpacaLeft;
		if (mostRecentLevel >= 7 && mostRecentLevel <= 14) alpacaSprite.GetComponent<Image>().sprite = alpacaRight;
	
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
