using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Anonym.Util
{
    using Isometric;

    public static class TouchUtility
    {
        public enum EventType
        {
            Mouse,
            Touch,
        }

        public static IsoTile GetTile(EventType eventType = EventType.Mouse, Camera cam = null, List<IsoTile> exceptionList = null)
        {
            bool bMouse = eventType == EventType.Mouse && Input.GetMouseButtonDown(0);
            bool bTouch = eventType == EventType.Touch && Input.touchCount > 0;

            if (bMouse || bTouch)
                return GetTile_ScreenPos(cam, bMouse ? (Vector2)Input.mousePosition : Input.touches[0].position, exceptionList);

            return null;
        }

        public static IsoTile GetTile_ScreenPos(Camera cam, Vector2 screenPos, List<IsoTile> exceptionList = null)
        {
            Ray ray = Camera.main.ScreenPointToRay(new Vector3(screenPos.x, screenPos.y, cam.nearClipPlane));
            var results = Physics.RaycastAll(ray, 1000, -1, QueryTriggerInteraction.Ignore);
            if (results != null && results.Length > 0)
            {
                var enumerable = results.Select(r => r.collider.GetComponentInParent<IsoTile>())
                    .Where(t => t != null && (exceptionList == null || !exceptionList.Contains(t)))
                    .Distinct().OrderBy(o => Vector3.Distance(ray.origin, o.transform.position));
                if (enumerable.Count() > 0)
                    return enumerable.First();
            }

            return null;
        }

    }
}
