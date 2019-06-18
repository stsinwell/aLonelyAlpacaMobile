using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnlargeOnMouseOver : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnMouseOver()
     {
		Debug.Log("Mouse is over GameObject.");
		 Vector3 scale = GetComponent<RectTransform>().localScale;
         scale += new Vector3(2, 2, 2); //adjust these values as you see fit
     }
 
 
     public void OnMouseExit()
     {
		Debug.Log("Mouse is over GameObject.");
         Vector3 scale = GetComponent<RectTransform>().localScale;
         scale = new Vector3(1, 1, 1); //adjust these values as you see fit
     }
}
