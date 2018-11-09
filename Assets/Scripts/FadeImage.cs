using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class FadeImage : MonoBehaviour {

	/** Rate to fade image **/	
	public float fadeRate;
	/** Image being faded **/
	private Image image;
	/** Alpha value being targeted **/
	private float targetAlpha;
	/** Alpha value approximating zero **/
	private float alphaCutoff = 0.01f;
	
	private bool fadeOutEngaged;

	// Use this for initialization
	void Start (){
		if(fadeRate<=0) fadeRate = 5.0f;
	    image = GetComponent<Image>();
		targetAlpha = image.color.a;
	}
		
	// Update is called once per frame
	void Update () {
		Color curColor = image.color;
		float alphaDiff = Mathf.Abs(curColor.a - targetAlpha);
		if (alphaDiff>alphaCutoff){
			curColor.a = Mathf.Lerp(curColor.a, targetAlpha, fadeRate*Time.deltaTime);
			image.color = curColor;
		}
		else if(fadeOutEngaged){
			image.enabled = false;
		}
	}

	public void FadeOut(){
		targetAlpha = 0.0f;
		fadeOutEngaged = true;
	}

	public void FadeIn(){
		targetAlpha = 1.0f;
	}

	public bool getFadeOutEngaged(){ return fadeOutEngaged; }
}
