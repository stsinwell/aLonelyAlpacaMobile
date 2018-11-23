using System.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
        public enum Facing {PosZ, NegZ, PosX, NegX};
        public Facing lastFacing;
        float boardLowestY;
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

            foreach(GameObject playerBlock in playerBlocks) {
                playerBlock.AddComponent<clickable_block>();
                if (playerBlock.tag == "StickyBlock") {
                    playerBlock.GetComponent<clickable_block>().isSticky = true;
                    
                }
                boardLowestY = Math.Min(playerBlock.transform.position.y, boardLowestY);
            }

            GameObject[] allObjs =  UnityEngine.Object.FindObjectsOfType<GameObject>();
            foreach (GameObject obj in allObjs) {
                if (obj.tag == "Untagged" || obj.tag =="FireBlockPos") {
                    boardLowestY = Math.Min(obj.transform.position.y, boardLowestY);
                }
            }
            
            lastFacing = Facing.PosX;
            continuousMovement = false;

            wallBlocks = GameObject.FindGameObjectsWithTag("Wall");
            foreach (GameObject wallBlock in wallBlocks) {
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
            while(count < doubleClickTimeLimit)
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

        Vector3 RoundLocation(Vector3 vec) {
            return new Vector3(Mathf.RoundToInt(vec.x), Mathf.RoundToInt(vec.y), Mathf.RoundToInt(vec.z));
        }

        Vector3 GetCurrAlpacaLocation() {
            Vector3 vec = gameObject.transform.position;
            return RoundLocation(vec);
        }
        
        Vector3 BoundAlpacaToBlock() {
            Vector3 newLoc = RoundLocation(gameObject.transform.position);
            
            if (oldLoc == newLoc && !blockInFront(lastFacing)) { //should move at least one
                newLoc = GetLocationInFront(newLoc, lastFacing);
            }
            
            return new Vector3(newLoc.x, newLoc.y - 0.22f, newLoc.z);
        }

        //method to access private GettCurrAlpacaLocation property
        public Vector3 GetCurrAlpacaLocationProperty() {
            return GetCurrAlpacaLocation();
        }

        bool isTwoPosEqual(Vector3 pos1, Vector3 pos2) {
            return Mathf.Approximately(pos1.x, pos2.x) && 
                   Mathf.Approximately(pos1.y, pos2.y) && 
                   Mathf.Approximately(pos1.z, pos2.z);
        }

        bool isPlayerBlockBelowOtherPlayerBlocks(GameObject blockInQuestion) {
            Vector3 adjustedBlockPos = blockInQuestion.transform.position;
            adjustedBlockPos.y += 1;

            foreach (GameObject playerBlock in playerBlocks) {
                if(isTwoPosEqual(playerBlock.transform.position, adjustedBlockPos)) {
                    return true;
                }
            }

            return false;
        }

        bool isAlpacaFacingPlayableBlock(Facing facing, GameObject playerBlock, bool providedLocation, Vector3 forceAlpacaLocation) {
            Vector3 posIfAlpacaMoved = providedLocation ? forceAlpacaLocation : GetCurrAlpacaLocation();

            if (facing == Facing.PosZ) {
                posIfAlpacaMoved.z += 1;
            } else if (facing == Facing.NegZ) {
                posIfAlpacaMoved.z -= 1;
            } else if (facing == Facing.PosX) {
                posIfAlpacaMoved.x += 1;
            } else if (facing == Facing.NegX) {
                posIfAlpacaMoved.x -= 1;
            }

            return isTwoPosEqual(playerBlock.transform.position, posIfAlpacaMoved);
        }

        void UnhighlightAllOtherPlayerBlocks() {
            foreach(GameObject playerBlock in playerBlocks) {
                playerBlock.GetComponent<clickable_block>().setPlayerNotFacing();
            }
        }

        bool ShouldHighlightPlayerBlock(Facing facing, bool providedLocation, Vector3 forceAlpacaLocation) {
            if (isAlpacaCarryingBlock()) {
                return false;
            }

            foreach(GameObject playerBlock in playerBlocks) {
                if (isAlpacaFacingPlayableBlock(facing, playerBlock, providedLocation, forceAlpacaLocation) && !isPlayerBlockBelowOtherPlayerBlocks(playerBlock)) {
                    UnhighlightAllOtherPlayerBlocks();
                    playerBlock.GetComponent<clickable_block>().setPlayerFacing();
                    return true;
                } else {
                    playerBlock.GetComponent<clickable_block>().setPlayerNotFacing();
                }
            }

            return false;
        }

        Vector3 GetDropPosition() {
            return GetLocationInFront(lastFacing);
        }

        Vector3 GetLocationInFront(Facing facing) {
            return GetLocationInFront(GetCurrAlpacaLocation(), facing);
        }

        Vector3 GetLocationInFront(Vector3 currLocation, Facing facing) {
            Vector3 targetPos = Vector3.zero;

            if (facing == Facing.PosZ) {
                targetPos = new Vector3(currLocation.x, currLocation.y, currLocation.z + 1);
            } else if (facing == Facing.NegZ) {
                targetPos = new Vector3(currLocation.x, currLocation.y, currLocation.z - 1);
            } else if (facing == Facing.PosX) {
                targetPos = new Vector3(currLocation.x + 1, currLocation.y, currLocation.z);
            } else if (facing == Facing.NegX) {
                targetPos = new Vector3(currLocation.x - 1, currLocation.y, currLocation.z);
            }

            return targetPos;
        }

        void PickUpBlock(GameObject playerBlock) {
            Vector3 alpacaPos = GetCurrAlpacaLocation();
            playerBlock.GetComponent<clickable_block>().pickedUpBlock();
            musicSource.Play();
            playerBlock.transform.position = new Vector3(100.0f, 100.0f, 100.0f);
            CFD.has_block = true;
        }

        void DropBlock(GameObject selectedBlock, Vector3 targetPos) {

            float yDrop;
            if (selectedBlock.GetComponent<clickable_block>().isSticky) {
                yDrop = GetStickyDropY(targetPos);
            } else {
                yDrop = GetLowestDropPossible(targetPos);

            }
            
            if (Mathf.Approximately(yDrop, boardLowestY)) return ;
            Vector3 posBelowTargetPos = new Vector3(targetPos.x, yDrop - 1, targetPos.z);
            if (isPosWall(posBelowTargetPos)) return ;

            selectedBlock.transform.position = new Vector3(targetPos.x, yDrop, targetPos.z);
            selectedBlock.GetComponent<clickable_block>().dropBlock();
            musicSource.Play();
            CFD.has_block = false;
        }

        float GetStickyDropY(Vector3 targetPos) {
            if (isSpaceOpen(new Vector3(targetPos.x, targetPos.y - 1, targetPos.z))) {
                return targetPos.y - 1;
            } else {
                return targetPos.y;
            }
        }

        float GetLowestDropPossible(Vector3 targetPos) {
            float y = targetPos.y;
            bool isDroppable = true;

            while (y > boardLowestY && isDroppable) {
                isDroppable = isSpaceOpen(new Vector3(targetPos.x, y - 1, targetPos.z));
                y = isDroppable ? y - 1 : y;
            }

            return y;
        }

        bool isSpaceOpen(Vector3 targetPos) {
            GameObject[] allObjs =  UnityEngine.Object.FindObjectsOfType<GameObject>();

            // can't if there's a normal block at desired drop pos
            foreach (GameObject obj in allObjs) {
                if (obj.tag == "Untagged" || obj.tag == "FireBlockPos" || 
                    obj.tag == "Clickable" || obj.tag == "StickyBlock") {
                    if (isTwoPosEqual(obj.transform.position, targetPos)) {
                        return false;
                    }
                }
            }

            return true;
        }

        void AttemptDropBlock(GameObject selectedBlock) {
            Vector3 targetPos = GetDropPosition();
            bool canPlace = isSpaceOpen(targetPos);

            if (canPlace) {
                DropBlock(selectedBlock, targetPos);
            }
        }

        bool isAlpacaCarryingBlock() {
            bool isSelected = false;
            foreach(GameObject playerBlock in playerBlocks) {
                if (playerBlock.GetComponent<clickable_block>().isSelected) {
                    isSelected = true;
                }
            }

            return isSelected;
        }

        void AttemptPickOrDropPlayerBlock() {
            foreach(GameObject playerBlock in playerBlocks) {
                if (playerBlock.GetComponent<clickable_block>().isSelected) {
                    AttemptDropBlock(playerBlock);
                } else if (!isAlpacaCarryingBlock() && playerBlock.GetComponent<clickable_block>().isPlayerFacing 
                            && playerBlock.GetComponent<clickable_block>().isBlockHighlighted()) {
                    PickUpBlock(playerBlock);
                } 
            }
        }

        bool isFacingEdge(Vector3 currLocation, Facing facing) {

            Vector3 posIfAlpacaMoved = GetLocationInFront(GetCurrAlpacaLocation(), facing);

            posIfAlpacaMoved.y = GetLowestDropPossible(posIfAlpacaMoved);

            if (posIfAlpacaMoved.y < GetCurrAlpacaLocation().y) {
                return true;
            }

            return false;
        }

        bool isPosWall(Vector3 targetPos) {
            foreach (GameObject wallBlock in wallBlocks) {
                if (wallBlock.transform.position == targetPos) {
                    return true;
                }
            }

            return false;
        }

        bool HittingWall(Facing newFacing) {
            Vector3 posInFront = GetLocationInFront(newFacing);
            return isPosWall(posInFront);
        }

        bool WallBelowAlpaca(Facing newFacing) {
            Vector3 posInFrontLowest = GetLocationInFront(newFacing);
            posInFrontLowest.y = GetLowestDropPossible(posInFrontLowest) - 1;
            
            return isPosWall(posInFrontLowest);
        }

        bool RotateAlpaca(Facing newFacing) {

        GameObject loggingObject = GameObject.Find("GameObject");
        //int abTestValue = loggingObject.GetComponent<loggingInGameManager>().abValueToReference;
        if (newFacing != lastFacing) {
            return true;
        }

        return false;
//        int abTestValue = 1;
//            switch(abTestValue) {
//                //if abtestvalue is 1, player may pivot in place
//                case 1:
//                    if (newFacing != lastFacing) {
//                        return true;
//                    }
//
//                    return false;
//             return false;
        }

        bool AttemptJump(Vector3 posInFront) {
            if (isSpaceOpen(posInFront)) { // Empty space in front of alpaca
                return false;
            }

            Vector3 spaceAbove = new Vector3(GetCurrAlpacaLocation().x,
                                             GetCurrAlpacaLocation().y + 1,
                                             GetCurrAlpacaLocation().z);

            if (!isSpaceOpen(spaceAbove)) { // There's a block above the alpaca
                illegalJump = true;
                return false;
            }

            Vector3 posAbovePosInFront = new Vector3(posInFront.x, posInFront.y + 1, posInFront.z);
            if (!isSpaceOpen(posAbovePosInFront)) { // There is a block above one in front of the alpaca
                return false;
            }

            foreach (GameObject playerBlock in playerBlocks) {
                if (isTwoPosEqual(playerBlock.transform.position, posInFront)) {
                    return playerBlock.GetComponent<clickable_block>().isBlockHighlighted() || isAlpacaCarryingBlock();
                }
            }

            posInFront.y += 1;
            return isSpaceOpen(posInFront);
        }

        bool Jump(Facing newFacing) {
            Vector3 posInFront = GetLocationInFront(newFacing);
            bool canJump = AttemptJump(posInFront);

            if (canJump) {
                posInFront.y += 1;
                gameObject.transform.position = posInFront;

                if (!isAlpacaCarryingBlock()) { 
                    foreach(GameObject playerBlock in playerBlocks) { 
                        playerBlock.GetComponent<clickable_block>().dropBlock(); // make sure no block is highlighted after jumping
                    }
                }
            }

            return canJump;
        }

        bool didRamIntoPlayableBlock(bool didHighlight, Facing newFacing) {

            foreach (GameObject playerBlock in playerBlocks) {
                if (isTwoPosEqual(GetLocationInFront(newFacing), playerBlock.transform.position) && 
                    (didHighlight || (!didHighlight && isPlayerBlockBelowOtherPlayerBlocks(playerBlock)))) {
                    return true;
                }
            }

            return false;
        }

        bool isGoingToHitUnjumpableStaticBlock(Facing newFacing, bool didJump) {
            if (didJump) return false;

            GameObject[] allObjs =  UnityEngine.Object.FindObjectsOfType<GameObject>();
            foreach (GameObject obj in allObjs) {
                if (obj.tag == "Untagged" && isTwoPosEqual(obj.transform.position, GetLocationInFront(newFacing))) {
                     return true;
                }
            }

            return false;
        }

        void MovementKeyPressed(Facing newFacing) {
            bool didHighlight = ShouldHighlightPlayerBlock(newFacing, false, Vector3.zero);
            if (!didHighlight) {
                inputProcess();
            }
        }
        
        bool isFalling(Facing newFacing) {
            Vector3 locInFront = GetLocationInFront(newFacing);
            Vector3 locInFrontOneBelow = new Vector3(locInFront.x, locInFront.y - 1, locInFront.z);
            
            return isSpaceOpen(locInFront) && isSpaceOpen(locInFrontOneBelow);
        }
        
        bool blockInFront(Facing newFacing) {
            Vector3 locInFront = GetLocationInFront(newFacing);
            
            return !isSpaceOpen(locInFront);
        }
        
        bool NonMovement(Facing newFacing) {
            bool didRotate = RotateAlpaca(newFacing);
            bool didJump = Jump(newFacing);
            bool didHighlight = false;
            bool didHitWall = HittingWall(newFacing);
            bool isWallBelowMovement = WallBelowAlpaca(newFacing);
            //bool didHitUnjumpableStaticBlock = isGoingToHitUnjumpableStaticBlock(newFacing, didJump);
            
            if (!didHitWall && !isWallBelowMovement) {
                //if (!didJump && !didHitUnjumpableStaticBlock) {
                if (!didJump) {
                    didHighlight = ShouldHighlightPlayerBlock(newFacing, false, Vector3.zero);
                }
            }
            
            lastFacing = newFacing;
            oldLoc = GetCurrAlpacaLocation();
            continuousMovementSecondCheck = !isFalling(newFacing) && !blockInFront(newFacing);
            return didHitWall || isWallBelowMovement || didRotate || didJump || didHighlight;
            //return didRotate || didJump || didHitUnjumpableStaticBlock || didHighlight;
        }
        
        void KeyPressedOnce() {
            if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow)) {
                continuousMovement = !NonMovement(Facing.PosZ);
                //LoggingManager.instance.RecordEvent(6, "Player took a step with W/Up key.");
            }
            if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)) {
                continuousMovement = !NonMovement(Facing.NegZ);
                //LoggingManager.instance.RecordEvent(6, "Player took a step with S/Down key.");
            }
            if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow)) {
                continuousMovement = !NonMovement(Facing.PosX);
                //inputProcess();
                //LoggingManager.instance.RecordEvent(6, "Player took a step with D/Right key.");
            }
            if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow)) {
                continuousMovement = !NonMovement(Facing.NegX);
                //LoggingManager.instance.RecordEvent(6, "Player took a step with A/Left key.");
            }
        }

        void InputProcess()
        {            
            KeyPressedOnce();
            
            if (continuousMovement) {
                if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow)) {
                    MovementKeyPressed(Facing.PosZ);
                    //LoggingManager.instance.RecordEvent(6, "Player took a step with W/Up key.");
                }
                if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow)) {
                    MovementKeyPressed(Facing.NegZ);
                    //LoggingManager.instance.RecordEvent(6, "Player took a step with S/Down key.");
                }
                if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow)) {
                    MovementKeyPressed(Facing.PosX);
                    //LoggingManager.instance.RecordEvent(6, "Player took a step with D/Right key.");
                }
                if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow)) {
                    MovementKeyPressed(Facing.NegX);
                    //LoggingManager.instance.RecordEvent(6, "Player took a step with A/Left key.");
                }

                if (Input.GetKeyUp(KeyCode.W) || Input.GetKeyUp(KeyCode.UpArrow) ||
                    Input.GetKeyUp(KeyCode.S) || Input.GetKeyUp(KeyCode.DownArrow) ||
                    Input.GetKeyUp(KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow) ||
                    Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow) ) {
                    gameObject.transform.position = BoundAlpacaToBlock();
                }
            }

            if (Input.GetKeyDown(KeyCode.Space) || doubleClickDetected) {
                AttemptPickOrDropPlayerBlock();
                ShouldHighlightPlayerBlock(lastFacing, false, Vector3.zero);
                doubleClickDetected = false;
            }

            if (NMAgent != null && bUseClickToPathfinding)
                ClickToMove();
        }

        bool keyMacro(InGameDirection direction, bool bShift,
            System.Func<IEnumerable<KeyCode>, System.Func<KeyCode, bool>, bool> action,
            System.Func<KeyCode, bool> subAction,
            System.Action<InGameDirection> Do,
            params KeyCode[] codes)
        {
            if (bShift) // Rotate
                direction = (InGameDirection) (-1 * (int) direction);

            if (action(codes, subAction))
            {
                Do(direction);
                return true;
            }
            return false;
        }

        void inputProcess()
        {
            bool bShifted = Input.GetKey(KeyCode.LeftShift);
            System.Action<InGameDirection> Do;
            System.Func<KeyCode, bool> GetKeyMethod;
            if (continuousMovementSecondCheck) {//(target.bContinuousMovement){
                Do = ContinuousMove;
                GetKeyMethod = Input.GetKey;
            } else {
                Do = EnQueueTo;
                GetKeyMethod = Input.GetKeyDown;
            }

            if (target.b8DirectionalMovement)
            {
                bool bSelected = false;
                if (bUseDiagonalKey)
                {
                    if (keyMacro(InGameDirection.LT_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad7, KeyCode.Q) ||
                        keyMacro(InGameDirection.RD_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad3, KeyCode.C) ||
                        keyMacro(InGameDirection.RT_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad9, KeyCode.E) ||
                        keyMacro(InGameDirection.LD_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad1, KeyCode.Z))
                        bSelected = true;
                }
                else
                {
                    if (keyMacro(InGameDirection.LT_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.LeftArrow, KeyCode.UpArrow)      ||
                        keyMacro(InGameDirection.RD_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.RightArrow, KeyCode.DownArrow)   ||
                        keyMacro(InGameDirection.RT_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.RightArrow, KeyCode.UpArrow)     ||
                        keyMacro(InGameDirection.LD_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.LeftArrow, KeyCode.DownArrow)    ||
                        keyMacro(InGameDirection.LT_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.A, KeyCode.W)      ||
                        keyMacro(InGameDirection.RD_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.D, KeyCode.S)   ||
                        keyMacro(InGameDirection.RT_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.D, KeyCode.W)     ||
                        keyMacro(InGameDirection.LD_Move, bShifted, Enumerable.All<KeyCode>, GetKeyMethod, Do, KeyCode.A, KeyCode.S))
                        bSelected = true;
                }

                if (bSelected == false)
                {
                    keyMacro(InGameDirection.Left_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad4, KeyCode.LeftArrow, KeyCode.A);
                    keyMacro(InGameDirection.Right_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad6, KeyCode.RightArrow, KeyCode.D);
                    keyMacro(InGameDirection.Top_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad8, KeyCode.UpArrow, KeyCode.W);
                    keyMacro(InGameDirection.Down_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.Keypad2, KeyCode.DownArrow, KeyCode.X, KeyCode.S);
                }
            }
            else
            {
                keyMacro(InGameDirection.LT_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.LeftArrow, KeyCode.A);
                keyMacro(InGameDirection.RD_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.RightArrow, KeyCode.D);
                keyMacro(InGameDirection.RT_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.UpArrow, KeyCode.W);
                keyMacro(InGameDirection.LD_Move, bShifted, Enumerable.Any<KeyCode>, GetKeyMethod, Do, KeyCode.DownArrow, KeyCode.S);
            }
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
                direction = (InGameDirection ) (- 1 * (int) direction);
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