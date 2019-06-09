using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Anonym.Isometric;
using UnityEngine.EventSystems;

public class changeFacingDirection : MonoBehaviour
{

  public KeyInputAssist k;

  public Animator animator;

  public IsometricMovement IsometricMovementScript;
  // has_block is updated by the pick-up-block logic in KeyInputAssist
  public bool has_block = false;
  bool has_block_prev = false;

  float pos_y_prev;
  bool started_falling;
  float fall_accumulation;
  /** To make animations work better, this float keeps track of how long a walk animation
      plays for before switching to idling again.
      In particular, this float is decremented by deltaTime each cycle until it reaches <= 0, 
      at which point it flips the "countdown" flag for the animator(switches back to idle)
  **/
  float walk_countdown_local;
  private const float WALK_ANIM_TIME = 0.3f;

  // Use this for initialization
  void Start()
  {
    pos_y_prev = transform.position.y;
  }
    int middle_w = Screen.width / 2;
    int middle_h = Screen.height / 2;

    bool KeyToMouse(KeyCode key) {
        if (!Input.GetMouseButton(0) || EventSystem.current.IsPointerOverGameObject()) return false;
        Vector2 click = Input.mousePosition;
        if (key == KeyCode.W && ((click.x > middle_w) && (click.y > middle_h)))
        {
            return true;
        }
        else if (key == KeyCode.A && ((click.x < middle_w) && (click.y > middle_h)))
        {
            return true;
        }
        else if (key == KeyCode.S && ((click.x < middle_w) && (click.y < middle_h)))
        {
            return true;
        }
        else if (key == KeyCode.D && ((click.x > middle_w) && (click.y < middle_h)))
        {
            return true;
        }
        return false;
    }

  // Update is called once per frame
  void Update()
  {
    bool squash_flag = false;
    // Block/NoBlock Updates
    if (has_block != has_block_prev)
    {
      animator.SetBool("is_blockpaca", !animator.GetBool("is_blockpaca"));
    }
    has_block_prev = has_block;

    // Falling Anim/death_by_splat Updates
    float fall_diff = pos_y_prev - transform.position.y;
    //print(fall_diff);
    if (fall_diff > 0.1f && !started_falling)
    {
      started_falling = true;
      fall_accumulation += fall_diff;
    }
    else if (fall_diff < 0.1f)
    {
      animator.SetBool("is_falling", false);
      started_falling = false;
      fall_accumulation = 0;
      //death_by_splat check
      if (IsometricMovementScript.deathType == IsometricMovement.deathByFalling)
      {
        squash_flag = true;
        //animator.SetBool("death_by_splat", true);
      }
    }
    if (started_falling)
    {
      fall_accumulation += fall_diff;
      if (fall_accumulation > 0.5f && !animator.GetBool("is_falling"))
      {
        animator.SetBool("is_falling", true);
      }
    }
    pos_y_prev = transform.position.y;

    //dEAtH bY fIRE Updates
    if (IsometricMovementScript.deathType == IsometricMovement.deathByFire)
    {
      //print("entering uireowf");
      animator.SetBool("death_by_fire", true);
      animator.SetBool("death_by_splat", false);
      if (squash_flag) squash_flag = false;
    }
    else if (squash_flag)
    {
      animator.SetBool("death_by_splat", true);
    }

    // dead state update
    if (animator.GetBool("death_by_splat") || animator.GetBool("death_by_fire"))
    {
      animator.SetBool("dead", true);
    }

    //Walking Anim Updates
    //NE
        if ((Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow) || KeyToMouse(KeyCode.W)) && !animator.GetBool("walkne"))
    {
      animator.SetInteger("countdown", 1);
      animator.SetBool("walkse", false);
      animator.SetBool("walksw", false);
      animator.SetBool("walknw", false);
      animator.SetBool("walkne", true);
      walk_countdown_local = WALK_ANIM_TIME;
    }
    else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walkne"))
      animator.SetBool("walkne", false);

    //SW
        if ((Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow) || KeyToMouse(KeyCode.S)) && !animator.GetBool("walksw"))
    {
      animator.SetBool("walkse", false);
      animator.SetBool("walksw", true);
      animator.SetBool("walknw", false);
      animator.SetBool("walkne", false);
      animator.SetInteger("countdown", 1);
      walk_countdown_local = WALK_ANIM_TIME;
    }
    else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walksw"))
      animator.SetBool("walksw", false);

    //NW
        if ((Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow) || KeyToMouse(KeyCode.A)) && !animator.GetBool("walknw"))
    {
      animator.SetBool("walkse", false);
      animator.SetBool("walksw", false);
      animator.SetBool("walknw", true);
      animator.SetBool("walkne", false);
      animator.SetInteger("countdown", 1);
      walk_countdown_local = WALK_ANIM_TIME;
    }
    else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walknw"))
      animator.SetBool("walknw", false);

    //SE
        if ((Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow) || KeyToMouse(KeyCode.D)) && !animator.GetBool("walkse"))
    {
      animator.SetBool("walkse", true);
      animator.SetBool("walksw", false);
      animator.SetBool("walknw", false);
      animator.SetBool("walkne", false);
      animator.SetInteger("countdown", 1);
      walk_countdown_local = WALK_ANIM_TIME;
    }
    else if (animator.GetInteger("countdown") == 0 && animator.GetBool("walkse"))
      animator.SetBool("walkse", false);

    //Decrement walk_anim_timer - eventually disable countdown flag
    if (animator.GetInteger("countdown") > 0)
    {
      walk_countdown_local -= Time.deltaTime;
      if (walk_countdown_local <= 0)
      {
        walk_countdown_local = 0;
        animator.SetInteger("countdown", 0);
      }
    }
  }


  public bool isStationary()
  {
    return pos_y_prev == transform.position.y;
  }
}
