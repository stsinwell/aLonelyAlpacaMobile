using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Goal : MonoBehaviour {
	/*Array of vectors describing the x ,y ,and z intervals the player must be in to qualify a win */
	//TODO: I don't know how to use tuples in csharp so used vectors 
	Vector2[] win_boundaries;
	/*Reference to the player object*/
	GameObject playerObject;

// Use this for initialization
	void Start () {
		win_boundaries = new Vector2[3];
		win_boundaries[0] = new Vector2(this.transform.position.x-0.1f,this.transform.position.x+0.1f);
		win_boundaries[1] = new Vector2(this.transform.position.y+0.69f,this.transform.position.y+1.1f);
		win_boundaries[2] = new Vector2(this.transform.position.z-0.1f,this.transform.position.z+0.1f);
		playerObject = GameObject.Find("Player");
	}
	
	// Update is called once per frame
	void Update () {

	}

	/* Checks if player is within the win boundaries */
	public bool inWinBounds(Vector3 pos){
		return (pos.x>=win_boundaries[0].x && pos.x<=win_boundaries[0].y &&
				pos.y>=win_boundaries[1].x && pos.y<=win_boundaries[1].y &&
				pos.z>=win_boundaries[2].x && pos.z<=win_boundaries[2].y);
	}

	
}
