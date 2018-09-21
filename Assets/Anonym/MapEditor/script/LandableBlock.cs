using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandableBlock : MonoBehaviour {
    public SpriteRenderer sr; 
    public bool isHighlight;

    public GameObject selectedBlock; //Block if the user has selected the clickable block
    clickable_block clickable_block_script; //Script for clickable block

	// Use this for initialization
	void Start () {
		sr = GetComponentInChildren<SpriteRenderer>();
        isHighlight = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    
    void OnMouseEnter() {
        //Highlight the landable block if the player has selected a block and mouse is hovered over landable block
        if (selectedBlock != null) {
            sr.color=new Color(0.835f,0.878f,1.0f,1.0f);
        }
	}
    
    void OnMouseExit() {
        setBlockToRegularColor();
    }
    
    void OnMouseDown() {
        //Move the clickable block (if selected) ontop of the landable block
        if (selectedBlock != null) {
            Vector3 pos = gameObject.transform.position; //Get pos of landable block
            pos.y += 1.01f; //Set desired position to above landable block
            clickable_block_script.move(pos); //Move the selected/clickable block
            
            setBlockToRegularColor(); //Set landable block back to regular color
            gameObject.tag = "Untagged"; //Landable block is normal again
            LandableBlock landableBlockScript = GetComponent<LandableBlock>(); 
            Destroy(landableBlockScript); //Get rid of the landable block script for this no longer landable block
        }
    }
    
    void setBlockToRegularColor() {
        sr.color=new Color(1.0f,1.0f,1.0f,1.0f);
    }
    
    public void setSelectedBlock() {
        //A clickable block has been selected by the player
        selectedBlock = GameObject.FindWithTag("SelectedBlock");
        clickable_block_script = selectedBlock.GetComponent<clickable_block>();
    }
    
    public void nullSelectedBlock() {
        selectedBlock = null;
        clickable_block_script = null;
    }
}
