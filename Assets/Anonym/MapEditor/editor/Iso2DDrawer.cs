﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Linq;
using System;
using System.Reflection;

namespace Anonym.Isometric
{
    using Util;
    [CustomPropertyDrawer(typeof(Iso2DObject))]
    public class Iso2DDrawer : PropertyDrawer
    {
        const int cellSize = 44;
        const int fudgeWidth = 195;
        const int border = 2;

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            return RectHeight;
        }
        public static int RectHeight{   get {   return cellSize + border * 2;   }  }
        public static Rect GetRect()
        {            
            Rect rt = EditorGUILayout.GetControlRect(
                        new GUILayoutOption[] { GUILayout.Height(RectHeight), GUILayout.ExpandWidth(true) });
            return EditorGUI.IndentedRect(rt);
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            if (Event.current.type == EventType.ScrollWheel)
                return;
                
            SerializedProperty sp = property.serializedObject.FindProperty(property.propertyPath);
            if (sp != property)
                sp = property;
            if (sp.objectReferenceValue == null)
                return;

            GameObject _target = ((Component) sp.objectReferenceValue).gameObject;
            SpriteRenderer sprr = _target.GetComponent<SpriteRenderer>();

            if (sprr == null)
            {
                GUILayout.Label("Empty Bulk", EditorStyles.objectFieldThumb);
                return;
            }

            Rect rect = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), new GUIContent(""));
            Drawer(rect, _target);
        }

        public static void Drawer(Rect rect, GameObject _target)
        {
            IsoTile _thisTile = _target.GetComponent<IsoTile>();
            Iso2DObject _iso2D = _target.GetComponent<Iso2DObject>();
            SpriteRenderer sprr = _target.GetComponent<SpriteRenderer>();
            Color borderColor = Util.CustomEditorGUI.Color_Tile;

            if (_thisTile == null && _iso2D != null)
                borderColor = CustomEditorGUI.Iso2DTypeColor(_iso2D._Type);

            Rect rect_inside = new Rect(rect.xMin + border, rect.yMin + border, rect.width - border * 2, rect.height - border * 2);

            Rect rect_preview = new Rect(rect_inside.xMin, rect_inside.yMin, cellSize, rect_inside.height);
            Rect rect_info_name =
                new Rect(rect_preview.xMax, rect_inside.yMin,
                    rect_inside.width - cellSize - fudgeWidth, rect_inside.height * 0.5f);
            Rect rect_Fudge =
                new Rect(rect_info_name.xMax, rect_inside.yMin,
                    fudgeWidth, rect_inside.height * 0.5f - border);
            Rect rect_info_Sub =
                new Rect(rect_info_name.xMin, rect_info_name.yMin + cellSize * 0.5f,
                    rect_info_name.width, rect_inside.height - rect_info_name.height);
            Rect[] rect_btns = new Rect[]
            {
                new Rect(rect_inside.xMax - cellSize * 1.1f, rect_info_Sub.yMin, cellSize, rect_info_Sub.height),
                new Rect(rect_inside.xMax - cellSize * 2.2f, rect_info_Sub.yMin, cellSize, rect_info_Sub.height),
                new Rect(rect_inside.xMax - cellSize * 3.3f, rect_info_Sub.yMin, cellSize, rect_info_Sub.height),
                new Rect(rect_inside.xMax - cellSize * 4.4f, rect_info_Sub.yMin, cellSize, rect_info_Sub.height)
            };

            bool bControllerable = (_thisTile == null || _thisTile.gameObject != _target.gameObject)
                || (Selection.activeGameObject != null && Selection.activeGameObject.GetComponent<IsoTileBulk>());

            CustomEditorGUI.DrawBordereddRect(rect, borderColor, rect_inside, Color.clear);
            CustomEditorGUI.DrawSideSprite(rect_preview, _iso2D, false, false);

            int iLv = EditorGUI.indentLevel;
            EditorGUI.indentLevel = 0;
            EditorGUI.LabelField(rect_info_name, _target.name, EditorStyles.boldLabel);

            if (!IsoMap.instance.bUseIsometricSorting)
            {
                var IIsoBasis = _iso2D.GetComponentInParent<IISOBasis>();
                var isOnGroundObject = false;
                if (IIsoBasis != null)
                    isOnGroundObject = IIsoBasis.IsOnGroundObject();
                else
                    isOnGroundObject = _iso2D.IsColliderAttachment;
                float fOnGroundOffset = IsoMap.fCurrentOnGroundOffset;
                string msg = isOnGroundObject ? string.Format("Depth({0:0.00})", -fOnGroundOffset) : "Depth";
                float _fTmp = CustomEditorGUI.FloatSlider(rect_Fudge, msg, _iso2D.FDepthFudge, -1f, 1f);
                if (_fTmp != _iso2D.FDepthFudge)
                {
                    _iso2D.Undo_NewDepthFudge(_fTmp);
                }
            }
            // 서브 인포 출력
            //using (new EditorGUILayout.HorizontalScope())
            {
                float _fMinSize = Mathf.Min(rect_info_Sub.width, rect_info_Sub.height);
                SpriteRenderer[] _sprrList = _target.GetComponentsInChildren<SpriteRenderer>();

                for (int i = 0; i < _sprrList.Length; ++i)
                {
                    if (_sprrList[i].sprite != null && _sprrList[i] != sprr)
                    {
                        Rect _rt = EditorGUI.IndentedRect(rect_info_Sub);
                        _rt.width = _rt.height = _fMinSize;
                        rect_info_Sub.xMin += _fMinSize;
                        // CustomEditorGUI.DrawSideSprite(_rt, _sprrList[i].sprite, ._Type);
                        Util.CustomEditorGUI.DrawSprite(_rt, _sprrList[i].sprite, _sprrList[i].color, true, true);
                    }
                }
            }
            if (bControllerable)
            {
                int buttonIndex = 0;
                CustomEditorGUI.Button(rect_btns[buttonIndex++], true, CustomEditorGUI.Color_LightYellow, "Ping!",
                    () => { EditorGUIUtility.PingObject(_target.gameObject); });

                CustomEditorGUI.Button(rect_btns[buttonIndex++], true, CustomEditorGUI.Color_LightGreen, "Iso2D", 
                    () => { Selection.activeGameObject = _target.gameObject; });

                var ctlr = _target.transform.parent.GetComponentInParent<SubColliderHelper>();
                if (Selection.activeGameObject != ctlr.gameObject)
                {
                    CustomEditorGUI.Button(rect_btns[buttonIndex++], true, CustomEditorGUI.Color_LightGreen, "Ctlr!",
                        () => { Selection.activeGameObject = ctlr.gameObject; });

                }

                CustomEditorGUI.Button(rect_btns[buttonIndex++].ReSize(2f, 2f), true, CustomEditorGUI.Color_LightYellow, "Del!!",
                    () => { _iso2D.DestoryGameObject(true, true); });
            }
            EditorGUI.indentLevel = iLv;
        }
    }
}

