using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DestroyEndSong : MonoBehaviour {

	private Image FinalScreen;
	public bool screenHasBeenEnabled;
	// Use this for initialization
	void Start () {
		FinalScreen = GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update () {
		if(FinalScreen.enabled && !screenHasBeenEnabled)
			screenHasBeenEnabled = true;
		//final screen was on but us not anymore
		else if(!FinalScreen.enabled && screenHasBeenEnabled)
				Destroy(GameObject.Find("EndMusicTime"));
	}
}
