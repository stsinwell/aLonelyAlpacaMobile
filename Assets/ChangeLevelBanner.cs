using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ChangeLevelBanner : MonoBehaviour, IPointerEnterHandler {
	public Image levelBanner;
	int defaultLevelNumber;

	// Use this for initialization
	void Start () {
		defaultLevelNumber = GameObject.Find("LevelMenuController").GetComponent<LevelMenuControllerScript>().levelPassed + 1;
		levelBanner = GameObject.Find("LevelBanner").GetComponent<Image>();
		levelBanner.sprite = GameObject.Find("banner" + defaultLevelNumber).GetComponent<SpriteRenderer>().sprite;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnPointerEnter(PointerEventData eventData)
     {
         string getLevelNumber = Regex.Match(gameObject.name, @"\d+").Value;
		Debug.Log("get level number is " + getLevelNumber);
		levelBanner.sprite = GameObject.Find("banner" + getLevelNumber).GetComponent<SpriteRenderer>().sprite;
     }
}
