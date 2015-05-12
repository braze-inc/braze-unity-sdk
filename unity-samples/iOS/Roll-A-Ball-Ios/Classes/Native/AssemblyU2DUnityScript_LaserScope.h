#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.LineRenderer
struct LineRenderer_t407;
// PerFrameRaycast
struct PerFrameRaycast_t408;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LaserScope
struct LaserScope_t404  : public MonoBehaviour_t2
{
	// System.Single LaserScope::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single LaserScope::pulseSpeed
	float ___pulseSpeed_3;
	// System.Single LaserScope::noiseSize
	float ___noiseSize_4;
	// System.Single LaserScope::maxWidth
	float ___maxWidth_5;
	// System.Single LaserScope::minWidth
	float ___minWidth_6;
	// UnityEngine.GameObject LaserScope::pointer
	GameObject_t140 * ___pointer_7;
	// UnityEngine.LineRenderer LaserScope::lRenderer
	LineRenderer_t407 * ___lRenderer_8;
	// System.Single LaserScope::aniTime
	float ___aniTime_9;
	// System.Single LaserScope::aniDir
	float ___aniDir_10;
	// PerFrameRaycast LaserScope::raycast
	PerFrameRaycast_t408 * ___raycast_11;
};
