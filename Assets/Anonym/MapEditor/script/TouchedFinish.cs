using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchedFinish : MonoBehaviour {

	void OnCollisionEnter(Collision collisionInfo) {
        print("colliding");
        Debug.Log("collision");
        if (collisionInfo.collider.name == "FinishBlock") {
            Debug.Log("Got to finish");
        }
    }
}
