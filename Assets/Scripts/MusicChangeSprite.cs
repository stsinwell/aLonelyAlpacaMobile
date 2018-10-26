using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MusicChangeSprite : MonoBehaviour {

	public Sprite musicOn;
	public Sprite musicOff;
	public bool isMusicOn;
	private Image musicImage;

	// Use this for initialization
	void Start () {
		musicImage = GetComponent<Image>();
		//musicImage.sprite = musicOn;
		//isMusicOn = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void changeIcon(){
		if(isMusicOn) musicImage.sprite = musicOff;
		else musicImage.sprite = musicOn;
		isMusicOn = !isMusicOn;
	}
}
