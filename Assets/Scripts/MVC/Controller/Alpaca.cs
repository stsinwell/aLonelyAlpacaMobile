using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Anonym.Isometric;
using UnityEngine.UI;


public class Alpaca : MonoBehaviour {

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

	float dest_y = -100; // destined height (y coord), -100 if not falling
	bool squash = false; // will squash when reach destination
	bool dead = false; // whether alpaca be dead
	const float OFFSET = 0.23f; // sketchy offset that you shift alpaca down for

	// Use this for initialization
	void Start () {
        if(GameObject.FindGameObjectsWithTag("WORLD").Length > 0) {
            WorldScript world = GameObject.FindGameObjectsWithTag("WORLD")[0].GetComponent<WorldScript>();
            world.AddAlpaca(this);
        }

        if(GameObject.Find("MusicTime") != null)
        	music = GameObject.Find("MusicTime").GetComponent<AudioSource>();

    	if (music != null) 
			music.volume = 0.3f;

		dest_y = -100;

		Vector3 tmp = GetCurrAlpacaLocation();
		tmp.y -= OFFSET;
		gameObject.transform.position = tmp;
	}
	
	// Update is called once per frame
	void Update () {
		// fall if not at destinated height yet
		if(dest_y != -100 && GetY() > dest_y) {
			Vector3 coords = gameObject.transform.position;
			coords.y -= Time.deltaTime * 15;
			// Debug.Log("falling " + coords.y);
			gameObject.transform.position = coords;
			SetFalling(true);
		} else if(dest_y != -100 && GetY() <= dest_y) {
			Vector3 coords = gameObject.transform.position;
			coords.y = dest_y;
			gameObject.transform.position = coords;
			dest_y = -100;
			SetFalling(false);
			if(squash) {
				SetSquashed();
				squash = false;
			}
		}

		//Decrement walk_anim_timer - eventually disable countdown flag
		// if (animator.GetInteger("countdown") > 0) {
		// 	walk_countdown_local -= Time.deltaTime;
		// 	if (walk_countdown_local <= 0) {
		// 		walk_countdown_local = 0;
		// 		animator.SetInteger("countdown", 0);
		// 	}
		// }
	}

	/**
	 * Get current alpaca position
	 */
	public Vector3 GetCurrAlpacaLocation()
    {
    	Vector3 coords = gameObject.transform.position;
		coords.x = (float)Math.Round(coords.x);
		coords.y = (float)Math.Round(coords.y);
		coords.z = (float)Math.Round(coords.z);
    	return coords;
    }

    private float GetY() {
    	return gameObject.transform.position.y + 0.3f;
    }


    /**
     * Move alpaca to this block
     *
     * @ param {direction} coordinate of where alpaca goes
     */
    public void Move(Vector3 dir)
    {
    	// direction.y -= 0.2f;
    	Vector3 coords = GetCurrAlpacaLocation();
    	if(dir.y < coords.y) {
    		if(coords.y - dir.y > 2.5) 
    			squash = true;
			gameObject.transform.position =  new Vector3(dir.x, coords.y, dir.z);
			dest_y = dir.y - OFFSET;
		} else {
			UpdateWalk();
			dir.y -= OFFSET;
			gameObject.transform.position = dir;
		}
    }

    /**
     * Returns whether alpaca is dead :(
     */
    public bool IsDead() {
    	return dead;
    }

    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
    // = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

    public Animator animator; // alpaca animator
    private AudioSource music; // background music (reference to change volume if dead)
    public Image deathImage; // death banner image
    public AudioSource deathSong; // death audio
    /** 
     * To make animations work better, this float keeps track of how long a walk animation
     * plays for before switching to idling again.
     * In particular, this float is decremented by deltaTime each cycle until it reaches <= 0, 
     * at which point it flips the "countdown" flag for the animator(switches back to idle)
     */
    private const float WALK_ANIM_TIME = 0.3f;
    float walk_countdown_local = 0;

    int dir = 2; // direction alpaca is facing, set SetFacingDirection for more

    /**
     * View stuff for death (draw death banner & play death music & soften bg music)
     */
    private void Died() {
    	dead = true;
		deathImage.enabled = true;
		if (!deathSong.isPlaying)
		{
			if (music != null) 
				music.volume = 0.005f;
			deathSong.Play();
		}
    }

    /**
     * View stuff for when alpaca is squashed
     */
    public void SetSquashed() {
    	animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
		animator.SetBool("death_by_fire", false);
		animator.SetBool("death_by_splat", true);
		animator.SetBool("dead", true);

		Died();
    }

    public void SetFlamed() {
    	Debug.Log("death by fire");
    	animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
		animator.SetBool("death_by_splat", false);
		animator.SetBool("death_by_fire", true);
		animator.SetBool("dead", true);

    	Died();
    }

    /**
     *  -----------
	 * |  0  |  1  |
	 * |-----------
	 * |  3  |  2  |
	 *  -----------
     */
    public void SetFacingDirection(int dir) {
		this.dir = dir;
    }

    public void StopWalk() {
    	animator.SetBool("poof", false);
		animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
    }

    public void UpdateWalk() {
		if (dir == 1 && !animator.GetBool("walkne"))
		{
			animator.SetInteger("countdown", 1);
			animator.SetBool("walkse", false);
			animator.SetBool("walksw", false);
			animator.SetBool("walknw", false);
			animator.SetBool("walkne", true);
			walk_countdown_local = WALK_ANIM_TIME;
			animator.SetInteger("countdown", 0);
		}
		// else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walkne"))
		// 	animator.SetBool("walkne", false);

		//SW
		if (dir == 3 && !animator.GetBool("walksw"))
		{
			animator.SetBool("walkse", false);
			animator.SetBool("walksw", true);
			animator.SetBool("walknw", false);
			animator.SetBool("walkne", false);
			// animator.SetInteger("countdown", 1);
			walk_countdown_local = WALK_ANIM_TIME;
			animator.SetInteger("countdown", 0);
		}
		// else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walksw"))
		// 	animator.SetBool("walksw", false);

		//NW
		if (dir == 0 && !animator.GetBool("walknw"))
		{
			animator.SetBool("walkse", false);
			animator.SetBool("walksw", false);
			animator.SetBool("walknw", true);
			animator.SetBool("walkne", false);
			// animator.SetInteger("countdown", 1);
			walk_countdown_local = WALK_ANIM_TIME;
			animator.SetInteger("countdown", 0);
		}
		// else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walknw"))
		// 	animator.SetBool("walknw", false);

		//SE
		if (dir == 2 && !animator.GetBool("walkse"))
		{
			animator.SetBool("walkse", true);
			animator.SetBool("walksw", false);
			animator.SetBool("walknw", false);
			animator.SetBool("walkne", false);
			// animator.SetInteger("countdown", 1);
			walk_countdown_local = WALK_ANIM_TIME;
			animator.SetInteger("countdown", 0);
		}
		// else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walkse"))
		// 	animator.SetBool("walkse", false);
    }

    public void SetFalling(bool set) {
		animator.SetBool("walkse", false);
		animator.SetBool("walksw", false);
		animator.SetBool("walknw", false);
		animator.SetBool("walkne", false);
		animator.SetBool("is_falling", set);
    }

    bool lastBlock;

    public void SetBlock(bool has) {
    	animator.SetBool("poof", has);
		animator.SetBool("is_blockpaca", has);
		lastBlock = has;
    }
}

