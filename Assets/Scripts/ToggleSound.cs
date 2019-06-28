using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum musicLevel : byte {Off, Half, Full};

public class ToggleSound : MonoBehaviour {

	static musicLevel level = musicLevel.Full;
	public Sprite musicFull;
	public Sprite musicHalf;
	public Sprite musicOff;
	private Image musicImage;

	// Use this for initialization
	void Start () {
		musicImage = GetComponent<Image>();
		musicImage.sprite = (level == musicLevel.Full) ? musicFull :
								((level == musicLevel.Half) ? musicHalf : musicOff);
	}
	
	// Update is called once per frame
	void Update () {
	}

	// Toggles music sprite and volume
	public void toggle () {
		level = ((level == musicLevel.Full) ? musicLevel.Half : 
					((level == musicLevel.Half) ? musicLevel.Off : musicLevel.Full));

		switch (level) {
			case musicLevel.Full:
				musicImage.sprite = musicFull;
				AudioListener.volume = 1f;
				break;
			case musicLevel.Half:
				musicImage.sprite = musicHalf;
				AudioListener.volume = 0.5f;
				break;
			case musicLevel.Off:
				musicImage.sprite = musicOff;
				AudioListener.volume = 0f;
				break;
		}
	}

}
