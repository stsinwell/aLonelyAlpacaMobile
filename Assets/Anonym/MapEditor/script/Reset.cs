using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Reset : MonoBehaviour
{

  //public Image deathImage;
  private AudioSource music;
  // Use this for initialization
  void Start()
  {
    //deathImage.enabled = false;
    music = GameObject.Find("MusicTime").GetComponent<AudioSource>();
    music.volume = 0.3f;
  }

  // Update is called once per frame
  void Update()
  {
    if (Input.GetKeyDown(KeyCode.R))
    {
      Restart();
    }

  }

  public void Restart()
  {
    //if(!GameObject.Find("MusicTime").GetComponent<AudioSource>().isPlaying)
    // if (music != null) music.volume = 0.1f;
    // if(!music.isPlaying)
    // 	music.UnPause();
    SceneManager.LoadScene(SceneManager.GetActiveScene().name);
  }
}
