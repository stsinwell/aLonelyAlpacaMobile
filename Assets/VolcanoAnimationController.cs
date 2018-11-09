using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolcanoAnimationController : MonoBehaviour {
	public float delay = 0f;
	float speed = 2.0f; //how fast it shakes
	float amount = 20.0f; //how much it shakes
	float position;
	Animator animatorComponent;

	// Use this for initialization
	void Start () {
		//animatorComponent.speed = 0.5f;
		//StartCoroutine(playAnimation());
		position = gameObject.transform.position.x;
		Destroy (gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + delay); 
	}
	
	// Update is called once per frame
	void Update () {
		position = Mathf.Sin(Time.time * speed) * amount;
	}
	public IEnumerator playAnimation() {
     yield return new WaitForSeconds(3f);
 
	}
}
