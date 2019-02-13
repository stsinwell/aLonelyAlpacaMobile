using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuSelectorController : MonoBehaviour
{

  /* highlighted selection, ranges 0-3 * */
  public int selection;
  /* position of the selector * */
  private RectTransform rt;

  private Vector3[] posArray;
  //public GameObject PrivacyStatementPopUp;
  //private PrivacyStatementDisappear PSDScript;
  public GameObject CreditsPopUp;
  private CreditsDisappear CDScript;

  // Use this for initialization
  void Start()
  {
    rt = GetComponent<RectTransform>();
    posArray = new Vector3[4];
    posArray[0] = new Vector3(106f, 18f, 0f); // Credits Button Pos
    posArray[1] = new Vector3(190f, 102f, 0f);// Start Button Pos
    posArray[2] = new Vector3(420f, 102f, 0f);// Levels Button Pos
                                              //posArray[3] = new Vector3( 640f, 18f, 0f); // Privacy Statement Button Pos

    selection = 1;
    rt.position = posArray[selection];
    //PSDScript = PrivacyStatementPopUp.GetComponent<PrivacyStatementDisappear>();
    CDScript = CreditsPopUp.GetComponent<CreditsDisappear>();

  }

  // Update is called once per frame
  void Update()
  {
    if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.DownArrow))
    {
      // Move the selector 
      changeSelection(false);
      // Turn of banner if it is up
      // if(PSDScript.isEnabled()){
      // 	PSDScript.toggleEnable();
      // }
      if (CDScript.isEnabled())
      {
        CDScript.toggleEnable();
      }
    }
    else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.UpArrow))
    {
      // Move the selector 
      changeSelection(true);
      // Turn of banner if it is up
      // if(PSDScript.isEnabled()){
      // 	PSDScript.toggleEnable();
      // }
      if (CDScript.isEnabled())
      {
        CDScript.toggleEnable();
      }
    }
    // Select the highlighted option 
    else if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.Return))
    {
      select(selection);
    }
  }
  /*
	 * Change highlighted selection, true will increment, false will decrement
	 */
  public void changeSelection(bool inc)
  {
    if (inc)
    {
      if (selection < 2) selection++;
      else selection = 2;
    }
    else
    {
      if (selection > 0) selection--;
      else selection = 0;
    }
    rt.position = posArray[selection];
  }

  /*
	 * Move forward with an action based on highlighted selection
	 * selectedInt : Highlighted selection 
	 */
  public void select(int selectedInt)
  {
    switch (selectedInt)
    {
      case 0: // Credits
        CDScript.toggleEnable();
        break;
      case 1: //Start
        Destroy(GameObject.Find("MusicTime"));
        SceneManager.LoadScene("B0.5 - Intro", LoadSceneMode.Single);
        //SceneManager.LoadScene("B99", LoadSceneMode.Single);
        break;
      case 2: //Levels
        SceneManager.LoadScene("Level Select Menu", LoadSceneMode.Single);
        break;
      // case 3: // Policy Statement
      // 	PSDScript.toggleEnable();
      // 	break;
      default: break;
    }
  }
}
