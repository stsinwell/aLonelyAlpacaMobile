using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class LvlBlockTutorial : MonoBehaviour
{

	public GameObject arrowRight;
	public GameObject approachShrub;
	public Image holdLeft;
	public Image holdRight;
	public Image quadrant0;
	public Image quadrant1;
	public Alpaca alpaca;
	Color quadrantColor;
	int step = 0;

	Vector3 alpacaApproachLeft = new Vector3(-1, 0, 0);
	Vector3 alpacaApproachRight = new Vector3(0, 0, 1);

    // Start is called before the first frame update
    void Start()
    {
        holdLeft.enabled = false;
        holdRight.enabled = false;
        quadrantColor = quadrant0.color;
        quadrant0.enabled = quadrant1.enabled = false;
    }

    bool equals(Vector3 a, Vector3 b) {
		return Math.Round(a.x - b.x)  == 0 && Math.Round(a.z - b.z) == 0;
    }

    // Update is called once per frame
    void Update()
    {
    	Vector3 alpacaPos = alpaca.GetCurrAlpacaLocation();
        switch(step) {
        	case 0: //approach shrub
        		if(equals(alpacaPos, alpacaApproachLeft) || equals(alpacaPos, alpacaApproachRight)) {
        			step += 1;
					arrowRight.active = false;
        		}
        		break;
        	case 1: // hold to pick up
        		if(equals(alpacaPos, alpacaApproachLeft) || equals(alpacaPos, alpacaApproachRight)) {
        			approachShrub.active = false;
					arrowRight.active = false;
					if(equals(alpacaPos, alpacaApproachLeft))
						holdRight.enabled = quadrant1.enabled = true;
					if(equals(alpacaPos, alpacaApproachRight))
						holdLeft.enabled = quadrant0.enabled = true;
        		} else if(!alpaca.HasBlock()) {
        			approachShrub.active = true;
					arrowRight.active = true;
					holdLeft.enabled = quadrant0.enabled = false;
					holdRight.enabled = quadrant1.enabled = false;
        		}
        		if(alpaca.HasBlock()) {
        			step += 1;
					holdLeft.enabled = quadrant0.enabled = false;
					holdRight.enabled = quadrant1.enabled = false;
        		}
        		break;
        	default:
        		break;
        }
    }
}
