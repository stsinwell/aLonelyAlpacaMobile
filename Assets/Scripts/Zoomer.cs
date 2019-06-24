using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zoomer : MonoBehaviour {
	/* The scene camera. */
	public Camera cam; 
	/* The size of a full-zoomed camera. */
	private float ZOOM_AMNT_FULL;
	/* The size of a zoomed camera at half-zoom. */
	private float ZOOM_AMNT_HALF;
	/* The size of a zoomed camera at no-zoom. */
	private float ZOOM_AMNT_NONE;
	/* The increase to the camera size that produces half-zoom. */
	public float zAmount_half;
	/* The increase to the camera size that produces no-zoom. */
	public float zAmount_none;
	/* How close the camera gets to the zoomed/non-zoomed thresholds. */
	private const float ZOOM_CLOSENESS = 0.0005f;
	/* The speed of the camera zoom. */
	private float ZOOM_SPEED = 0.5f;

	/* The background, which needs to get scaled. */
	public GameObject background;
	public GameObject background2;
	private float origBgScaleX;
	private float origBgScaleY;

	public float bgScaleAmnt;
	public float timer = 0;

	/* The current state of the zooming. */
	private enum ZoomState {
		ZOOMING_OUT_F_H, // full-zoom to half-zoom
		ZOOMING_OUT_H_N, // half-zoom to no-zoom
		ZOOMING_IN_N_F, // no-zoom to full-zoom
		ZOOMED_FULL,
		ZOOMED_HALF,
		ZOOMED_NONE
	};
	private ZoomState zState;
	private float lerp_timer;

	void Start () {
		ZOOM_AMNT_FULL = cam.orthographicSize;
		ZOOM_AMNT_HALF = cam.orthographicSize + zAmount_half;
		ZOOM_AMNT_NONE = cam.orthographicSize + zAmount_none;
		zState = ZoomState.ZOOMED_FULL;
		lerp_timer = 0;
	}

	/* Player toggled camera, update the state. */
	public void toggleZoom() {
		lerp_timer = 0;
		switch(zState) {
			case ZoomState.ZOOMING_OUT_F_H:
				zState = ZoomState.ZOOMING_OUT_H_N;
				break;
			case ZoomState.ZOOMING_OUT_H_N:
				zState = ZoomState.ZOOMING_IN_N_F;
				break;
			case ZoomState.ZOOMING_IN_N_F:
				zState = ZoomState.ZOOMING_OUT_F_H;
				break;
			case ZoomState.ZOOMED_FULL:
				zState = ZoomState.ZOOMING_OUT_F_H;
				break;
			case ZoomState.ZOOMED_HALF:
				zState = ZoomState.ZOOMING_OUT_H_N;
				break;
			case ZoomState.ZOOMED_NONE:
				zState = ZoomState.ZOOMING_IN_N_F;
				break;
		}
	}

	/* Lerp the camera from [start] to [end]. */
	void moveCam(float start, float end) {
		cam.orthographicSize = Mathf.Lerp(start, end, lerp_timer);
		float scaleProp = 1 / cam.orthographicSize;
		background.GetComponent<ScaleBackground>().Scale2(scaleProp);
		background2.GetComponent<ScaleBackground>().Scale2(scaleProp);
	}

	/* The camera is close enough to its destination, so we can
	 * stop moving it. (It's within [ZOOM_CLOSENESS] of [end]). */
	bool camMoveDone(float start, float end) {
		return (Mathf.Abs(end - start) <= ZOOM_CLOSENESS);
	}

	/* Update the camera position and zoom state. */
	void resolveZoom() {
		switch(zState) {
			case ZoomState.ZOOMING_OUT_F_H:
				lerp_timer += ZOOM_SPEED * Time.deltaTime;
				moveCam(cam.orthographicSize, ZOOM_AMNT_HALF);
				if (camMoveDone(cam.orthographicSize, ZOOM_AMNT_HALF)) {
					zState = ZoomState.ZOOMED_HALF;
				}
				break;
			case ZoomState.ZOOMING_OUT_H_N:
				lerp_timer += ZOOM_SPEED * Time.deltaTime;
				moveCam(cam.orthographicSize, ZOOM_AMNT_NONE);
				if (camMoveDone(cam.orthographicSize, ZOOM_AMNT_NONE)) {
					zState = ZoomState.ZOOMED_NONE;
				}
				break;
			case ZoomState.ZOOMING_IN_N_F:
				lerp_timer += ZOOM_SPEED * Time.deltaTime;
				moveCam(cam.orthographicSize, ZOOM_AMNT_FULL);
				if (camMoveDone(cam.orthographicSize, ZOOM_AMNT_FULL)) {
					zState = ZoomState.ZOOMED_FULL;
				}
				break;	
			case ZoomState.ZOOMED_FULL:
				lerp_timer = 0;
				break;
			case ZoomState.ZOOMED_HALF:
				lerp_timer = 0;
				break;
			case ZoomState.ZOOMED_NONE:
				lerp_timer = 0;
				break;
		};
	}

	void Update() {
		resolveZoom();
	}
}
