using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleBackground : MonoBehaviour
{
	public SpriteRenderer render;
	
    // Start is called before the first frame update
    void Start()
    {
    }

    public void Scale(float s) {
		if (render == null) return;

		var width = render.sprite.bounds.size.x;
		var height = render.sprite.bounds.size.y;

		var worldScreenWidth = Camera.main.orthographicSize * 1.75 + s*1.5;
		var worldScreenHeight = (worldScreenWidth / Screen.width) * Screen.height;
		Vector3 scale = new Vector3((float) worldScreenWidth / width, (float) worldScreenHeight / height,1);
		transform.localScale = scale;
	}

	private void ScaleFull() {
		if (render == null) return;

		var width = render.sprite.bounds.size.x;
		var height = render.sprite.bounds.size.y;

		var worldScreenWidth = Camera.main.orthographicSize * 2;
		var worldScreenHeight = (worldScreenWidth / Screen.width) * Screen.height;
		Vector3 scale = new Vector3((float) worldScreenWidth / width, (float) worldScreenHeight / height,1);
		transform.localScale = scale;
	}

    // Update is called once per frame
    void Update()
    {
        
    }
}
