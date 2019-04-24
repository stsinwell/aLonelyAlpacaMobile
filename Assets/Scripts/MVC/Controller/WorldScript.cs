using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldScript : MonoBehaviour {

	Map map;

	// Use this for initialization
	void Start () {
		if(map == null) {
			map = new Map(100, 100);
		}
	}
	
	public void AddBlock(string name, Vector3 coords) {
		if(map == null) {
			map = new Map(100, 100);
		}
		map.AddBlock(name, coords);
	}

	// Update is called once per frame
	void Update () {
		
	}
}
