using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeLandableBlocks : MonoBehaviour {
    public GameObject[] landableBlocks;
    public GameObject[] clickableBlocks;
    
	// Use this for initialization
	void Start () {
		landableBlocks = GameObject.FindGameObjectsWithTag("Landable");
        
        foreach(GameObject landableBlock in landableBlocks) {
            landableBlock.AddComponent<LandableBlock>();
        }
        
        clickableBlocks = GameObject.FindGameObjectsWithTag("Clickable");
        
        foreach(GameObject clickableBlock in clickableBlocks) {
            clickableBlock.AddComponent<clickable_block>();
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
