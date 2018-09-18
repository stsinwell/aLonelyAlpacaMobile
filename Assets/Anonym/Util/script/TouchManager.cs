using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Anonym.Util
{
    using Isometric;

    public class TouchManager : Singleton<TouchManager>
    {
        [SerializeField]
        TouchUtility.EventType eventType = TouchUtility.EventType.Mouse;

        [SerializeField, Range(0.001f, 0.1f)]
        float fScreenDragSensitivity = 0.01f;

        [SerializeField]
        Camera cam;
        public Camera Cam { get { return cam == null ? Camera.main : cam; } }

        [SerializeField]
        UnityEngine.UI.Toggle toggle;

        [SerializeField]
        bool bAutoStack = true;
        [SerializeField, Tooltip("Only tiles with Y coordinate higher than BaseFloor can be dragged.")]
        int iBaseFloor = 0;

        [SerializeField]
        Gradient selectedGradient = new Gradient();
        [SerializeField]
        Gradient ghostGradient = new Gradient();
        [SerializeField]
        Gradient destinationGradient = new Gradient();

        List<IsoTile> exceptionList = new List<IsoTile>();
        bool bOnScreenDrag = false;

        float fTileHeight = 1f;
        IsoTile fromTile = null;
        IsoTile toTile = null;
        IsoTile ghostTileInstance = null;

        Vector3 lastMousePos = Vector3.zero;

        IsoTile FindTopTile(IsoTile tile)
        {
            if (tile == null || !bAutoStack)
                return tile;

            var result = tile.Bulk.GetTileList_At(tile.coordinates._xyz, Vector3.up, true, true);
            result.Remove(ghostTileInstance);
            return result.Count == 0 ? tile : result.Last();
        }

        #region FromTile
        void FromTile_Select(IsoTile tile)
        {
            if (tile != null && tile.coordinates._xyz.y > iBaseFloor && fromTile != tile)
            {
                toTile = fromTile = tile;
                exceptionList.Add(fromTile);
                GhostTile_Create();
                ColoredObject.Start(fromTile.gameObject, selectedGradient);
                fTileHeight = fromTile.GetBounds_SideOnly().size.y;
            }

            if (fromTile != null && lastMousePos != Input.mousePosition)
            {
                ToTile_Set();
            }
        }
        void FromTile_UnSelectTile()
        {
            bool unSelect = false;
            switch (eventType)
            {
                case TouchUtility.EventType.Mouse:
                    unSelect = Input.GetMouseButtonUp(0);
                    break;
                case TouchUtility.EventType.Touch:
                    unSelect = Input.touchCount == 0;
                    break;
            }

            if (unSelect)
            {
                if (fromTile != null)
                    ColoredObject.End(fromTile.gameObject);

                if (toTile != null && fromTile != toTile)
                    FromTile_Move();

                if (ghostTileInstance != null)
                {
                    Destroy(ghostTileInstance.gameObject);
                    ghostTileInstance = null;
                }

                ToTile_Reset();
                exceptionList.Clear();
                toTile = fromTile = null;
            }
        }
        void FromTile_Move()
        {
            if (fromTile == toTile)
                return;

            if (!bAutoStack)
                ghostTileInstance.DropToFloor(queryTriggerInteraction:QueryTriggerInteraction.Ignore);

            fromTile.coordinates.Move(ghostTileInstance.coordinates._xyz);
        }
        #endregion

        #region GhostTile
        void GhostTile_Create()
        {
            ghostTileInstance = fromTile.Duplicate();
            ghostTileInstance.gameObject.isStatic = false;
            ColoredObject.Start(ghostTileInstance.gameObject, ghostGradient);

            var cols = ghostTileInstance.GetComponentsInChildren<Collider>();
            foreach (var col in cols)
                col.enabled = false;
            GhostTile_Update();
        }
        void GhostTile_Update()
        {
            GhostTile_Toggle(toTile != fromTile);

            Vector3 position = toTile.transform.position;
            if (bAutoStack)
                position.y += fTileHeight;
            else
                position.y = fromTile.transform.position.y;

            if (!bAutoStack)
            {
                var cols = Physics.OverlapSphere(position, 0.1f, -1, QueryTriggerInteraction.Ignore);
                foreach (var col in cols)
                {
                    if (col == null)
                        continue;

                    var isdo2D = col.GetComponentInChildren<Iso2DObject>();
                    if (isdo2D != null && isdo2D.IsSideOfTile)
                        return;
                }
            }

            ghostTileInstance.coordinates.MoveToWorldPosition(position);
        }
        void GhostTile_Toggle(bool bFlag)
        {
            ghostTileInstance.gameObject.SetActive(bFlag);
        }
        #endregion

        #region ToTile
        void ToTile_Set()
        {
            var newTarget = TouchUtility.GetTile_ScreenPos(Cam, Input.mousePosition);
            newTarget = FindTopTile(newTarget);

            if (newTarget != null)
            {
                if (newTarget != toTile)
                {
                    ToTile_Reset();
                    toTile = newTarget;
                    if (newTarget != fromTile)
                        ColoredObject.Start(toTile.gameObject, destinationGradient);
                }
                GhostTile_Update();
            }
        }
        void ToTile_Reset()
        {
            if (toTile != null && toTile != fromTile)
            {
                ColoredObject.End(toTile.gameObject);
                toTile = null;
            }
        }
        #endregion

        public void AutoStackToggle(bool bFlag)
        {
            bAutoStack = bFlag;
        }

        void UpdateCameraDrag()
        {
            // Camera Drag
            if (!bOnScreenDrag)
            {
                bOnScreenDrag = Input.GetMouseButtonDown(1);
                lastMousePos = Input.mousePosition;
            }
            else if (bOnScreenDrag)
            {
                bOnScreenDrag = !Input.GetMouseButtonUp(1);

                var vDiff = lastMousePos;
                lastMousePos = Input.mousePosition;
                vDiff -= lastMousePos;

                Cam.transform.Translate(vDiff * fScreenDragSensitivity);
            }
        }
        private void Update()
        {
            IsoTile _selecedTile = TouchUtility.GetTile(eventType, Cam, exceptionList);
            _selecedTile = FindTopTile(_selecedTile);

            FromTile_Select(_selecedTile);
            FromTile_UnSelectTile();

            UpdateCameraDrag();
        }
        override protected void Awake()
        {
            if (toggle != null)
                toggle.isOn = bAutoStack;
        }
    }
}
