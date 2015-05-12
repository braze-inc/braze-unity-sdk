#pragma once
#include <stdint.h>
// UnityEngine.AnimationClip
struct AnimationClip_t391;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MoveAnimation
struct MoveAnimation_t395  : public Object_t
{
	// UnityEngine.AnimationClip MoveAnimation::clip
	AnimationClip_t391 * ___clip_0;
	// UnityEngine.Vector3 MoveAnimation::velocity
	Vector3_t188  ___velocity_1;
	// System.Single MoveAnimation::weight
	float ___weight_2;
	// System.Boolean MoveAnimation::currentBest
	bool ___currentBest_3;
	// System.Single MoveAnimation::speed
	float ___speed_4;
	// System.Single MoveAnimation::angle
	float ___angle_5;
};
