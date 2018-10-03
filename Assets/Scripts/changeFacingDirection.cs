using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;

public class changeFacingDirection : MonoBehaviour {

    public KeyInputAssist k;

    public Sprite alpacaNE, alpacaNW, alpacaSE, alpacaSW;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (k.lastFacing == KeyInputAssist.Facing.PosZ) 
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaNE;
        }
        if (k.lastFacing == KeyInputAssist.Facing.NegZ)
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaSW;
        }
        if (k.lastFacing == KeyInputAssist.Facing.NegX)
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaNW;
        }
        if (k.lastFacing == KeyInputAssist.Facing.PosX)
        {
            this.GetComponent<SpriteRenderer>().sprite = alpacaSE;
        }
    }
}
