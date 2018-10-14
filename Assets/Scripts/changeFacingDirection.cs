using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;

public class changeFacingDirection : MonoBehaviour {

    public KeyInputAssist k;

    public Animator animator;

    public Sprite alpacaNE, alpacaNW, alpacaSE, alpacaSW;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (k.lastFacing == KeyInputAssist.Facing.PosZ) 
        {
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
            print("walking down");
            //this.GetComponent<SpriteRenderer>().sprite = alpacaNE;
            if(Input.GetKeyDown(KeyCode.D)){
                animator.SetBool("walkse", true);
                animator.SetInteger("countdown", 20);
            }
            else if(animator.GetInteger("countdown")>0){
                animator.SetBool("walkse", false);
                animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
            }
        }
    }
}
