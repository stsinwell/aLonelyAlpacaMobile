using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeFacingDirection : MonoBehaviour {

    public Sprite alpacaNE, alpacaNW, alpacaSE, alpacaSW;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKey(KeyCode.W))
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaNE;
        }
        if (Input.GetKey(KeyCode.S))
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaSW;
        }
        if (Input.GetKey(KeyCode.A))
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaNW;
        }
        if (Input.GetKey(KeyCode.D))
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaSE;
        }
    }
}
