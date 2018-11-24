using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unclickable : MonoBehaviour {
    SpriteRenderer sr;
    Color normalColor;
    Color canBeDroppedOnColor;

	// Use this for initialization
	void Start () {
		sr = GetComponentInChildren<SpriteRenderer>();
        normalColor = new Color(1.0f, 1.0f, 1.0f, 1.0f);
        canBeDroppedOnColor = new Color(0.5f, 0.5f, 1.0f, 1.0f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    
    public void setNormalColor() {
        sr.color = normalColor;
    }
    
    public void setCanBeDroppedOnColor() {
        sr.color = canBeDroppedOnColor;
    }
}
