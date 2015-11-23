#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t359;
// UnityEngine.AnimationClip
struct AnimationClip_t360;
// SignalSender
struct SignalSender_t361;
// UnityEngine.Transform
struct Transform_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MechAnimation
struct  MechAnimation_t358  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody MechAnimation::rigid
	Rigidbody_t359 * ___rigid_2;
	// UnityEngine.AnimationClip MechAnimation::idle
	AnimationClip_t360 * ___idle_3;
	// UnityEngine.AnimationClip MechAnimation::walk
	AnimationClip_t360 * ___walk_4;
	// UnityEngine.AnimationClip MechAnimation::turnLeft
	AnimationClip_t360 * ___turnLeft_5;
	// UnityEngine.AnimationClip MechAnimation::turnRight
	AnimationClip_t360 * ___turnRight_6;
	// SignalSender MechAnimation::footstepSignals
	SignalSender_t361 * ___footstepSignals_7;
	// UnityEngine.Transform MechAnimation::tr
	Transform_t258 * ___tr_8;
	// System.Single MechAnimation::lastFootstepTime
	float ___lastFootstepTime_9;
	// System.Single MechAnimation::lastAnimTime
	float ___lastAnimTime_10;
};
