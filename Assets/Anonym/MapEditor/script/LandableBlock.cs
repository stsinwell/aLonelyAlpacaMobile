using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandableBlock : MonoBehaviour {
    public SpriteRenderer sr;
    public bool isHighlight;

    public GameObject selectedBlock;
    clickable_block clickable_block_script;

	// Use this for initialization
	void Start () {
		sr = GetComponentInChildren<SpriteRenderer>();
        isHighlight = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    
    void OnMouseEnter() {
        if (selectedBlock != null && (clickable_block_script.selectedBlock || isHighlight)) {
            sr.color=new Color(0.835f,0.878f,1.0f,1.0f);
        }
	}
    
    void OnMouseExit() {
        if (!isHighlight) {
            setBlockToRegularColor();
        }
    }
    
    void OnMouseDown() {
        if (selectedBlock != null && clickable_block_script.selectedBlock) {
            //move clickable block above this block
            Vector3 pos = gameObject.transform.position;
            pos.y += 1.01f;
            clickable_block_script.move(pos);
            
            isHighlight = false;
            setBlockToRegularColor();
            gameObject.tag = "Untagged";
            LandableBlock landableBlockScript = GetComponent<LandableBlock>();
            Destroy(landableBlockScript);
        }
    }
    
    void setBlockToRegularColor() {
        sr.color=new Color(1.0f,1.0f,1.0f,1.0f);
    }
    
    public void setSelectedBlock() {
        selectedBlock = GameObject.FindWithTag("SelectedBlock");
        clickable_block_script = selectedBlock.GetComponent<clickable_block>();
    }
}
