using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class LevelMenuControllerScript : MonoBehaviour {

	public Button B1Button, B2Button, B3Button, B4Button, B5Button, B6Button, 
				  B7Button, B8Button, B9Button, B10Button, B11Button, B12Button,
				  B13Button, B14Button, B15Button, B16Button, B17Button, B18Button, 
				  B19Button, B20Button, B21Button, B22Button, B23Button, B24Button, 
				  B25Button, B26Button;
	public int levelPassed;
	public int moveAlpacaAround;

	public Sprite alpacaLeft;
	public Sprite alpacaRight;

	public Image levelBanner;
	public Image levelImagePreview;

	// Use this for initialization
	void Start () {
		levelPassed = PlayerPrefs.GetInt("LevelPassed");
		moveAlpacaAround = levelPassed;

		levelBanner = GameObject.Find("LevelBanner").GetComponent<Image>();
		levelImagePreview = GameObject.Find("ImagePreview").GetComponent<Image>();

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
		B16Button.interactable = false;
		B17Button.interactable = false;
		B18Button.interactable = false;
		B19Button.interactable = false;
		B20Button.interactable = false;
		B21Button.interactable = false;
		B22Button.interactable = false;
		B23Button.interactable = false;
		B24Button.interactable = false;
		B25Button.interactable = false;
		B26Button.interactable = false;

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
			case 15:
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
				B16Button.interactable = true;
				break;
			case 16:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				break;
			case 17:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				break;
			case 18:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				break;
			case 19:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				break;
			case 20:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				break;
			case 21:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				B22Button.interactable = true;
				break;
			case 22:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				B22Button.interactable = true;
				break;
			case 23:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				B22Button.interactable = true;
				B23Button.interactable = true;
				break;
			case 24:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				B22Button.interactable = true;
				B23Button.interactable = true;
				B24Button.interactable = true;
				break;
			case 25:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				B22Button.interactable = true;
				B23Button.interactable = true;
				B24Button.interactable = true;
				B25Button.interactable = true;
				break;
			case 26:
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
				B16Button.interactable = true;
				B17Button.interactable = true;
				B18Button.interactable = true;
				B19Button.interactable = true;
				B20Button.interactable = true;
				B21Button.interactable = true;
				B22Button.interactable = true;
				B23Button.interactable = true;
				B24Button.interactable = true;
				B25Button.interactable = true;
				B26Button.interactable = true;
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
		string findThisButton;

		// Change the conditional values to match whatever the last level is
		findThisButton = "B" + (mostRecentLevel + 1).ToString() + "Button";
		Debug.Log("go to button " + findThisButton);
		if (mostRecentLevel == 22) findThisButton = "B" + (mostRecentLevel).ToString() + "Button";

		GameObject mostRecentStar = GameObject.Find(findThisButton);
		Vector3 mostRecentStarPosition = mostRecentStar.GetComponent<RectTransform>().position;

		GameObject alpacaSprite = GameObject.Find("AlpacaSprite");
		alpacaSprite.GetComponent<RectTransform>().position = mostRecentStarPosition + new Vector3(0, 40, 0);
		if ((mostRecentLevel >= 1 && mostRecentLevel <= 6)
		|| (mostRecentLevel >= 14 && mostRecentLevel <= 18)
		|| (mostRecentLevel == 22)) alpacaSprite.GetComponent<Image>().sprite = alpacaLeft;
		if ((mostRecentLevel >= 7 && mostRecentLevel <= 13)
		|| (mostRecentLevel >= 19 && mostRecentLevel <= 21)) alpacaSprite.GetComponent<Image>().sprite = alpacaRight;
	
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.A)){
			moveAlpacaAround = moveAlpacaAround - 1;
			positionAlpacaOnRecentLevel(moveAlpacaAround);
			if (moveAlpacaAround > levelPassed){
				levelBanner.sprite = GameObject.Find("banner" + (moveAlpacaAround + 1)).GetComponent<SpriteRenderer>().sprite;
				levelImagePreview.sprite = GameObject.Find("lockedLevel").GetComponent<SpriteRenderer>().sprite;
			}
			else {
				Debug.Log("movealpacaaround is: " + moveAlpacaAround);
				levelBanner.sprite = GameObject.Find("banner" + (moveAlpacaAround + 1)).GetComponent<SpriteRenderer>().sprite;
				levelImagePreview.sprite = GameObject.Find("level" + (moveAlpacaAround + 1)).GetComponent<SpriteRenderer>().sprite;
			}
		}
		if(Input.GetKeyDown(KeyCode.D)){
			moveAlpacaAround = moveAlpacaAround + 1;
			positionAlpacaOnRecentLevel(moveAlpacaAround);
			if (moveAlpacaAround > levelPassed){
				levelBanner.sprite = GameObject.Find("banner" + (moveAlpacaAround + 1)).GetComponent<SpriteRenderer>().sprite;
				levelImagePreview.sprite = GameObject.Find("lockedLevel").GetComponent<SpriteRenderer>().sprite;
			}
			else {
				levelBanner.sprite = GameObject.Find("banner" + (moveAlpacaAround + 1)).GetComponent<SpriteRenderer>().sprite;
				levelImagePreview.sprite = GameObject.Find("level" + (moveAlpacaAround + 1)).GetComponent<SpriteRenderer>().sprite;
			}
		}

		if ((Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.KeypadEnter)) 
		&& ((moveAlpacaAround) <= levelPassed)) {
			SceneManager.LoadScene("B" + (moveAlpacaAround + 1), LoadSceneMode.Single);
		} 
	
	}
}
