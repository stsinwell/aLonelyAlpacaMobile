﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

namespace Anonym.Isometric
{
    using Util;
    [RequireComponent(typeof(BoxCollider))]
    [RequireComponent(typeof(Rigidbody))]
    [HelpURL("https://hgstudioone.wixsite.com/isometricbuilder/isometric-sorting-order")]
    public class TallCharacterHelper : MethodBTN_MonoBehaviour
    {
        [Header("[Must Have Field]")]
        [SerializeField]
        BoxCollider boxCollider;

        [SerializeField]
        Rigidbody _rigidbody;

        [SerializeField]
        IsometricMovement _character;

        [SerializeField]
        IsometricSortingOrder iso;

        [SerializeField]
        List<SpriteRenderer> sprrs;

        [Header("[Dynamic List]")]
        [SerializeField]
        List<SpriteMaskAssist> masks;

        [Header("[Offset Factor]")]
        [SerializeField, Range(0, 1)]
        float Offset_X = 0.1f;
        [SerializeField, Range(0, 1)]
        float Offset_Y = 0.1f;
        [SerializeField, Range(0, 1)]
        float Offset_Z = 0.1f;

        [Header("[Size Factor]")]
        [SerializeField, Range(0, 1)]
        float Size_X = 0.8f;
        [SerializeField, Range(0, 1)]
        float Size_Y = 0.8f;
        [SerializeField, Range(0, 1)]
        float Size_Z = 0.8f;

        void findComponents()
        {
            if (boxCollider == null)
                boxCollider = GetComponent<BoxCollider>();

            if (_rigidbody == null)
                _rigidbody = GetComponent<Rigidbody>();

            if (sprrs == null)
                sprrs = new List<SpriteRenderer>();

            if (sprrs.Count == 0)
                sprrs.AddRange(transform.root.GetComponentsInChildren<SpriteRenderer>());

            if (_character == null)
                _character = transform.root.GetComponentInChildren<IsometricMovement>();

            if (iso == null)
                iso = transform.root.GetComponentInChildren<IsometricSortingOrder>();

            if (boxCollider == null || _rigidbody == null || sprrs.Count == 0)
            {
                enabled = false;
                return;
            }

            if (IsoMap.IsNull || !IsoMap.instance.bUseIsometricSorting)
            {
                Debug.Log("TallCharacterHelper is available in Auto ISO Mode!");
                boxCollider.enabled = enabled = false;
                return;
            }

            boxCollider.enabled = enabled = true;
            boxCollider.isTrigger = true;
            _rigidbody.isKinematic = true;
        }

        void updateSize()
        {
            if (_character == null)
                return;

            Bounds _bound = _character.GetBounds();
            Vector3 addSize = IsoMap.instance.gGrid.TileSize;
            addSize.x = addSize.x * Size_X;
            addSize.y = addSize.y * Size_Y;
            addSize.z = addSize.z * Size_Z;

            boxCollider.size = addSize + _bound.size;
            addSize.z = -addSize.z;
            boxCollider.center = _bound.center - _character.transform.position + 0.5f * addSize + 
                Vector3.Scale(_bound.size, new Vector3(Offset_X, Offset_Y, -Offset_Z));
        }

        public void Init()
        {
            findComponents();
            if (!enabled)
                return;

            updateSize();
        }

        private void Awake()
        {
            Init();
        }

        private void OnTriggerEnter(Collider other)
        {
            if (!enabled || sprrs.Count == 0 || (other.isTrigger && other.tag != "NoTrigger"))
                return;

            List<SpriteMaskAssist> maskHelperArray = new List<SpriteMaskAssist>(other.gameObject.GetComponentsInChildren<SpriteMaskAssist>());
            var sprrArray = other.gameObject.GetComponentsInChildren<SpriteRenderer>().Where(r => !sprrs.Contains(r));

            foreach (var _sprr in sprrArray)
            {
                var spriteMaskHelper = maskHelperArray.Find(r => r.IsThis(_sprr));
                if (spriteMaskHelper == null)
                {
                    var child = new GameObject("SpriteMask: " + _sprr.name);
                    child.transform.SetParent(_sprr.transform, false);
                    spriteMaskHelper = child.AddComponent<SpriteMaskAssist>();
                    spriteMaskHelper.Init(_sprr);
                }
                spriteMaskHelper.Regist(sprrs);
                masks.Add(spriteMaskHelper);
                iso.AddUpdateCallBack(spriteMaskHelper);
            }

            sprrs.ForEach(r =>
            {
                if (r.maskInteraction != SpriteMaskInteraction.VisibleOutsideMask)
                    r.maskInteraction = SpriteMaskInteraction.VisibleOutsideMask;
            });
        }

        private void OnTriggerExit(Collider other)
        {
            if (sprrs.Count == 0 || masks.Count == 0)
                return;

            masks.RemoveAll(r => r == null);
            // 여러 콜리더를 가졌을 경우를 고려하자
            var list = other.gameObject.GetComponentsInChildren<SpriteMaskAssist>().Where(r => masks.Contains(r));
            foreach (var one in list)
            {
                if (one.UnRegist(sprrs))
                {
                    masks.Remove(one);
                    iso.RemoveUpdateCallBack(one);
                }
            }
            if (masks.Count == 0)
                sprrs.ForEach(r => r.maskInteraction = SpriteMaskInteraction.None);
        }

        private void Update()
        {
            if (enabled && transform.hasChanged)
            {
                iso.Update_Transform_SortingOrder();
                masks.ForEach(r => r.UpdateSortingOrder());
                transform.hasChanged = false;
            }
        }

#if UNITY_EDITOR
        private void OnValidate()
        {
            if (isActiveAndEnabled)
            {
                Init();
            }
        }

        [MethodBTN(false)]
        void FindFromRoot()
        {
            if (bPrefabCheck())
                return;

            findComponents();
        }

        [MethodBTN(false)]
        void AutoResize()
        {
            if (bPrefabCheck(false))
                return;

            updateSize();
        }

        bool bPrefabCheck(bool bPrintErrorMSG = true)
        {
            if (UnityEditor.PrefabUtility.GetPrefabType(gameObject).Equals(UnityEditor.PrefabType.Prefab))
            {
                if (bPrintErrorMSG)
                    Debug.LogError("Not available when Prefab.");
                return true;
            }
            return false;
        }
#endif
    }
}