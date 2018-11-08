using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuSelectorController : MonoBehaviour {

	public int selection;
	private RectTransform rt;
	private Vector3[] posArray;
	public GameObject PrivacyStatement;
	private PrivacyStatementDisappear PSDScript;
	private bool privacyUp;

	public bool firstTimePlaying = false;

	// Use this for initialization
	void Start () {
		rt = GetComponent<RectTransform>();
		posArray = new Vector3[4];
		posArray[0] = new Vector3( 106f, 18f, 0f);
		posArray[1] = new Vector3( 190f, 102f, 0f);
		posArray[2] = new Vector3( 420f, 102f, 0f);
		posArray[3] = new Vector3( 640f, 18f, 0f);
		// posArray[0] = new Vector3( -294f, -282f, 0f);
		// posArray[1] = new Vector3( -210f, -198f, 0f);
		// posArray[2] = new Vector3( 20f, -198f, 0f);
		// posArray[2] = new Vector3( 240f, -282f, 0f);
		selection = 1;
		rt.position = posArray[selection];
		PSDScript = PrivacyStatement.GetComponent<PrivacyStatementDisappear>();
		privacyUp = false;
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A)){
			changeSelection(false);
			if(privacyUp){
				PSDScript.toggleEnable();
				privacyUp = false;
			}
		}
		else if(Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D)){
			changeSelection(true);
			if(privacyUp){
				PSDScript.toggleEnable();
				privacyUp = false;
			}
		}
		else if(Input.GetKeyDown(KeyCode.Space)){
			select(selection);
		}
	}
	/*
	Change selection, true will increment, false will decrement
	*/
	public void changeSelection(bool inc){
		if(inc){
			if(selection<3) selection++;
			else selection = 3;
		}
		else{
			if(selection>0) selection--;
			else selection = 0;
		}
		rt.position = posArray[selection];
	}

	public void select(int selectedInt){
		switch(selectedInt){
			case 0: 
				break;
			case 1:
				firstTimePlaying = true;
				SceneManager.LoadScene("B1", LoadSceneMode.Single);
				break;
			case 2:
				SceneManager.LoadScene("Level Select Menu", LoadSceneMode.Single);
				break;
			case 3:
				PSDScript.toggleEnable();
				privacyUp = !privacyUp;
				break;
			default: break;
		}
	}
}
