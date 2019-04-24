using System.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Assertions;

namespace Anonym.Isometric
{
  public class KeyInputAssist : Util.Singleton<KeyInputAssist>
  {
    [SerializeField]
    IsometricMovement target;

    [SerializeField]
    bool bUseDiagonalKey = true;

    [SerializeField]
    GameObject AnchorPrefab;
    GameObject AnchorInstance;

    [SerializeField]
    float fMaxDashInputInterval = 0.33f;
    float fLastInputTime = 0;

    [SerializeField, HideInInspector]
    IsometricNavMeshAgent NMAgent = null;
    [SerializeField, Header("Only available with NavMeshAgent.")]
    bool bUseClickToPathfinding = true;

    GameObject[] playerBlocks;
    GameObject[] wallBlocks;
    GameObject[] nonInteractiveBlocks;
    GameObject[] fireBlocks;
    public enum Facing { PosZ, NegZ, PosX, NegX };
    public Facing lastFacing;
    float boardLowestY;
    bool didFall;
    bool continuousMovement;
    bool continuousMovementSecondCheck;
    Vector3 oldLoc;

    public AudioClip soundEffect;
    public AudioSource musicSource;

    bool doubleClickDetected = false;
    private float doubleClickTimeLimit = 0.25f;

    public bool illegalJump;

    public changeFacingDirection CFD;
    private void Start()
    {
      init();

      illegalJump = false;

      playerBlocks = GameObject.FindGameObjectsWithTag("Clickable");
      GameObject[] stickyBlocks = GameObject.FindGameObjectsWithTag("StickyBlock");
      playerBlocks = playerBlocks.Concat(stickyBlocks).ToArray();

      foreach (GameObject playerBlock in playerBlocks)
      {
        playerBlock.AddComponent<clickable_block>();
        if (playerBlock.tag == "StickyBlock")
        {
          playerBlock.GetComponent<clickable_block>().isSticky = true;

        }
        boardLowestY = Math.Min(playerBlock.transform.position.y, boardLowestY);
      }

      nonInteractiveBlocks = GameObject.FindGameObjectsWithTag("NonInteractable");
      fireBlocks = GameObject.FindGameObjectsWithTag("FireBlockPos");
      GameObject[] allObjs = UnityEngine.Object.FindObjectsOfType<GameObject>();
      foreach (GameObject obj in allObjs)
      {
        if (obj.tag == "NonInteractable" || obj.tag == "FireBlockPos")
        {
          boardLowestY = Math.Min(obj.transform.position.y, boardLowestY);
        }
      }

      lastFacing = Facing.PosX;
      continuousMovement = false;
      didFall = false;

      wallBlocks = GameObject.FindGameObjectsWithTag("Wall");
      foreach (GameObject wallBlock in wallBlocks)
      {
        wallBlock.GetComponentInChildren<SpriteRenderer>().color = new Color(1.0f, 1.0f, 1.0f, 0.0f);
      }

      musicSource.clip = soundEffect;

      //StartCoroutine(InputListener());
    }

    //update called once per frame
    private IEnumerator InputListener()
    {
      while (enabled)
      {
        if (Input.GetMouseButtonDown(0))
          yield return ClickEvent();

        yield return null;
      }
    }

    private IEnumerator ClickEvent()
    {
      yield return new WaitForEndOfFrame();

      float count = 0f;
      while (count < doubleClickTimeLimit)
      {
        if (Input.GetMouseButtonDown(0))
        {
          doubleClickDetected = true;
          yield break;
        }
        count += Time.deltaTime;
        yield return null;
      }

    }

    void Update()
    {
    timeCurrent = Time.fixedTime;
    if (target != null && Application.isPlaying)
      {
        InputProcess();
      }
    }

    private void OnValidate()
    {
      if (isActiveAndEnabled)
        init();
    }

    void init()
    {
      if (target == null)
        SetTarget(GetComponent<IsometricMovement>());

      if (target == null)
        SetTarget(FindObjectOfType<IsometricMovement>());
    }

    void ClickToMove()
    {
      Vector3 destination;
      if (Input.GetMouseButtonDown(0) && NMAgent.ClickToMove(out destination))
        AddAnchor(destination);
    }

    Vector3 RoundLocation(Vector3 vec)
    {
      return new Vector3(Mathf.RoundToInt(vec.x), Mathf.RoundToInt(vec.y), Mathf.RoundToInt(vec.z));
    }

    Vector3 GetCurrAlpacaLocation()
    {
      Vector3 vec = gameObject.transform.position;
      return RoundLocation(vec);
    }

    public Vector3 BoundAlpacaToBlock()
    {
      Vector3 newLoc = RoundLocation(gameObject.transform.position);

      if (oldLoc == newLoc && !blockInFront(lastFacing))
      { //should move at least one
        newLoc = GetLocationInFront(newLoc, lastFacing);
        ShouldHighlightPlayerBlock(lastFacing, true, GetLocationInFront(lastFacing));
      }

      Vector3 vec = new Vector3(newLoc.x, newLoc.y - 0.22f, newLoc.z);

      return vec;
    }

    //method to access private GettCurrAlpacaLocation property
    public Vector3 GetCurrAlpacaLocationProperty()
    {
      return GetCurrAlpacaLocation();
    }

    bool isTwoPosEqual(Vector3 pos1, Vector3 pos2)
    {
      return Mathf.Approximately(pos1.x, pos2.x) &&
             Mathf.Approximately(pos1.y, pos2.y) &&
             Mathf.Approximately(pos1.z, pos2.z);
    }

    bool isBlockBelowOtherBlocks(GameObject blockInQuestion)
    {
      Vector3 adjustedBlockPos = blockInQuestion.transform.position;
      adjustedBlockPos.y += 1;

      GameObject[] allObjs = UnityEngine.Object.FindObjectsOfType<GameObject>();
      foreach (GameObject obj in allObjs)
      {
        if (obj.tag == "NonInteractable" || obj.tag == "FireBlockPos" || obj.tag == "Clickable" || obj.tag == "StickyBlock")
        {
          if (isTwoPosEqual(obj.transform.position, adjustedBlockPos))
          {
            return true;
          }
        }
      }

      return false;
    }

    bool isPlayerBlockBelowOtherPlayerBlocks(GameObject blockInQuestion)
    {
      Vector3 adjustedBlockPos = blockInQuestion.transform.position;
      adjustedBlockPos.y += 1;

      foreach (GameObject playerBlock in playerBlocks)
      {
        if (isTwoPosEqual(playerBlock.transform.position, adjustedBlockPos))
        {
          return true;
        }
      }

      return false;
    }

    bool isAlpacaFacingPlayableBlock(Facing facing, GameObject playerBlock, bool providedLocation, Vector3 forceAlpacaLocation)
    {
      Vector3 posIfAlpacaMoved = providedLocation ? forceAlpacaLocation : GetCurrAlpacaLocation();

      if (facing == Facing.PosZ)
      {
        posIfAlpacaMoved.z += 1;
      }
      else if (facing == Facing.NegZ)
      {
        posIfAlpacaMoved.z -= 1;
      }
      else if (facing == Facing.PosX)
      {
        posIfAlpacaMoved.x += 1;
      }
      else if (facing == Facing.NegX)
      {
        posIfAlpacaMoved.x -= 1;
      }

      return isTwoPosEqual(playerBlock.transform.position, posIfAlpacaMoved);
    }

    void UnhighlightAllPlayerBlocks()
    {
      foreach (GameObject playerBlock in playerBlocks)
      {
        playerBlock.GetComponent<clickable_block>().setPlayerNotFacing();
      }
    }

    bool ShouldHighlightPlayerBlock(Facing facing, bool providedLocation, Vector3 forceAlpacaLocation)
    {
      if (isAlpacaCarryingBlock())
      {
        return false;
      }

      foreach (GameObject playerBlock in playerBlocks)
      {
        if (isAlpacaFacingPlayableBlock(facing, playerBlock, providedLocation, forceAlpacaLocation) && !isPlayerBlockBelowOtherPlayerBlocks(playerBlock))
        {
          UnhighlightAllPlayerBlocks();
          playerBlock.GetComponent<clickable_block>().setPlayerFacing();
          return true;
        }
        else
        {
          playerBlock.GetComponent<clickable_block>().setPlayerNotFacing();
        }
      }

      return false;
    }

    Vector3 GetLocationInFront(Facing facing)
    {
      return GetLocationInFront(GetCurrAlpacaLocation(), facing);
    }

    Vector3 GetLocationInFront(Vector3 currLocation, Facing facing)
    {
      Vector3 targetPos = Vector3.zero;

      if (facing == Facing.PosZ)
      {
        targetPos = new Vector3(currLocation.x, currLocation.y, currLocation.z + 1);
      }
      else if (facing == Facing.NegZ)
      {
        targetPos = new Vector3(currLocation.x, currLocation.y, currLocation.z - 1);
      }
      else if (facing == Facing.PosX)
      {
        targetPos = new Vector3(currLocation.x + 1, currLocation.y, currLocation.z);
      }
      else if (facing == Facing.NegX)
      {
        targetPos = new Vector3(currLocation.x - 1, currLocation.y, currLocation.z);
      }

      return targetPos;
    }

    void PickUpBlock(GameObject playerBlock)
    {
      Vector3 alpacaPos = GetCurrAlpacaLocation();
      playerBlock.GetComponent<clickable_block>().pickedUpBlock();
      musicSource.Play();
      playerBlock.transform.position = new Vector3(100.0f, 100.0f, 100.0f);
      CFD.has_block = true;
    }

    void DropBlock(GameObject selectedBlock, Vector3 targetPos)
    {

      float yDrop;
      if (selectedBlock.GetComponent<clickable_block>().isSticky)
      {
        yDrop = GetStickyDropY(targetPos);
      }
      else
      {
        yDrop = GetLowestDropPossible(targetPos);

      }

      if (Mathf.Approximately(yDrop, boardLowestY)) return;
      Vector3 posBelowTargetPos = new Vector3(targetPos.x, yDrop - 1, targetPos.z);
      if (isPosWall(posBelowTargetPos)) return;

      selectedBlock.transform.position = new Vector3(targetPos.x, yDrop, targetPos.z);
      selectedBlock.GetComponent<clickable_block>().dropBlock();
      musicSource.Play();
      CFD.has_block = false;
    }

    bool isWinBlock(Vector3 targetPos)
    {
      Vector3 blockBelowPos = new Vector3(targetPos.x, targetPos.y - 1.0f, targetPos.z);
      GameObject winBlock = GameObject.FindWithTag("WinBlockPos");

      return isTwoPosEqual(blockBelowPos, winBlock.transform.position);
    }

    float GetStickyDropY(Vector3 targetPos)
    {
      if (isSpaceOpen(new Vector3(targetPos.x, targetPos.y - 1, targetPos.z)))
      {
        return targetPos.y - 1;
      }
      else
      {
        return targetPos.y;
      }
    }

    float GetLowestDropPossible(Vector3 targetPos)
    {
      float y = targetPos.y;
      bool isDroppable = true;

      while (y > boardLowestY && isDroppable)
      {
        isDroppable = isSpaceOpen(new Vector3(targetPos.x, y - 1, targetPos.z));
        y = isDroppable ? y - 1 : y;
      }

      return y;
    }

    bool isSpaceOpen(Vector3 targetPos)
    {
      GameObject[] allObjs = UnityEngine.Object.FindObjectsOfType<GameObject>();

      // can't if there's a normal block at desired drop pos
      foreach (GameObject obj in allObjs)
      {
        if (obj.tag == "NonInteractable" || obj.tag == "FireBlockPos" ||
            obj.tag == "Clickable" || obj.tag == "StickyBlock")
        {
          if (isTwoPosEqual(obj.transform.position, targetPos))
          {
            return false;
          }
        }
      }

      return true;
    }

    void AttemptDropBlock(GameObject selectedBlock)
    {
      Vector3 targetPos = GetLocationInFront(lastFacing);
      bool canPlace = isSpaceOpen(targetPos) &&
                      !(gameObject.GetComponent<IsometricMovement>().isMoving) && gameObject.GetComponent<IsometricMovement>().alive &&
                      !isWinBlock(targetPos);

      if (canPlace)
      {
        DropBlock(selectedBlock, targetPos);
      }
    }

    bool isAlpacaCarryingBlock()
    {
      bool isSelected = false;
      foreach (GameObject playerBlock in playerBlocks)
      {
        if (playerBlock.GetComponent<clickable_block>().isSelected)
        {
          isSelected = true;
        }
      }

      return isSelected;
    }

    void AttemptPickOrDropPlayerBlock()
    {
      foreach (GameObject playerBlock in playerBlocks)
      {
        if (playerBlock.GetComponent<clickable_block>().isSelected)
        {
          AttemptDropBlock(playerBlock);
        }
        else if (!isAlpacaCarryingBlock() && playerBlock.GetComponent<clickable_block>().isPlayerFacing
                  && playerBlock.GetComponent<clickable_block>().isBlockHighlighted())
        {
          PickUpBlock(playerBlock);
        }
      }
    }

    GameObject getNonInteractableBlock(Vector3 pos)
    {
      foreach (GameObject nonInteractiveBlock in nonInteractiveBlocks)
      {
        if (isTwoPosEqual(nonInteractiveBlock.transform.position, pos) &&
            !isBlockBelowOtherBlocks(nonInteractiveBlock))
        {
          return nonInteractiveBlock;
        }
      }

      return null;
    }

    GameObject getFireBlock(Vector3 pos)
    {
      foreach (GameObject fireBlock in fireBlocks)
      {
        if (isTwoPosEqual(fireBlock.transform.position, pos) &&
            !isBlockBelowOtherBlocks(fireBlock))
        {
          return fireBlock;
        }
      }

      return null;
    }

    GameObject getPlayerBlock(Vector3 pos)
    {
      foreach (GameObject playerBlock in playerBlocks)
      {
        if (isTwoPosEqual(playerBlock.transform.position, pos) &&
            !isBlockBelowOtherBlocks(playerBlock))
        {
          return playerBlock;
        }
      }

      return null;
    }

    void HighlightDropHelperBlock(Vector3 targetPos)
    {
      GameObject nonInteractableBlock = getNonInteractableBlock(targetPos);
      GameObject fireBlock = getFireBlock(targetPos);
      GameObject playerBlock = getPlayerBlock(targetPos);

      if (nonInteractableBlock != null)
      {
        nonInteractableBlock.GetComponent<Unclickable>().setCanBeDroppedOnColor();
      }

      if (fireBlock != null)
      {
        fireBlock.GetComponent<Unclickable>().setCanBeDroppedOnColor();
      }

      if (playerBlock != null)
      {
        playerBlock.GetComponent<clickable_block>().setCanBeDroppedOnColor();
      }
    }

    void UnHighlightDropHelperBlocks()
    {
      foreach (GameObject nonInteractiveBlock in nonInteractiveBlocks)
      {
        nonInteractiveBlock.GetComponent<Unclickable>().setNormalColor();
      }

      foreach (GameObject fireBlock in fireBlocks)
      {
        fireBlock.GetComponent<Unclickable>().setNormalColor();
      }

      if (isAlpacaCarryingBlock())
      {
        UnhighlightAllPlayerBlocks();
      }
    }

    void HighlightWhereToDrop()
    {
      UnHighlightDropHelperBlocks();
      if (isAlpacaCarryingBlock())
      {
        Vector3 posX = getAdjacentBlockDropPos(Facing.PosX);
        Vector3 negX = getAdjacentBlockDropPos(Facing.NegX);
        Vector3 posZ = getAdjacentBlockDropPos(Facing.PosZ);
        Vector3 negZ = getAdjacentBlockDropPos(Facing.NegZ);

        if (posX.y != boardLowestY - 1 && lastFacing == Facing.PosX)
        {
          HighlightDropHelperBlock(posX);
        }

        if (negX.y != boardLowestY - 1 && lastFacing == Facing.NegX)
        {
          HighlightDropHelperBlock(negX);
        }

        if (posZ.y != boardLowestY - 1 && lastFacing == Facing.PosZ)
        {
          HighlightDropHelperBlock(posZ);
        }

        if (negZ.y != boardLowestY - 1 && lastFacing == Facing.NegZ)
        {
          HighlightDropHelperBlock(negZ);
        }
      }
    }

    Vector3 getAdjacentBlockDropPos(Facing facing)
    {
      Vector3 vec = GetLocationInFront(facing);
      float lowestY = GetLowestDropPossible(vec);

      if (!(Mathf.Approximately(lowestY, boardLowestY)) && isSpaceOpen(vec))
      {
        return new Vector3(vec.x, lowestY - 1, vec.z);
      }

      return new Vector3(0, boardLowestY - 1, vec.z);
    }

    void LevelsOneToFiveSetNormalSprites()
    {
      foreach (GameObject nonInteractiveBlock in nonInteractiveBlocks)
      {
        nonInteractiveBlock.GetComponent<Unclickable>().setNormalSprite();
      }

      foreach (GameObject playerBlock in playerBlocks)
      {
        playerBlock.GetComponent<clickable_block>().setNormalSprite();
      }
    }

    void setWASD(Facing facing)
    {
      Vector3 pos = getAdjacentBlockDropPos(facing);
      Vector3 posAbove = GetLocationInFront(facing);

      GameObject nonInteractableBlock = getNonInteractableBlock(pos);
      GameObject nonInteractableBlockAbove = getNonInteractableBlock(posAbove);
      GameObject playerBlock = getPlayerBlock(pos);
      GameObject playerBlockAbove = getPlayerBlock(posAbove);

      if (nonInteractableBlock != null)
      {
        nonInteractableBlock.GetComponent<Unclickable>().setWASDsprite((int)facing);
      }

      if (nonInteractableBlockAbove != null)
      {
        nonInteractableBlockAbove.GetComponent<Unclickable>().setWASDsprite((int)facing);
      }

      if (playerBlock != null)
      {
        playerBlock.GetComponent<clickable_block>().setWASDsprite((int)facing);
      }

      if (playerBlockAbove != null)
      {
        playerBlockAbove.GetComponent<clickable_block>().setWASDsprite((int)facing);
      }
    }

    void LevelsOneToFiveHelper()
    {
      //string levelName = SceneManager.GetActiveScene().name;

      //if (levelName.Equals("B1") || levelName.Equals("B2") || levelName.Equals("B3") || levelName.Equals("B4") || levelName.Equals("B5"))
      //{
      //  LevelsOneToFiveSetNormalSprites();

      //  setWASD(Facing.PosX);
      //  setWASD(Facing.NegX);
      //  setWASD(Facing.PosZ);
      //  setWASD(Facing.NegZ);
      //}
    }

    bool isFacingEdge(Vector3 currLocation, Facing facing)
    {

      Vector3 posIfAlpacaMoved = GetLocationInFront(GetCurrAlpacaLocation(), facing);

      posIfAlpacaMoved.y = GetLowestDropPossible(posIfAlpacaMoved);

      if (posIfAlpacaMoved.y < GetCurrAlpacaLocation().y)
      {
        return true;
      }

      return false;
    }

    bool isPosWall(Vector3 targetPos)
    {
      foreach (GameObject wallBlock in wallBlocks)
      {
        if (wallBlock.transform.position == targetPos)
        {
          return true;
        }
      }

      return false;
    }

    bool HittingWall(Facing newFacing)
    {
      Vector3 posInFront = GetLocationInFront(newFacing);
      return isPosWall(posInFront);
    }

    bool WallBelowAlpaca(Facing newFacing)
    {
      Vector3 posInFrontLowest = GetLocationInFront(newFacing);
      posInFrontLowest.y = GetLowestDropPossible(posInFrontLowest) - 1;

      return isPosWall(posInFrontLowest);
    }

    bool RotateAlpaca(Facing newFacing)
    {
      if (newFacing != lastFacing)
      {
        return true;
      }

      return false;
    }

    bool AttemptJump(Vector3 posInFront)
    {
      if (isSpaceOpen(posInFront))
      { // Empty space in front of alpaca
        return false;
      }

      Vector3 spaceAbove = new Vector3(GetCurrAlpacaLocation().x,
                                       GetCurrAlpacaLocation().y + 1,
                                       GetCurrAlpacaLocation().z);

      if (!isSpaceOpen(spaceAbove))
      { // There's a block above the alpaca
        illegalJump = true;
        return false;
      }

      Vector3 posAbovePosInFront = new Vector3(posInFront.x, posInFront.y + 1, posInFront.z);
      if (!isSpaceOpen(posAbovePosInFront))
      { // There is a block above one in front of the alpaca
        return false;
      }

      foreach (GameObject playerBlock in playerBlocks)
      {
        if (isTwoPosEqual(playerBlock.transform.position, posInFront))
        {
          return playerBlock.GetComponent<clickable_block>().isBlockHighlighted() || isAlpacaCarryingBlock();
        }
      }

      posInFront.y += 1;
      return isSpaceOpen(posInFront);
    }

    bool Jump(Facing newFacing)
    {
      Vector3 posInFront = GetLocationInFront(newFacing);
      bool canJump = AttemptJump(posInFront);

      if (canJump)
      {
        posInFront.y += 1;
        gameObject.transform.position = posInFront;


        if (!isAlpacaCarryingBlock())
        {
          foreach (GameObject playerBlock in playerBlocks)
          {
            playerBlock.GetComponent<clickable_block>().dropBlock(); // make sure no block is highlighted after jumping
          }
        }
      }

      return canJump;
    }

    bool didRamIntoPlayableBlock(bool didHighlight, Facing newFacing)
    {

      foreach (GameObject playerBlock in playerBlocks)
      {
        if (isTwoPosEqual(GetLocationInFront(newFacing), playerBlock.transform.position) &&
            (didHighlight || (!didHighlight && isPlayerBlockBelowOtherPlayerBlocks(playerBlock))))
        {
          return true;
        }
      }

      return false;
    }

    bool isGoingToHitUnjumpableStaticBlock(Facing newFacing, bool didJump)
    {
      if (didJump) return false;

      GameObject[] allObjs = UnityEngine.Object.FindObjectsOfType<GameObject>();
      foreach (GameObject obj in allObjs)
      {
        if (obj.tag == "NonInteractable" && isTwoPosEqual(obj.transform.position, GetLocationInFront(newFacing)))
        {
          return true;
        }
      }

      return false;
    }

    void MovementKeyPressed(Facing newFacing)
    {
      bool didHighlight = ShouldHighlightPlayerBlock(newFacing, false, Vector3.zero);
      if (!didHighlight)
      {
        inputProcess();
      }
    }

    bool isFalling(Facing newFacing)
    {
      Vector3 locInFront = GetLocationInFront(newFacing);
      Vector3 locInFrontOneBelow = new Vector3(locInFront.x, locInFront.y - 1, locInFront.z);

      return isSpaceOpen(locInFront) && isSpaceOpen(locInFrontOneBelow);
    }

    bool blockInFront(Facing newFacing)
    {
      Vector3 locInFront = GetLocationInFront(newFacing);

      return !isSpaceOpen(locInFront);
    }

    Vector3 GetFallenPosition(Facing newFacing)
    {
      Vector3 locInFront = GetLocationInFront(newFacing);
      float yDrop = GetLowestDropPossible(locInFront) - 1.0f;

      return new Vector3(locInFront.x, yDrop, locInFront.z);
    }

    bool NonMovement(Facing newFacing)
    {
      bool didRotate = RotateAlpaca(newFacing);
      bool didJump = Jump(newFacing);
      didFall = isFalling(newFacing);
      bool didHighlight = false;
      bool didHitWall = HittingWall(newFacing);
      bool isWallBelowMovement = WallBelowAlpaca(newFacing);
      bool didHitUnjumpableStaticBlock = isGoingToHitUnjumpableStaticBlock(newFacing, didJump);

      if (!didHitWall && !isWallBelowMovement && !didHitUnjumpableStaticBlock)
      {
        didHighlight = ShouldHighlightPlayerBlock(newFacing, false, Vector3.zero);
      }

      lastFacing = newFacing;
      oldLoc = GetCurrAlpacaLocation();
      continuousMovementSecondCheck = !isFalling(newFacing) && !blockInFront(newFacing);
      return didHitWall || isWallBelowMovement || didRotate || didJump || didHighlight;
      //return didRotate || didJump || didHitUnjumpableStaticBlock || didHighlight;
    }


        int middle_w = Screen.width / 2;
        int middle_h = Screen.height / 2;

        bool ClickedW() {
            if (Input.GetMouseButton(0) && !doubleClickDetected)
            {
                Vector2 click = Input.mousePosition;
                return (click.x > middle_w) && (click.y > middle_h) ;
            }
            return false;
        }

        bool ClickedS() {
            if (Input.GetMouseButton(0) && !doubleClickDetected)
            {
                Vector2 click = Input.mousePosition;
                return (click.x < middle_w) && (click.y < middle_h);
            }
            return false;
        }

        bool ClickedD() {
            if (Input.GetMouseButton(0) && !doubleClickDetected)
            {
                Vector2 click = Input.mousePosition;
                return (click.x > middle_w) && (click.y < middle_h);
            }
            return false;
        }

        bool ClickedA() {
            if (Input.GetMouseButton(0) && !doubleClickDetected)
            {
                Vector2 click = Input.mousePosition;
                return (click.x < middle_w) && (click.y > middle_h);
            }
            return false;
        }

        void KeyPressedOnce()
        {
            if (ClickedW() || Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
            {
                continuousMovement = !NonMovement(Facing.PosZ);
            }
            if (ClickedS() || Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
            {
                continuousMovement = !NonMovement(Facing.NegZ);
            }
            if (ClickedD() || Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
            {
                continuousMovement = !NonMovement(Facing.PosX);
            }
            if (ClickedA() || Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
            {
                continuousMovement = !NonMovement(Facing.NegX);
            }
        }

        void InputProcess()
        {
            KeyPressedOnce();
            HighlightWhereToDrop();
            LevelsOneToFiveHelper();

            if (continuousMovement)
            {

                if (ClickedW() || Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
                {
                    MovementKeyPressed(Facing.PosZ);
                }
                if (ClickedS() || Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
                {
                    MovementKeyPressed(Facing.NegZ);
                }
                if (ClickedD() || Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
                {
                    MovementKeyPressed(Facing.PosX);
                }
                if (ClickedA() || Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
                {
                    MovementKeyPressed(Facing.NegX);
                }

                if (Input.GetKeyUp(KeyCode.W) || Input.GetKeyUp(KeyCode.UpArrow) ||
                    Input.GetKeyUp(KeyCode.S) || Input.GetKeyUp(KeyCode.DownArrow) ||
                    Input.GetKeyUp(KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow) ||
                    Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow))
                {

                    ShouldHighlightPlayerBlock(lastFacing, false, Vector3.zero);
                }
            }

    if (Input.GetKeyDown(KeyCode.Space) || doubleClickDetected)
      {
        AttemptPickOrDropPlayerBlock();
        ShouldHighlightPlayerBlock(lastFacing, false, Vector3.zero);
        doubleClickDetected = false;
      }

      if (NMAgent != null && bUseClickToPathfinding)
        ClickToMove();
    }

    bool prevClicked = false;
    float timeCurrent;
    float timeAtButtonDown;
    float timeAtButtonUp;
    float timeButtonHeld = 0;
    bool draggable = false;

    bool keyMacro(InGameDirection direction, 
              bool bShift,
              System.Func<IEnumerable<KeyCode>, 
              System.Func<KeyCode, bool>, bool> action,
              System.Func<KeyCode, bool> subAction,
              System.Func<int, bool> keyCheck,
              System.Action<InGameDirection> Do,
              params KeyCode[] codes)
    {

      if (bShift) // Rotate
        direction = (InGameDirection)(-1 * (int)direction);

      if (action(codes, subAction))
      {
        Do(direction);
        return true;
      }
    
    Console.WriteLine(keyCheck(0));
    if (keyCheck(0)) {
                Vector2 click = Input.mousePosition;
                if (codes[1] == KeyCode.W && ((click.x > middle_w) && (click.y > middle_h))) {
                    Do(direction);
                    return true;
                } else if(codes[1] == KeyCode.A && ((click.x < middle_w) && (click.y > middle_h))) {
                    Do(direction);
                    return true;
                } else if(codes[1] == KeyCode.S && ((click.x < middle_w) && (click.y < middle_h))) {
                    Do(direction);
                    return true;
                } else if (codes[1] == KeyCode.D && ((click.x > middle_w) && (click.y < middle_h))) {
                    Do(direction); 
                    return true;
                }
            }
            return false;
    }

        float timer = 0;

        void inputProcess()
    {
            bool bShifted = false;//.GetKey(KeyCode.LeftShift);
      System.Action<InGameDirection> Do;
      System.Func<KeyCode, bool> GetKeyMethod;
      System.Func<int, bool> GetClickMethod;
      if (continuousMovementSecondCheck)
      {//(target.bContinuousMovement){
        Do = ContinuousMove;
        GetKeyMethod = Input.GetKey;
        GetClickMethod = Input.GetMouseButtonDown;
      }
      else
      {
        Do = EnQueueTo;
        GetKeyMethod = Input.GetKeyDown;
        GetClickMethod = Input.GetMouseButtonDown;
      }

        if(Input.GetMouseButtonDown(0))
        {
            timeAtButtonDown = timeCurrent;
       }

            else
        {
                timeAtButtonUp = timeCurrent;
                timeButtonHeld = timeAtButtonUp - timeAtButtonDown;
            }

            keyMacro(InGameDirection.LT_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, GetClickMethod, Do, KeyCode.LeftArrow, KeyCode.A);
            keyMacro(InGameDirection.RD_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, GetClickMethod, Do, KeyCode.RightArrow, KeyCode.D);
            keyMacro(InGameDirection.RT_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, GetClickMethod, Do, KeyCode.UpArrow, KeyCode.W);
            keyMacro(InGameDirection.LD_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, GetClickMethod, Do, KeyCode.DownArrow, KeyCode.S);

            if (timer > 0.1 && timer < 0.4)
            {
                timer += Time.deltaTime;
                if (Input.GetMouseButtonDown(0))
                {
                    doubleClickDetected = true;
                }
            }
            if (timer < 1) {
                timer += Time.deltaTime;
            } else
            {
                timer = 0;
            }
            //}
        }

    void EnQueueTo(InGameDirection direction)
    {
      //bool bDash = target.bMovingDirection(direction) && (Time.time - fLastInputTime < fMaxDashInputInterval);
      fLastInputTime = Time.time;

      //target.EnQueueDirection(bDash ? InGameDirection.Dash : direction);
      target.EnQueueDirection(direction);
    }

    void ContinuousMove(InGameDirection direction)
    {
      if (direction < 0)
        direction = (InGameDirection)(-1 * (int)direction);
      Vector3 vMovement = IsometricMovement.HorizontalVector(direction);
      target.DirectTranslate(vMovement * Time.deltaTime);
    }

    public void AddAnchor(Vector3 position)
    {
      ClearAnchor();
      if (AnchorPrefab)
        AnchorInstance = Instantiate(AnchorPrefab, position + AnchorPrefab.transform.position, AnchorPrefab.transform.rotation);
    }

    public void ClearAnchor()
    {
      if (AnchorInstance)
      {
        Destroy(AnchorInstance);
        AnchorInstance = null;
      }
    }

    public void SetTarget(IsometricMovement newTarget)
    {
      ClearAnchor();
      target = newTarget;
      NMAgent = target == null ? null : target.GetComponent<IsometricNavMeshAgent>();
    }

    public void DiagonalKey(bool bFlag)
    {
      bUseDiagonalKey = bFlag;
    }

    
}
}