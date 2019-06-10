using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
using UnityEngine.EventSystems;
#endif

namespace Anonym.Isometric
{
    using Util;
    [DisallowMultipleComponent]
    [System.Serializable]
    [ExecuteInEditMode][DefaultExecutionOrder(1)]
    public class GridCoordinates : MonoBehaviour
    {
        #region Grid
        [SerializeField]
        Grid _grid;
        public Grid grid
        {
            get
            {
                if (_grid == null)
                {
                    GridReset();
                }
                return _grid;
            }
        }
        public void GridReset()
        {
            if (GetComponent<IsoTileBulk>() == null)
                _grid = GetComponent<Grid>();

            Transform _parent = transform.parent;
            while (_grid == null && _parent != null)
            {
                _grid = _parent.GetComponent<Grid>();
                _parent = _parent.parent;
            }

            if (_grid == null)
            {
                _grid = IsoMap.instance.gGrid;
            }
        }
        #endregion

        #region Coordinates
        public bool bSnapFree = false;

        Vector3 _lastXYZ;
        public Vector3 _xyz
        {
            get
            {
                return _lastXYZ;
            }
        }//xyz(transform.localPosition);} }

        public void UpdateXYZ()
        {
            _lastXYZ = grid.PositionToCoordinates(transform.localPosition, !bSnapFree);
#if UNITY_EDITOR
            update_LastLocalPosition();
#endif
        }
        public void Translate(Vector3 _coord, string _undoName = "Coordinates:Move")
        {
            Translate(Mathf.RoundToInt(_coord.x), Mathf.RoundToInt(_coord.y), Mathf.RoundToInt(_coord.z), _undoName);
        }

        public void Translate(int _x, int _y, int _z, string _undoName = "Coordinates:Move")
        {
#if UNITY_EDITOR
            Undo.RecordObject(transform, _undoName);
#endif
            gameObject.transform.localPosition +=
                new Vector3(grid.GridInterval.x * _x, grid.GridInterval.y * _y, grid.GridInterval.z * _z);
#if UNITY_EDITOR
            Undo.RecordObject(gameObject, _undoName);
#endif
            UpdateXYZ();
        }

        public void MoveToWorldPosition(Vector3 position)
        {
            gameObject.transform.position = position;
            Apply_SnapToGrid();
        }

        public void Move(Vector3 _coord, string _undoName = "Coordinates:Move")
        {
            Move(Mathf.RoundToInt(_coord.x), Mathf.RoundToInt(_coord.y), Mathf.RoundToInt(_coord.z), _undoName);
        }

        public void Move(float _x, float _y, float _z, string _undoName = "Coordinates:Move")
        {
            Move(Mathf.RoundToInt(_x), Mathf.RoundToInt(_y), Mathf.RoundToInt(_z), _undoName);
        }

        public void Move(int _x, int _y, int _z, string _undoName = "Coordinates:Move")
        {
#if UNITY_EDITOR
            Undo.RecordObject(transform, _undoName);
#endif
            gameObject.transform.localPosition =
                new Vector3(grid.GridInterval.x * _x, grid.GridInterval.y * _y, grid.GridInterval.z * _z);
#if UNITY_EDITOR
            Undo.RecordObject(gameObject, _undoName);
#endif
            UpdateXYZ();
        }

        public void Apply_SnapToGrid()
        {
            if (bSnapFree)
                return;// + grid.Centor;

            UpdateXYZ();
            Vector3 v3Delta = transform.localPosition;

            v3Delta -= Vector3.Scale(_lastXYZ, grid.GridInterval);

            if (v3Delta != Vector3.zero)
            {
#if UNITY_EDITOR
                UnityEditor.Undo.RecordObject(transform, "IsoTile:Move");
#endif
                transform.localPosition -= v3Delta;
#if UNITY_EDITOR
                update_LastLocalPosition();
#endif
            }
        }

        public bool IsSame(Vector3 _ref_coordinates, bool X = true, bool Y = true, bool Z = true)
        {
            return (!X || _ref_coordinates.x.Equals(_lastXYZ.x))
                && (!Y || _ref_coordinates.y.Equals(_lastXYZ.y))
                && (!Z || _ref_coordinates.z.Equals(_lastXYZ.z));
        }
        #endregion

        void _reset()
        {
            _grid = null;
            UpdateXYZ();
        }

        private void OnEnable()
        {
            _reset();
        }

#if UNITY_EDITOR

        [SerializeField]
        AutoNaming _autoName;

        [HideInInspector]
        public AutoNaming autoName
        {
            get
            {
                return _autoName == null ?
                    _autoName = GetComponent<AutoNaming>() : _autoName;
            }
        }

        void OnTransformParentChanged()
        {
            _reset();
        }

        public bool bChangedforEditor = false;
        bool bIgnoreTransformChanged = false;
#endif
        void Start()
        {
            /**
             * Declare this block to the World object
             */
            if(GameObject.FindGameObjectsWithTag("WORLD").Length > 0) {
                WorldScript world = GameObject.FindGameObjectsWithTag("WORLD")[0].GetComponent<WorldScript>();
                world.AddBlock(name, new Vector3(0,0,0), gameObject.transform.position, this);
            }
        }

        void Update()
        {
			if (!Application.isEditor || Application.isPlaying || !enabled)
                // ||  gameObject.transform.root == gameObject.transform)
				return;
#if UNITY_EDITOR
            if (transform.hasChanged)
            {
                if (bIgnoreTransformChanged == true)
                    bIgnoreTransformChanged = false;
                else
                    Update_TransformChanged();
            }
#endif
		}

#if UNITY_EDITOR
        public void Update_TransformChanged()
        {
            Apply_SnapToGrid();
            bChangedforEditor = true;
        }

		
        [HideInInspector]
        Vector3 _lastLocalPosition;
        void update_LastLocalPosition()
        {

            if (_lastLocalPosition != transform.localPosition)
            {
                _lastLocalPosition = transform.localPosition;
                Rename();
            }
        }

        public void Update_Grid(bool _bIgnoreTransformChanged)
        {
            Vector3 _NewPos = Vector3.Scale(grid.GridInterval, _lastXYZ);
			if (_NewPos != Vector3.zero)
			{                
			    UnityEditor.Undo.RecordObject(transform, "IsoTile:Move");
				transform.localPosition = _NewPos;
				update_LastLocalPosition();
                bIgnoreTransformChanged = _bIgnoreTransformChanged;
			}
        }
        
        public void Rename()
		{
			if (autoName != null)
				autoName.AutoName();
		}

        public void Sync(GridCoordinates with)
        {
            bSnapFree = with.bSnapFree;
            _reset();
        }
#endif
    }
}