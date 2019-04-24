using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Anonym.Isometric;

/* Model of a single block in the game.
 */
public class Block : IComparable {
    public enum BlockType {GRASS, LAVA, MOVEABLE, WIN, NONE};
    public BlockType b_type;
    public int p_x; public int p_y; public int p_z; // position

    /* Creates a Block type. 
     * o is a GameObject with a IsoTile attached to it.
     */
    public Block(BlockType bt, Vector3 coords){
        b_type = bt;

        p_x = (int)coords.x;
        p_y = (int)coords.y;
        p_z = (int)coords.z;
    }

    public int CompareTo(object obj)
    {
        Block f = (Block)obj;
        return this.p_z.CompareTo(f.p_z);
    }
}
