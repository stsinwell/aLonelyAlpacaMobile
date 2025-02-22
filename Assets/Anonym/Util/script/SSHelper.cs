﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

namespace Anonym.Util
{
    [DisallowMultipleComponent]
    [ExecuteInEditMode]
    public class SSHelper : MethodBTN_MonoBehaviour
    {
#if UNITY_EDITOR
        [SerializeField]
        Camera cam;

        [MethodBTN(false)]
        void UseSceneviewCamera()
        {
            Camera[] cams = UnityEditor.SceneView.GetAllSceneCameras();
            if (cams.Length > 0)
                cam = cams[0];
        }

        [SerializeField]
        List <GameObject> models;

        const string MSG_DefaultPath = "Assets/SSHelper";
        const string MSG_fileEX = ".png";

        [SerializeField]
        string _savePath;

        bool bExtentionPath
        {
            get
            {
                return string.IsNullOrEmpty(_savePath) ? false : _savePath.IndexOf(MSG_fileEX) > 0;
            }
        }
        string savePathEX
        {
            get
            {
                return bExtentionPath ? _savePath : _savePath + MSG_fileEX;
            }
        }

        [MethodBTN(false)]
        public void Screenshot()
        {
            _savePath = Screenshot(cam, models, savePathEX);
        }

        public static string Screenshot(Camera cam, List<GameObject> models, string path)
        {
            if (cam == null)
            {
                Debug.Log("Camera Field is required.");
                return path;
            }

            Rect rt_origin = cam.rect;

#if UNITY_2017_3_OR_NEWER
            int resWidth = cam.scaledPixelWidth;
            int resHeight = cam.scaledPixelHeight;
#else
            int resWidth = Mathf.RoundToInt(cam.pixelRect.width);
            int resHeight = Mathf.RoundToInt(cam.pixelRect.height);
#endif
            RenderTexture rt = new RenderTexture(resWidth, resHeight, 32);
            Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.ARGB32, false);

            cam.targetTexture = rt;
            cam.rect = new Rect(0, 0, 1, 1);

            var extraList = Extra_ToggleOff(models);
            cam.Render();
            Extra_ToggleOn(extraList);

            RenderTexture.active = rt;
            screenShot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
            screenShot.Apply();

            cam.targetTexture = null;
            cam.rect = rt_origin;
            RenderTexture.active = null;

            System.IO.File.WriteAllBytes(path, screenShot.EncodeToPNG());
            UnityEditor.AssetDatabase.ImportAsset(path);
            Debug.Log("Saved: " + path);

            path  = NextFileName(path);

            GameObject.DestroyImmediate(rt);
            GameObject.DestroyImmediate(screenShot);

            return path;
        }

        static List<GameObject> Extra_ToggleOff(List<GameObject> models)
        {
            List<GameObject> backupedList = new List<GameObject>();
            if (models != null && models.Any(r => r.activeSelf))
            {
                GameObject[] allGameObjects = GameObject.FindObjectsOfType<GameObject>();
                backupedList.AddRange(allGameObjects.Where(r => r.activeSelf && r.transform == r.transform.root));
                models.RemoveAll(r => r == null);
                backupedList.RemoveAll(r => models.Any(rr => rr.transform.IsChildOf(r.transform)));
                backupedList.ForEach(r => r.SetActive(false));
            }
            return backupedList;
        }

        static void Extra_ToggleOn(List<GameObject> backupedList)
        {
            if (backupedList.Count > 0)
            {
                backupedList.ForEach(r => r.SetActive(true));
            }
        }

        static string NextFileName(string path)
        {
            return UnityEditor.AssetDatabase.GenerateUniqueAssetPath(path);
        }

        void OnEnable()
        {
            if (string.IsNullOrEmpty(_savePath))
                _savePath = MSG_DefaultPath;

            _savePath  = NextFileName(_savePath);

            if (cam == null)
                UseSceneviewCamera();
        }
#endif
    }
}