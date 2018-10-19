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
        Vector3 newAlpacaPos;
        public enum Facing {PosZ, NegZ, PosX, NegX};
        public Facing lastFacing;
        float boardLowestY;

        public Button posXButton, negXButton, posZButton, negZButton;

        bool doubleClickDetected = false;
        private float doubleClickTimeLimit = 0.25f;

        private void Start()
        {
            init();

            // Set up the movement buttons
            Button pXB = posXButton.GetComponent<Button>();
            Button nXB = negXButton.GetComponent<Button>();
            Button pZB = posZButton.GetComponent<Button>();
            Button nZB = negZButton.GetComponent<Button>();
            pXB.onClick.AddListener(delegate { MoveToDir(InGameDirection.RD_Move); });
            nXB.onClick.AddListener(delegate { MoveToDir(InGameDirection.LT_Move); });
            pZB.onClick.AddListener(delegate { MoveToDir(InGameDirection.RT_Move); });
            nZB.onClick.AddListener(delegate { MoveToDir(InGameDirection.LD_Move); });

            playerBlocks = GameObject.FindGameObjectsWithTag("Clickable");
            newAlpacaPos = Vector3.zero;
        
            foreach(GameObject playerBlock in playerBlocks) {
                playerBlock.AddComponent<clickable_block>();
                boardLowestY = Math.Min(playerBlock.transform.position.y, boardLowestY);
            }

            GameObject[] allObjs =  UnityEngine.Object.FindObjectsOfType<GameObject>();
            foreach (GameObject obj in allObjs) {
                if (obj.tag == "Untagged") {
                    boardLowestY = Math.Min(obj.transform.position.y, boardLowestY);
                }
            }

            StartCoroutine(InputListener());
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


        void MoveToDir(InGameDirection dir) {
            if (dir == InGameDirection.RD_Move) {
                StartCoroutine(CheckIfFacingPlayerBlock(Facing.PosX));
                lastFacing = Facing.PosX;
            }
            if (dir == InGameDirection.RT_Move) {
                StartCoroutine(CheckIfFacingPlayerBlock(Facing.PosZ));
                lastFacing = Facing.PosZ;
            }
            if (dir == InGameDirection.LD_Move) {
                StartCoroutine(CheckIfFacingPlayerBlock(Facing.NegZ));
                lastFacing = Facing.NegZ;
            }
            if (dir == InGameDirection.LT_Move) {
                StartCoroutine(CheckIfFacingPlayerBlock(Facing.NegX));
                lastFacing = Facing.NegX;
            }

            EnQueueTo(dir);
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

        Vector3 RoundVectorToInt(Vector3 vec) {
            return new Vector3(Mathf.RoundToInt(vec.x), Mathf.RoundToInt(vec.y), Mathf.RoundToInt(vec.z));
        }

        Vector3 GetCurrAlpacaLocation() {
            return RoundVectorToInt(gameObject.transform.position);
        }

        //method to access private GettCurrAlpacaLocation property
        public Vector3 GetCurrAlpacaLocationProperty() {
            
            return GetCurrAlpacaLocation();
    
        }

        public void adjustedAlpacaSize(Vector3 pos) {
            newAlpacaPos = RoundVectorToInt(pos);
        }

        bool isPlayerBlockBelowOtherPlayerBlocks(GameObject blockInQuestion) {
            foreach (GameObject playerBlock in playerBlocks) {
                if (playerBlock.transform.position.x == blockInQuestion.transform.position.x && 
                    playerBlock.transform.position.y == blockInQuestion.transform.position.y + 1 &&
                    playerBlock.transform.position.z == blockInQuestion.transform.position.z) {
                    return true;
                }
            }

            return false;
        }

        bool isAlpacaFacingPlayableBlock(Facing facing, GameObject playerBlock) {
            switch (facing) {
                case Facing.PosZ:
                    if (Mathf.Approximately(playerBlock.transform.position.x, newAlpacaPos.x)
                    && Mathf.Approximately(playerBlock.transform.position.y, newAlpacaPos.y)
                    && Mathf.Approximately(playerBlock.transform.position.z, (newAlpacaPos.z + 1))) {
                       return !isPlayerBlockBelowOtherPlayerBlocks(playerBlock);
                    }
                    break;

                case Facing.NegZ:
                    if (Mathf.Approximately(playerBlock.transform.position.x, newAlpacaPos.x)
                    && Mathf.Approximately(playerBlock.transform.position.y, newAlpacaPos.y)
                    && Mathf.Approximately(playerBlock.transform.position.z, (newAlpacaPos.z - 1))) {
                        return !isPlayerBlockBelowOtherPlayerBlocks(playerBlock);;
                    }
                    break;
             
                case Facing.PosX:
                    if (Mathf.Approximately(playerBlock.transform.position.x, (newAlpacaPos.x + 1))
                    && Mathf.Approximately(playerBlock.transform.position.y, newAlpacaPos.y)
                    && Mathf.Approximately(playerBlock.transform.position.z, newAlpacaPos.z)) {
                        return !isPlayerBlockBelowOtherPlayerBlocks(playerBlock);;
                    }
                    break;
             
                case Facing.NegX:
                    if (Mathf.Approximately(playerBlock.transform.position.x, (newAlpacaPos.x - 1))
                    && Mathf.Approximately(playerBlock.transform.position.y, newAlpacaPos.y)
                    && Mathf.Approximately(playerBlock.transform.position.z, newAlpacaPos.z)) {
                        return !isPlayerBlockBelowOtherPlayerBlocks(playerBlock);;
                    }
                    break;
            }

            return false;
        }

        IEnumerator CheckIfFacingPlayerBlock(Facing facing) {
            yield return new WaitUntil( () => newAlpacaPos != Vector3.zero);

            foreach(GameObject playerBlock in playerBlocks) {
                if (playerBlock.GetComponent<clickable_block>().isSelected) {
                    playerBlock.transform.position = new Vector3(newAlpacaPos.x, newAlpacaPos.y + 1, newAlpacaPos.z);
                    yield break ;
                }
            }

            foreach(GameObject playerBlock in playerBlocks) {
                if (isAlpacaFacingPlayableBlock(facing, playerBlock)) {
                    playerBlock.GetComponent<clickable_block>().setPlayerFacing();
                } else {
                    playerBlock.GetComponent<clickable_block>().setPlayerNotFacing();
                }
            }

            newAlpacaPos = Vector3.zero;
        }

        Vector3 GetDropPosition() {
            return GetLocationInFront(GetCurrAlpacaLocation(), lastFacing);
        }

        Vector3 GetLocationInFront(Vector3 currLocation, Facing facing) {
            Vector3 targetPos = Vector3.zero;

            switch(facing) {
                case Facing.PosZ:
                    targetPos = new Vector3(currLocation.x, currLocation.y, currLocation.z + 1);
                    break;

                case Facing.NegZ:
                    targetPos = new Vector3(currLocation.x, currLocation.y, currLocation.z - 1);
                    break;
             
                case Facing.PosX:
                    targetPos = new Vector3(currLocation.x + 1, currLocation.y, currLocation.z);
                    break;
             
                case Facing.NegX:
                    targetPos = new Vector3(currLocation.x - 1, currLocation.y, currLocation.z);
                    break;
            }

            return targetPos;
        }

        void PickUpBlock(GameObject playerBlock) {
            Vector3 alpacaPos = GetCurrAlpacaLocation();
            playerBlock.transform.position = new Vector3(alpacaPos.x, alpacaPos.y + 1, alpacaPos.z);
            playerBlock.GetComponent<clickable_block>().pickedUpBlock();
        }

        void DropBlock(GameObject selectedBlock, Vector3 targetPos) {
            float lowestY = GetLowestDropPossible(targetPos);
            if (lowestY == boardLowestY) return ;

            selectedBlock.transform.position = new Vector3(targetPos.x, lowestY, targetPos.z);
            selectedBlock.GetComponent<clickable_block>().dropBlock();
            newAlpacaPos = GetCurrAlpacaLocation();
            StartCoroutine(CheckIfFacingPlayerBlock(lastFacing));
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
                if (obj.tag == "Untagged") {
                    if (obj.transform.position == targetPos) {
                        return false;
                    }
                }
            }

            // can't if there's a playable block at desired drop pos
            foreach(GameObject playerBlock in playerBlocks) {
                if (playerBlock.transform.position == targetPos) {
                    return false;
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

        bool isBlockSelected() {
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
                } else if (!isBlockSelected() && playerBlock.GetComponent<clickable_block>().isPlayerFacing) {
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

        bool RotateAlpaca(Facing newFacing) {
            if (isFacingEdge(GetCurrAlpacaLocation(), newFacing) && newFacing != lastFacing) {
                return true;
            }

            return false;
        }

        bool AttemptJump(Vector3 posInFront) {
            if (isSpaceOpen(posInFront)) {
                return false;
            }

            foreach (GameObject playerBlock in playerBlocks) {
                bool isBlockHighlighted = playerBlock.GetComponent<clickable_block>().isPlayerFacing;

                if (playerBlock.transform.position == posInFront) {
                    return isBlockHighlighted || isBlockSelected();
                }
            }

            posInFront.y += 1;
            return isSpaceOpen(posInFront);
        }

        bool Jump(Facing newFacing) {
            Vector3 posInFront = GetLocationInFront(GetCurrAlpacaLocation(), newFacing);
            bool canJump = AttemptJump(posInFront);

            posInFront.y += 1;
            if (canJump) {
                gameObject.transform.position = posInFront;

                if (!isBlockSelected()) { // if alpaca isnt holding a block
                    foreach(GameObject playerBlock in playerBlocks) { 
                        playerBlock.GetComponent<clickable_block>().dropBlock(); // make sure no block is highlighted when jumping
                    }
                }
            }

            return canJump;
        }

        void InputProcess()
        {
            if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow)) {
                bool didRotate = RotateAlpaca(Facing.PosZ);
                bool didJump = Jump(Facing.PosZ);

                if (!didRotate && !didJump) {
                    inputProcess();
                    StartCoroutine(CheckIfFacingPlayerBlock(Facing.PosZ));
                }
                lastFacing = Facing.PosZ;
                LoggingManager.instance.RecordEvent(6, "Player took a step with W/Up key.");
            }
            if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)) {
                bool didRotate = RotateAlpaca(Facing.NegZ);
                bool didJump = Jump(Facing.NegZ);

                if (!didRotate && !didJump) {
                    inputProcess();
                    lastFacing = Facing.NegZ;
                    StartCoroutine(CheckIfFacingPlayerBlock(Facing.NegZ));
                }
                lastFacing = Facing.NegZ;
                LoggingManager.instance.RecordEvent(6, "Player took a step with S/Down key.");
            }
            if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow)) {
                bool didRotate = RotateAlpaca(Facing.PosX);
                bool didJump = Jump(Facing.PosX);

                if (!didRotate && !didJump) {
                    inputProcess();
                    lastFacing = Facing.PosX;
                    StartCoroutine(CheckIfFacingPlayerBlock(Facing.PosX));
                }
                lastFacing = Facing.PosX;
                LoggingManager.instance.RecordEvent(6, "Player took a step with D/Right key.");
            }
            if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow)) {
                bool didRotate = RotateAlpaca(Facing.NegX);
                bool didJump = Jump(Facing.NegX);

                if (!didRotate && !didJump) {
                    inputProcess();
                    lastFacing = Facing.NegX;
                    StartCoroutine(CheckIfFacingPlayerBlock(Facing.NegX));
                }
                lastFacing = Facing.NegX;
                LoggingManager.instance.RecordEvent(6, "Player took a step with A/Left key.");
            }

            if (Input.GetKeyDown(KeyCode.Space) || doubleClickDetected) {
                AttemptPickOrDropPlayerBlock();
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
            if (target.bContinuousMovement){
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