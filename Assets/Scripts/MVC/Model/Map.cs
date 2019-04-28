using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Model of the map with all its blocks.
 */
public class Map {

    Dictionary<Vector3Int, Block> map; 

    /* Creates a Map model. 
     * 
     * x_w = width in x axis
     * y_w = width in y axis
     */
    public Map(int x_w, int y_w) {
        map = new Dictionary<Vector3Int, Block>();
    }

    public void AddBlock(string name, Vector3 last, Vector3 coords) {
        Block.BlockType bt = Block.BlockType.NONE;
        if (name.Contains("grass") || name.Contains("start")) {
            bt = Block.BlockType.GRASS;
        } else if (name.Contains("magma")) {
            bt = Block.BlockType.LAVA;
        } else if (name.Contains("interactable")) {
            bt = Block.BlockType.MOVEABLE;
        } else if (name.Contains("winblock")) {
            bt = Block.BlockType.WIN;
        }

        Vector3Int xyz;

        // if(name.Contains("start")) {
            Debug.Log(name);
            Debug.Log(coords);
            Debug.Log(bt);
        // }

        // Add new block object
        if(bt != Block.BlockType.NONE) {
            Block block = new Block(bt, coords);
            xyz = new Vector3Int((int)coords.x, (int)coords.y, (int)coords.z);
            map.Remove(xyz);
            map.Add(xyz, block);

            // // Remove old
            // xyz = new Vector3Int((int)last.x, (int)last.y, (int) last.z);
            // map.Remove(xyz);
        }
    }

    public Block GetBlock(Vector3 coords) {
        // Debug.Log(coords);
        Vector3Int xyz = new Vector3Int((int)coords.x, (int)coords.y, (int) coords.z);
        Block get;
        if(map.TryGetValue(xyz, out get)) {
            return get;
        }
        return null;
    }
}
