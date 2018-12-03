using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clickable_block : MonoBehaviour {
    public bool isSelected;
    public bool isPlayerFacing;

    public bool isSticky;
    Color highlightedColor;
	SpriteRenderer sr;
    
    Sprite normal;
    Sprite wSprite;
    Sprite aSprite;
    Sprite sSprite;
    Sprite dSprite;

    void Awake() {
        isSelected = false;
        isSticky = false;
        isPlayerFacing = false;
    }

	// initializer
	void Start () {
        highlightedColor = new Color(0.835f, 0.878f, 1.0f, 1.0f);
        
		sr = GetComponentInChildren<SpriteRenderer>();
        
        normal = Resources.Load<Sprite>("Sprites/normal_click");
        wSprite = Resources.Load<Sprite>("Sprites/W_Click");
        aSprite = Resources.Load<Sprite>("Sprites/A_Click");
        sSprite = Resources.Load<Sprite>("Sprites/S_Click");
        dSprite = Resources.Load<Sprite>("Sprites/D_Click");
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
	
    public void setBlockToRegularColor() {
        sr.color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    }

    void setBlockToHighlightColor() {
        sr.color = highlightedColor;
    }

    void setBlockToSelectedColor() {
        sr.color = new Color(0.78f, 0.80f, 1.0f, 1.0f);
    }
    
    public void setCanBeDroppedOnColor() {
        sr.color = new Color(0.85f, 0.85f, 0.85f, 1.0f);
    }
    
    public void setNormalSprite() {
        sr.sprite = normal;
    }
    
    public void setWASDsprite(int facingVal) {
        if (facingVal == 0) {
            sr.sprite = wSprite;
        } else if (facingVal == 1) {
            sr.sprite = sSprite;
        } else if (facingVal == 2) {
            sr.sprite = dSprite;
        } else if (facingVal == 3) {
            sr.sprite = aSprite;
        }
    }
}
