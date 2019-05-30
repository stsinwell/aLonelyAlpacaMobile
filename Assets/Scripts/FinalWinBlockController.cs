using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Anonym.Isometric;

public class FinalWinBlockController : MonoBehaviour
{

  private AudioSource endSong;
  public GameObject star_obj;
  public GameObject star_Iso2d;
  public GameObject Background;
  private FadeOutWSprite FIScript;
  public float time_till_fade_to_fin;
  public float FIN_time;
  private Animator star_animator;
  private Transform star_tf;
  public GameObject credits;
  public GameObject player;

  public GameObject cam;
  private Transform cam_tf;
  private bool moveItStar;
  private bool moveItCam;
  private const float moveSpeed = 3f;
  private const float final_pan_pos = 17.5f;
  private const float final_pan_pos_c = 19f;

  // Use this for initialization
  void Start()
  {
    Destroy(GameObject.Find("MusicTime"));
    endSong = GameObject.Find("EndMusicTime").GetComponent<AudioSource>();
    DontDestroyOnLoad(endSong);
    endSong.Stop();
    star_animator = star_Iso2d.GetComponent<Animator>();
    star_tf = star_obj.GetComponent<Transform>();
    cam_tf = cam.GetComponent<Transform>();
    FIScript = Background.GetComponent<FadeOutWSprite>();
  }

  public void BeatFinalLevel()
  {
      endSong.Play();
      player.GetComponent<WorldScript>().enabled = false;
      star_animator.speed = 2;
      moveItStar = true;
      moveItCam = true;
  }

  // Update is called once per frame
  bool done, donec;
  void Update()
  {
    if (moveItStar || moveItCam)
    {
      Vector3 temp = star_tf.position;
      temp.y += moveSpeed * Time.deltaTime;
      if (moveItStar)
      {
        if (temp.y <= final_pan_pos) star_tf.position = temp;
        else
        {
          temp.y = final_pan_pos;
          star_tf.position = temp;
          star_animator.speed = 0;
          star_animator.Play("final_winstar", 0, 0);
          moveItStar = false;
          done = true;
        }
      }

      Vector3 tempc = cam_tf.position;
      tempc.y += moveSpeed * Time.deltaTime;
      if (moveItCam)
      {
        if (tempc.y <= final_pan_pos_c) cam_tf.position = tempc;
        else
        {
          tempc.y = final_pan_pos_c;
          cam_tf.position = temp;
          moveItCam = false;
          donec = true;
        }
      }
    }
    else if (done && donec)
    {
      StartCoroutine(FadeAfterTime(time_till_fade_to_fin));
    }
  }

  IEnumerator FadeAfterTime(float time)
  {
    yield return new WaitForSeconds(time);
    FIScript.FadeOut();
    credits.SetActive(true);
    StartCoroutine(CredsAfterTime(FIN_time));
  }
  IEnumerator CredsAfterTime(float time)
  {
    yield return new WaitForSeconds(time);
    SceneManager.LoadScene("End Credits", LoadSceneMode.Single);
  }
}
