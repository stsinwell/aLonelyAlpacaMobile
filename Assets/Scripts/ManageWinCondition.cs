using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManageWinCondition : MonoBehaviour {

	private GameObject player;
	private GameObject[] goals;
	private bool win = false;

	void Start () {
		player = GameObject.Find("Player");
		goals = GameObject.FindGameObjectsWithTag("Landable"); 
	}

	void Update () {
		foreach(GameObject g in goals) {
            Goal goalScript = g.GetComponent<Goal>();
            win = win || goalScript.inWinBounds(player.transform.position);
        }
		if(win) print("win!");	
	}

	
}

