using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;

public class changeFacingDirection : MonoBehaviour {

    public KeyInputAssist k;

    public Animator animator;

    public fireBlockCollision fireBlockCollisionScript;
    public bool has_block = false;
    bool has_block_prev = false;

    float pos_y_prev;
    bool started_falling;
    float fall_accumulation;
	// Use this for initialization
	void Start () {
		pos_y_prev = transform.position.y;
	}
	
	// Update is called once per frame
	void Update () {
        // Block/NoBlock Updates
        if(has_block != has_block_prev){
            animator.SetBool("is_blockpaca",!animator.GetBool("is_blockpaca"));
        }       
        has_block_prev = has_block;

        // Falling Anim/death_by_splat Updates
        float fall_diff = pos_y_prev-transform.position.y;
        if(fall_diff>0.1f && !started_falling){
            started_falling = true;
            fall_accumulation += fall_diff;
        }
        else if(pos_y_prev==transform.position.y){
            animator.SetBool("is_falling", false);
            started_falling = false;
            //death_by_splat check
            if(fall_accumulation > 2.5f){
                animator.SetBool("death_by_splat", true);
            }
            fall_accumulation = 0;
        }
        if(started_falling){
            fall_accumulation +=fall_diff;
            if(fall_accumulation>0.5f && !animator.GetBool("is_falling")){
                animator.SetBool("is_falling", true);
            }
        }
        pos_y_prev = transform.position.y;

        //dEAtH bY fIRE Updates
        if(fireBlockCollisionScript.hasCollided()){
            animator.SetBool("death_by_fire", true);
            if(animator.GetBool("death_by_splat")) animator.SetBool("death_by_splat", false);
        }

        // dead state update
        if(animator.GetBool("death_by_splat") || animator.GetBool("death_by_fire")){
            animator.SetBool("dead", true);
        }

        //Walking Anim Updates
        //NE
        if((Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow)) && !animator.GetBool("walkne")){
            animator.SetBool("walkse", false);
            animator.SetBool("walksw", false);
            animator.SetBool("walknw", false);
            animator.SetBool("walkne", true);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walkne")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walkne")){
            animator.SetBool("walkne", false);
        }
        //SW
        if((Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)) && !animator.GetBool("walksw")){
            animator.SetBool("walkse", false);
            animator.SetBool("walksw", true);
            animator.SetBool("walknw", false);
            animator.SetBool("walkne", false);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walksw")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walksw")){
            animator.SetBool("walksw", false);
        }
        //NW
        if((Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow)) && !animator.GetBool("walknw")){
            animator.SetBool("walkse", false);
            animator.SetBool("walksw", false);
            animator.SetBool("walknw", true);
            animator.SetBool("walkne", false);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walknw")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walknw")){
            animator.SetBool("walknw", false);
        }       
        //SE
        if((Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow)) && !animator.GetBool("walkse")){
            animator.SetBool("walkse", true);
            animator.SetBool("walksw", false);
            animator.SetBool("walknw", false);
            animator.SetBool("walkne", false);
            animator.SetInteger("countdown", 20);
        }
        else if(animator.GetInteger("countdown")>0 && animator.GetBool("walkse")){
            animator.SetInteger("countdown",(animator.GetInteger("countdown")-1));
        }
        else if(animator.GetInteger("countdown")==0 && animator.GetBool("walkse")){
            animator.SetBool("walkse", false);
        }

    }
}
