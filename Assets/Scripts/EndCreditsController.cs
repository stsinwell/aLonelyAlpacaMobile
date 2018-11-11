using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndCreditsController : MonoBehaviour {

	private RectTransform rt;
	private float moveSpeed;
	private bool done;
	//private bool speedyCreds;
	private const float initial_speed = 55f;
	private const float initial_pos = -968f;
	private const float final_position = 968f;
	// Use this for initialization
	void Start () {
		rt = GetComponent<RectTransform>();
		moveSpeed = initial_speed;
	}
	
	// Update is called once per frame
	void Update () {
		if(!done){
			Vector3 temp = rt.position; 
			if(Input.GetKey(KeyCode.Space)){
				moveSpeed = initial_speed*4;
				//moveSpeed = speedyCreds ? initial_speed : (initial_speed*3);
				//speedyCreds = !speedyCreds;
			}
			else if(rt.position.y >= (final_position*0.65f)){
				moveSpeed-= 2*Time.deltaTime;
				if(moveSpeed<=20) moveSpeed = 20;
			}
			else moveSpeed = initial_speed;
			temp.y += moveSpeed*Time.deltaTime;
			rt.position = temp;
			if(rt.position.y >= final_position){
				temp.y = final_position;
				rt.position = temp;
				done = true;
			}
		}	
	}

	public bool isDone() { return done; }
}
