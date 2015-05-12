#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t402;
// UnityEngine.AnimationClip
struct AnimationClip_t403;
// SignalSender
struct SignalSender_t404;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MechAnimation
struct MechAnimation_t405  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody MechAnimation::rigid
	Rigidbody_t402 * ___rigid_2;
	// UnityEngine.AnimationClip MechAnimation::idle
	AnimationClip_t403 * ___idle_3;
	// UnityEngine.AnimationClip MechAnimation::walk
	AnimationClip_t403 * ___walk_4;
	// UnityEngine.AnimationClip MechAnimation::turnLeft
	AnimationClip_t403 * ___turnLeft_5;
	// UnityEngine.AnimationClip MechAnimation::turnRight
	AnimationClip_t403 * ___turnRight_6;
	// SignalSender MechAnimation::footstepSignals
	SignalSender_t404 * ___footstepSignals_7;
	// UnityEngine.Transform MechAnimation::tr
	Transform_t193 * ___tr_8;
	// System.Single MechAnimation::lastFootstepTime
	float ___lastFootstepTime_9;
	// System.Single MechAnimation::lastAnimTime
	float ___lastAnimTime_10;
};
