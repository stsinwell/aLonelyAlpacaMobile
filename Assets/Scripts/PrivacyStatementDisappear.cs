using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrivacyStatementDisappear : MonoBehaviour {

	private Image privacyStatement;
	// Use this for initialization
	void Start () {
		privacyStatement = GetComponent<Image>();
		privacyStatement.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetMouseButtonDown(0) && privacyStatement.enabled)
			privacyStatement.enabled = false;
	}

	public void toggleEnable(){
		privacyStatement.enabled = !privacyStatement.enabled;
	}

	public bool isEnabled(){
		return privacyStatement.enabled;
	}
}
