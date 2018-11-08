using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clickable_block : MonoBehaviour {
    public bool isSelected;
    public bool isPlayerFacing;

    public bool isSticky;
    Color highlightedColor;
	SpriteRenderer sr;

	// initializer
	void Start () {
        isSelected = false;
        isSticky = false;
        isPlayerFacing = false;
        highlightedColor = new Color(0.835f, 0.878f, 1.0f, 1.0f);
		sr = GetComponentInChildren<SpriteRenderer>();
	}

	// Update is called once per frame
	void Update () {
	}

    public void pickedUpBlock() {
        isSelected = true;
        setBlockToSelectedColor();
    }

    public void dropBlock() {
        isSelected = false;
        setBlockToRegularColor();
    }

    public void setPlayerFacing() {
        isPlayerFacing = true;
        setBlockToHighlightColor();
    }

    public void setPlayerNotFacing() {
        isPlayerFacing = false;
        setBlockToRegularColor();
    }

    public bool isBlockHighlighted() {
        if (sr.color == highlightedColor) {
            return true;
        }

        return false;
    }
	
    void setBlockToRegularColor() {
        sr.color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    }

    void setBlockToHighlightColor() {
        sr.color = highlightedColor;
    }

    void setBlockToSelectedColor() {
        sr.color = new Color(0.78f, 0.80f, 1.0f, 1.0f);
    }
}
