using UnityEngine;
using UnityEngine.SceneManagement;

public class reset : MonoBehaviour {

   void Update ()
   {
     if( Input.GetKeyDown(KeyCode.R) )
     {
       SceneManager.LoadScene( SceneManager.GetActiveScene().name );
     }
   }
 
}
