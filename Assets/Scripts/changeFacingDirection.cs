using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;

public class changeFacingDirection : MonoBehaviour {

    public KeyInputAssist k;

    public Animator animator;

    public Sprite alpacaNE, alpacaNW, alpacaSE, alpacaSW;

    public bool has_block = false;
    bool has_block_prev = false;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if(has_block != has_block_prev){
            animator.SetBool("is_blockpaca",!animator.GetBool("is_blockpaca"));
        }
        //this.GetComponent<SpriteRenderer>().sprite = alpacaNE;
        if(Input.GetKeyDown(KeyCode.W) && !animator.GetBool("walkne")){
            animator.SetBool("walkne", true);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walkne")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walkne")){
            animator.SetBool("walkne", false);
        }
        

        if(Input.GetKeyDown(KeyCode.S) && !animator.GetBool("walksw")){
            animator.SetBool("walksw", true);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walksw")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walksw")){
            animator.SetBool("walksw", false);
        }
                
        //this.GetComponent<SpriteRenderer>().sprite = alpacaNW;
        if(Input.GetKeyDown(KeyCode.A) && !animator.GetBool("walknw")){
            animator.SetBool("walknw", true);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walknw")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walknw")){
            animator.SetBool("walknw", false);
        }
        
    
        if(Input.GetKeyDown(KeyCode.D) && !animator.GetBool("walkse")){
            animator.SetBool("walkse", true);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walkse")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walkse")){
            animator.SetBool("walkse", false);
        }
        
        has_block_prev = has_block;
    }
}
