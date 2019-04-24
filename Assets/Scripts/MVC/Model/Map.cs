using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Model of the map with all its blocks.
 */
public class Map {

    Dictionary<Vector2Int, List<Block>> map; 

    /* Creates a Map model. 
     * 
     * x_w = width in x axis
     * y_w = width in y axis
     */
    public Map(int x_w, int y_w) {
        map = new Dictionary<Vector2Int, List<Block>>();
    }

    public void AddBlock(string name, Vector3 coords) {
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

        if(bt != Block.BlockType.NONE) {
            Debug.Log(bt);
            Debug.Log(coords);
            Block block = new Block(bt, coords);
            Vector2Int xy = new Vector2Int((int)coords.x, (int)coords.y);
            if(!map.ContainsKey(xy)) {
                map.Add(xy, new List<Block>());
            }
            List<Block> z;
            map.TryGetValue(xy, out z);
            z.Add(block);
        }
    }
}
