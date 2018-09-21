using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeBlocksScript : MonoBehaviour {
    public GameObject[] landableBlocks;
    public GameObject[] clickableBlocks;
    
	// Use this for initialization
	void Start () {
        //Give all landable blocks their script
		landableBlocks = GameObject.FindGameObjectsWithTag("Landable");
        
        foreach(GameObject landableBlock in landableBlocks) {
            landableBlock.AddComponent<LandableBlock>();
        }
        
        //Give all clickable blocks their script
        clickableBlocks = GameObject.FindGameObjectsWithTag("Clickable");
        
        foreach(GameObject clickableBlock in clickableBlocks) {
            clickableBlock.AddComponent<clickable_block>();
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
