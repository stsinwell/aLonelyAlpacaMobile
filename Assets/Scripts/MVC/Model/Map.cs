using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Anonym.Isometric;

/* Model of the map with all its blocks.
 */
public class Map {

    Dictionary<Vector2Int, SortedList<int, Block>> map; 
    Block held_block;
    static Vector3 hideCoords = new Vector3(-100, -100, -100);

    /* Creates a Map model. 
     * 
     * x_w = width in x axis
     * y_w = width in y axis
     */
    public Map(int x_w, int y_w) {
        map = new Dictionary<Vector2Int, SortedList<int, Block>>();
    }

    public void AddBlock(string name, Vector3 last, Vector3 coords, GridCoordinates obj) {
        Block.BlockType bt = Block.BlockType.NONE;
        if (name.Contains("grass") || name.Contains("start") || name.Contains("warning")) {
            bt = Block.BlockType.GRASS;
        } else if (name.Contains("magma")) {
            bt = Block.BlockType.LAVA;
        } else if (name.Contains("interactable")) {
            bt = Block.BlockType.MOVEABLE;
        } else if (name.Contains("winblock")) {
            bt = Block.BlockType.WIN;
        }

        Vector2Int xz;

        // Add new block object
        if(bt != Block.BlockType.NONE) {
            coords.x = (float)Math.Round(coords.x);
            coords.y = (float)Math.Round(coords.y);
            coords.z = (float)Math.Round(coords.z);
            Block block;
            if(bt == Block.BlockType.MOVEABLE)
                block = new Block(bt, coords, obj);
            else
                block = new Block(bt, coords);
            xz = new Vector2Int((int)coords.x, (int)coords.z);

            SortedList<int, Block> get;
            if(map.TryGetValue(xz, out get)) {
                get.Remove((int)coords.y);
                get.Add((int)coords.y, block);
            } else {
                get = new SortedList<int, Block>();
                map.Add(xz, get);
                get.Add((int)coords.y, block);
            }
            // if(name.Contains("start")) {
                Debug.Log(name + " " + block.getCoords() + " " + block.b_type);
                Block get_b;
                if(get.TryGetValue((int)coords.y, out get_b)) {
                    Debug.Log("get block in block block: " + get_b.getCoords());
                    Debug.Log("get block in block block: " + get_b.b_type);
                }
            // }
        }
    }

    public Block GetBlock(Vector3 coords) {
        coords.x = (float)Math.Round(coords.x);
        coords.y = (float)Math.Round(coords.y);
        coords.z = (float)Math.Round(coords.z);
        Vector2Int xz = new Vector2Int((int)coords.x,(int) coords.z);
        SortedList<int, Block> get;
        if(map.TryGetValue(xz, out get)) {
            Block get_b;
            if(get.TryGetValue((int)coords.y, out get_b)) {
                return get_b;
            }
        }
        return null;
    }

    public bool TryHoldOrPlaceBlock(Vector3 coords) {
        coords.x = (float)Math.Round(coords.x);
        coords.y = (float)Math.Round(coords.y);
        coords.z = (float)Math.Round(coords.z);
        Vector2Int xz = new Vector2Int((int)coords.x,(int) coords.z);
        SortedList<int, Block> get;
        if(held_block == null) {
            if(map.TryGetValue(xz, out get)) {
                Block get_b;
                if(get.TryGetValue((int)coords.y, out get_b)) {
                    if(get_b.b_type == Block.BlockType.MOVEABLE) {
                        held_block = get_b;
                        held_block.Move(hideCoords);
                        get.Remove((int)coords.y);
                        return true;
                    }
                }
            }
        } else {
            if(GetBlock(coords) != null) 
                return false;
            Block top = GetHighestBlockBelow(coords);
            if(top == null)
                return false;
            coords = top.getCoords();
            coords.y++;
            held_block.setCoords(coords);
            if(map.TryGetValue(xz, out get)) {
                get.Remove((int)coords.y);
                get.Add((int)coords.y, held_block);
            } else {
                get = new SortedList<int, Block>();
                map.Add(xz, get);
                get.Add((int)coords.y, held_block);
            }
            held_block.Move(coords);
            held_block = null;
            return true;
        }
        return false;
    }

    public Block GetHighestBlockBelow(Vector3 coords) {
        // Debug.Log("Get highest block below " + coords);
        Vector2Int xz = new Vector2Int((int)coords.x,(int) coords.z);
        int y = (int)coords.y;
        SortedList<int, Block> get;
        if(map.TryGetValue(xz, out get)) {
            // Debug.Log("Get highest block below 1" + get.Count);
            Block topBlock = null;
            foreach(KeyValuePair<int, Block> pair in get) {
                Debug.Log(pair + " " + y);
                if (pair.Key <= y) {
                    // Debug.Log("HERE");
                    topBlock = pair.Value;
                }
            }
            return topBlock;
        }
        return null;
    }
}
