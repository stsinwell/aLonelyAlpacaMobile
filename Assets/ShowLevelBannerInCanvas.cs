using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Text.RegularExpressions;

public class ShowLevelBannerInCanvas : MonoBehaviour {
	Image uiImage;
	String sceneName;
	public Sprite[] LevelBannerList;

	// Use this for initialization
	void Start () {
		//Fetch the Image from the GameObject
        uiImage = GetComponent<Image>();

		//Get Level Number
		sceneName = SceneManager.GetActiveScene().name;
		Regex getNumber = new Regex(@"\d+$");
        var levelNumber = Int32.Parse(getNumber.Match(sceneName).ToString());
		Debug.Log("level banner numebr is " + levelNumber);

		uiImage.sprite = LevelBannerList[levelNumber - 1];
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
