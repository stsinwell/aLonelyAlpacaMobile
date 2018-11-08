using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreditsDisappear : MonoBehaviour {

	private Image creditsPopUp;
	// Use this for initialization
	void Start () {
		creditsPopUp = GetComponent<Image>();
		creditsPopUp.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetMouseButtonDown(0) && creditsPopUp.enabled)
			creditsPopUp.enabled = false;
	}

	public void toggleEnable(){
		creditsPopUp.enabled = !creditsPopUp.enabled;
	}

	public bool isEnabled(){
		return creditsPopUp.enabled;
	}
}
