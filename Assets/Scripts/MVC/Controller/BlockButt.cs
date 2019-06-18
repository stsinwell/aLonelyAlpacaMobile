using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BlockButt : MonoBehaviour
{

	public Image buttImg;

    // Start is called before the first frame update
    void Start()
    {
    	if(GameObject.FindGameObjectsWithTag("WORLD").Length > 0) {
            WorldScript world = GameObject.FindGameObjectsWithTag("WORLD")[0].GetComponent<WorldScript>();
            world.AddBlockButt(this);
        }
        buttImg.color = new Color(1,1,1,0);
    }

    public void SetColor(Color c) {
    	buttImg.color = c;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
