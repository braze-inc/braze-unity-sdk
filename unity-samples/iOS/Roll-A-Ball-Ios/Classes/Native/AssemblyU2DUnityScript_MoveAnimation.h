#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t360;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MoveAnimation
struct  MoveAnimation_t363  : public Object_t
{
	// UnityEngine.AnimationClip MoveAnimation::clip
	AnimationClip_t360 * ___clip_0;
	// UnityEngine.Vector3 MoveAnimation::velocity
	Vector3_t259  ___velocity_1;
	// System.Single MoveAnimation::weight
	float ___weight_2;
	// System.Boolean MoveAnimation::currentBest
	bool ___currentBest_3;
	// System.Single MoveAnimation::speed
	float ___speed_4;
	// System.Single MoveAnimation::angle
	float ___angle_5;
};
