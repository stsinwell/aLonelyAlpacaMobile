using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeSyncer : MonoBehaviour {

	public GameObject fadeMaster;
	private FadeImage fadeMasterFIScript;
	private FadeImage FIScript;
	// Use this for initialization
	void Start () {
		fadeMasterFIScript = fadeMaster.GetComponent<FadeImage>();
		FIScript = GetComponent<FadeImage>();
	}
	// Update is called once per frame
	void Update () {
		if(fadeMasterFIScript .getFadeOutEngaged())
			FIScript.FadeOut();
	}
}
