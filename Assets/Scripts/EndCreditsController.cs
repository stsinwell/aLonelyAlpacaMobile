using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndCreditsController : MonoBehaviour {

	private Image creditsImage;
	public GameObject firstScreenAfterCreds;
	private Image firstScreenAfterCredsImage;
	private CutsceneController firstScreenAfterCredsCutsceneController;

	public float endPauseTime;
	private FadeImage FIScript;
	private RectTransform rt;
	private float moveSpeed;
	private bool done;
	//private bool speedyCreds;
	private const float initial_speed = 55f;
	private const float initial_pos = -968f;
	private const float final_position = 968f;
	// Use this for initialization
	void Start () {
		rt = GetComponent<RectTransform>();
		FIScript = GetComponent<FadeImage>();
		creditsImage = GetComponent<Image>();
		firstScreenAfterCredsImage = firstScreenAfterCreds.GetComponent<Image>();
		firstScreenAfterCredsCutsceneController = firstScreenAfterCreds.GetComponent<CutsceneController>();
		moveSpeed = initial_speed;
	}
	
	// Update is called once per frame
	void Update () {
		if(!done){
			Vector3 temp = rt.position; 
			if(Input.GetKey(KeyCode.Space)){
				moveSpeed = initial_speed*4;
				//moveSpeed = speedyCreds ? initial_speed : (initial_speed*3);
				//speedyCreds = !speedyCreds;
			}
			else if(rt.position.y >= (final_position*0.8f)){
				moveSpeed-= 2.5f*Time.deltaTime;
				if(moveSpeed<=20) moveSpeed = 20;
			}
			else moveSpeed = initial_speed;
			temp.y += moveSpeed*Time.deltaTime;
			rt.position = temp;
			if(rt.position.y >= final_position){
				temp.y = final_position;
				rt.position = temp;
				done = true;
			}
		}
		else{
			StartCoroutine(FadeAfterTime(endPauseTime));
		}
		if(!creditsImage.enabled){
			firstScreenAfterCredsCutsceneController.enabled = true;
		}
	}

	public bool isDone() { return done; }

	/* waits for time seconds, then fades out */
	IEnumerator FadeAfterTime(float time){
    	yield return new WaitForSeconds(time);
     	FIScript.FadeOut(); 
		firstScreenAfterCredsImage.enabled = true;
 	}
}
