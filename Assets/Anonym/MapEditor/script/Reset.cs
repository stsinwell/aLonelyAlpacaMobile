using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Reset : MonoBehaviour {

	public Image deathImage;

	// Use this for initialization
	void Start () {
		deathImage.enabled = false;
		
	}
	
	// Update is called once per frame
	void Update () {        
        if (Input.GetKeyDown(KeyCode.R)) {
			Restart();
        }
		
	}

	public void Restart() {
		LoggingManager.instance.RecordEvent(1, "Player pressed Restart button.");
		//if(!GameObject.Find("MusicTime").GetComponent<AudioSource>().isPlaying)
		//	GameObject.Find("MusicTime").GetComponent<AudioSource>().UnPause();
		SceneManager.LoadScene(SceneManager.GetActiveScene().name);
	}
}
