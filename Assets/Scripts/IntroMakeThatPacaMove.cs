using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroMakeThatPacaMove : MonoBehaviour {

	public GameObject pacaPic;
	private IntroMoveAlpaca IMAScript;
	private FadeImage FIScript;
	private bool done;

	// Use this for initialization
	void Start () {
		IMAScript = pacaPic.GetComponent<IntroMoveAlpaca>();
		FIScript = GetComponent<FadeImage>();	
	}
	
	// Update is called once per frame
	void Update () {
		if(FIScript.getFadeOutEngaged() && !done){
			IMAScript.setMoveIt(true);
			done = true;
		}

	}
}
