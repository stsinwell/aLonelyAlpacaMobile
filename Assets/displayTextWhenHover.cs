using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class displayTextWhenHover : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler {

	public Image hoverTextImage;
	public Vector3 mouseOffset;

	// Use this for initialization
	void Start () {
		mouseOffset = new Vector3(0.0f, 45.0f, 0.0f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnPointerEnter(PointerEventData eventData)
    {
		Debug.Log("mouseover.");
		hoverTextImage = GameObject.Find("HoverText").GetComponent<Image>();
		if (transform.name == "Reset Butt") {
			hoverTextImage.sprite = GameObject.Find("reset_text").GetComponent<SpriteRenderer>().sprite;
			GameObject.Find("HoverText").transform.position = transform.position - mouseOffset;
		}
		/* if (transform.name == "Level Butt") {
			hoverTextImage.sprite = GameObject.Find("reset_text").GetComponent<SpriteRenderer>().sprite;
		}*/
		if (transform.name == "Zoom Butt") {
			hoverTextImage.sprite = GameObject.Find("zoom_text").GetComponent<SpriteRenderer>().sprite;
			GameObject.Find("HoverText").transform.position = transform.position - mouseOffset;
		}
		if (transform.name == "Music Butt") {
			if(gameObject.GetComponent<Image>().sprite.name == "music_on"){
				hoverTextImage.sprite = GameObject.Find("mute_text").GetComponent<SpriteRenderer>().sprite;
				GameObject.Find("HoverText").transform.position = transform.position - mouseOffset;
			}
			if(gameObject.GetComponent<Image>().sprite.name == "music_off"){
				hoverTextImage.sprite = GameObject.Find("unmute_text").GetComponent<SpriteRenderer>().sprite;
				GameObject.Find("HoverText").transform.position = transform.position - mouseOffset;
			}
		}
		if (transform.name == "Home Butt") {
			hoverTextImage.sprite = GameObject.Find("home_text").GetComponent<SpriteRenderer>().sprite;
			GameObject.Find("HoverText").transform.position = transform.position - mouseOffset;
		}
		if (transform.name == "PreviousLevelButton") {
			hoverTextImage.sprite = GameObject.Find("back").GetComponent<SpriteRenderer>().sprite;
			GameObject.Find("HoverText").transform.position = transform.position - mouseOffset;
		}
		 
	}

	public void OnPointerExit(PointerEventData eventData)
	{
		GameObject.Find("HoverText").transform.position = new Vector3(1000.0f, 0.0f, 0.0f);
	}
}
