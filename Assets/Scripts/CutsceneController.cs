using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CutsceneController : MonoBehaviour {

	/** Object of next cut scene */
	public GameObject nextScene;
	/** Image of next cut scene */
	private Image nextSceneImage;
	/** Image of the current cut scene */
	private Image curScene;
	/** FadeImage Script for this Scene */
	private FadeImage FIScript;
	/** Amount of time the current scene should stay for before
	    auto switching to the next */
	public float currSceneTime;
	/** Accumulator of time passed between frames */
	private float timeAccum;
	/** True if actively fading Out */
	private bool fadeActive = false;

	private bool wasEnabled = false;
	private bool endScene = false;

	private static int acc;
	private int id;
	// Use this for initialization
	void Start () {
		curScene = GetComponent<Image>();
		if(nextScene != null)
			nextSceneImage = nextScene.GetComponent<Image>();
		FIScript = GetComponent<FadeImage>();
		id = acc;
		acc++;
	}
	// Update is called once per frame
	void Update () {
		if(curScene.enabled){
			wasEnabled = true;
			if(!fadeActive){
				timeAccum += Time.deltaTime;
				if(timeAccum >= currSceneTime){
					//print("calling fade out " + id);
					FIScript.FadeOut();
					fadeActive = true;
					nextSceneImage.enabled = true;
				}
			}
		}
		else if(!endScene && wasEnabled){
			//print("disabled "+id);
			endScene = true;
			if(nextScene == null){
				SceneManager.LoadScene("B1", LoadSceneMode.Single);
			}
			// else nextSceneImage.enabled = true;
		}
	}
}
