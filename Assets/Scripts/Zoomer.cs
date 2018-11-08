using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zoomer : MonoBehaviour {
	/* The scene camera. */
	public Camera cam; 

	/* The size of a non-zoomed camera. */
	private float NO_ZOOM_AMNT;
	/* The size of a zoomed-camera. */
	private float ZOOM_AMNT;
	/* How close the camera gets to the zoomed/non-zoomed thresholds. */

	public float zAmount;
	private float ZOOM_CLOSENESS = 0.0005f;
	/* The speed of the camera zoom. */
	private float ZOOM_SPEED = 0.5f;


	/* The current state of the zooming. */
	private enum ZoomState {
		ZOOMING_OUT,
		ZOOMING_IN,
		ZOOMED_IN,
		ZOOMED_OUT
	};
	private ZoomState zState;
	private float lerp_timer;

	void Start () {
		NO_ZOOM_AMNT = cam.orthographicSize;
		ZOOM_AMNT = cam.orthographicSize + zAmount;
		zState = ZoomState.ZOOMED_IN;
		lerp_timer = 0;
	}

	/* Player toggled camera, update the state. */
	void playerUpdateZState() {
		lerp_timer = 0;
		switch(zState) {
			case ZoomState.ZOOMING_IN:
				zState = ZoomState.ZOOMING_OUT;
				break;
			case ZoomState.ZOOMING_OUT:
				zState = ZoomState.ZOOMING_IN;
				break;
			case ZoomState.ZOOMED_OUT:
				zState = ZoomState.ZOOMING_IN;
				break;
			case ZoomState.ZOOMED_IN:
				zState = ZoomState.ZOOMING_OUT;
				break;
		}
	}

	/* Lerp the camera from [start] to [end]. */
	void moveCam(float start, float end) {
		cam.orthographicSize = Mathf.Lerp(start, end, lerp_timer);
	}

	/* The camera is close enough to its destination, so we can
	 * stop moving it. (It's within [ZOOM_CLOSENESS] of [end]). */
	bool camMoveDone(float start, float end) {
		return (Mathf.Abs(end - start) <= ZOOM_CLOSENESS);
	}

	/* Update the camera position and zoom state. */
	void resolveZoom() {
		switch(zState) {
			case ZoomState.ZOOMING_OUT:
				lerp_timer += ZOOM_SPEED * Time.deltaTime;
				moveCam(cam.orthographicSize, ZOOM_AMNT);
				if (camMoveDone(cam.orthographicSize, ZOOM_AMNT)) {
					zState = ZoomState.ZOOMED_OUT;
				}
				break;
			case ZoomState.ZOOMING_IN:
				lerp_timer += ZOOM_SPEED * Time.deltaTime;
				moveCam(cam.orthographicSize, NO_ZOOM_AMNT);
				if (camMoveDone(NO_ZOOM_AMNT, cam.orthographicSize)) {
					zState = ZoomState.ZOOMED_IN;
				}
				break;
			case ZoomState.ZOOMED_OUT:
			case ZoomState.ZOOMED_IN:
				lerp_timer = 0;
				break;
		};
	}
	
	void Update() {
		if (Input.GetKeyDown(KeyCode.Z)) {
			playerUpdateZState();
		}
		resolveZoom();
	}
}
