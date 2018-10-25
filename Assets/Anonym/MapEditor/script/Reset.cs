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
		SceneManager.LoadScene(SceneManager.GetActiveScene().name);
	}
}
