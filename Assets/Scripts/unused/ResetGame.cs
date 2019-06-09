using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetGame : MonoBehaviour {

   void Update ()
   {
     if( Input.GetKeyDown(KeyCode.R) )
     {
       SceneManager.LoadSceneAsync( SceneManager.GetActiveScene().name );
     }
   }
 
}
