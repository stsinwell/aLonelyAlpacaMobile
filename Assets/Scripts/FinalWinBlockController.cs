using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinalWinBlockController : MonoBehaviour {

	public GameObject star_obj;
	public GameObject star_Iso2d;
	public GameObject Background;
	private FadeImage FIScript;
	public float FIN_time;
	private Animator star_animator;
	private Transform star_tf;

	public GameObject cam;
	private Transform cam_tf;
	private bool moveItStar;
	private bool moveItCam;
	private const float moveSpeed = 3f;
	private const float final_pan_pos = 16.2f;
	private const float final_pan_pos_c = 18.4f;

	// Use this for initialization
	void Start () {
		star_animator = star_Iso2d.GetComponent<Animator>();
		star_tf = star_obj.GetComponent<Transform>();
		cam_tf = cam.GetComponent<Transform>();
	}
	
	// Update is called once per frame
	void OnControllerColliderHit(ControllerColliderHit hit){
		if(hit.collider.tag == "Goal"){
			star_animator.speed = 2;
			moveItStar = true;
			moveItCam = true;
			// sceneIndex = SceneManager.GetActiveScene().buildIndex;
			// levelPassed = PlayerPrefs.GetInt("LevelPassed");
			// Debug.Log("sceneIndex: " + sceneIndex +", levelPassed: " + levelPassed);
			// if (levelPassed < sceneIndex) {
			// 	Debug.Log("levePassed < sceneIndex :^0");
			// 	PlayerPrefs.SetInt("LevelPassed", sceneIndex);}
			// SceneManager.LoadScene(nextLevel, LoadSceneMode.Single);
			// LoggingManager.instance.RecordLevelEnd(); //sends data to server that player won the level
			// Debug.Log("Player moving on to level " + nextLevel);
		}
	}
	
	// Update is called once per frame
	bool done, donec;
	void Update () {
		if(moveItStar || moveItCam){
			Vector3 temp = star_tf.position;
			temp.y += moveSpeed*Time.deltaTime;
			if(moveItStar){
				if(temp.y <= final_pan_pos) star_tf.position = temp;
				else{
					temp.y = final_pan_pos;
					star_tf.position = temp;
					star_animator.speed = 0;
					star_animator.Play("final_winstar",0,0);
					moveItStar = false;
					done = true;
				}
			} 

			Vector3 tempc = cam_tf.position; 
			tempc.y += moveSpeed*Time.deltaTime;
			if(moveItCam){
				if(tempc.y <= final_pan_pos_c) cam_tf.position = tempc; 
				else{
					tempc.y = final_pan_pos_c;
					cam_tf.position = temp;
					moveItCam = false;
					donec = true;
				}
			}
		}
		else if (done && donec){
			StartCoroutine(FadeAfterTime(FIN_time));
		}
	}	

	IEnumerator FadeAfterTime(float time){
    	yield return new WaitForSeconds(time);
		SceneManager.LoadScene("End Credits", LoadSceneMode.Single);
     	//FIScript.FadeOut(); 
 	}
}
