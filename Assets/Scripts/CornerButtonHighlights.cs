using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CornerButtonHighlights : MonoBehaviour {

	public GameObject W_butt;
	public GameObject A_butt;
	public GameObject S_butt;
	public GameObject D_butt;

	private Image W_butt_im;
	private Image A_butt_im;
	private Image S_butt_im;
	private Image D_butt_im;

	Color defaultColor;
	Color highlightedColor;

	// Use this for initialization
	void Start () {
		W_butt_im = W_butt.GetComponent<Image>();
		A_butt_im = A_butt.GetComponent<Image>();
		S_butt_im = S_butt.GetComponent<Image>();
		D_butt_im = D_butt.GetComponent<Image>();

		defaultColor = new Color(1.0f, 1.0f, 1.0f, 1.0f);
        highlightedColor = new Color(0.8f, 0.8f, 0.2f, 1.0f);
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKey(KeyCode.W)){
			W_butt_im.color = highlightedColor;
			A_butt_im.color = defaultColor;
			S_butt_im.color = defaultColor;
			D_butt_im.color = defaultColor;
		}
		else if(Input.GetKey(KeyCode.A)){
			W_butt_im.color = defaultColor;
			A_butt_im.color = highlightedColor;
			S_butt_im.color = defaultColor;
			D_butt_im.color = defaultColor;
		}
		else if(Input.GetKey(KeyCode.S)){
			W_butt_im.color = defaultColor;
			A_butt_im.color = defaultColor;
			S_butt_im.color = highlightedColor;
			D_butt_im.color = defaultColor;
		}
		else if(Input.GetKey(KeyCode.D)){
			W_butt_im.color = defaultColor;
			A_butt_im.color = defaultColor;
			S_butt_im.color = defaultColor;
			D_butt_im.color = highlightedColor;
		}
		else{
			W_butt_im.color = defaultColor;
			A_butt_im.color = defaultColor;
			S_butt_im.color = defaultColor;
			D_butt_im.color = defaultColor;
		}
		
	}
}
