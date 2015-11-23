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
// UnityEngine.Transform
struct Transform_t258;
// UnityEngine.AnimationClip
struct AnimationClip_t360;
// MoveAnimation[]
struct MoveAnimationU5BU5D_t365;
// SignalSender
struct SignalSender_t361;
// MoveAnimation
struct MoveAnimation_t363;
// UnityEngine.Animation
struct Animation_t366;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PlayerAnimation
struct  PlayerAnimation_t364  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody PlayerAnimation::rigid
	Rigidbody_t359 * ___rigid_2;
	// UnityEngine.Transform PlayerAnimation::rootBone
	Transform_t258 * ___rootBone_3;
	// UnityEngine.Transform PlayerAnimation::upperBodyBone
	Transform_t258 * ___upperBodyBone_4;
	// System.Single PlayerAnimation::maxIdleSpeed
	float ___maxIdleSpeed_5;
	// System.Single PlayerAnimation::minWalkSpeed
	float ___minWalkSpeed_6;
	// UnityEngine.AnimationClip PlayerAnimation::idle
	AnimationClip_t360 * ___idle_7;
	// UnityEngine.AnimationClip PlayerAnimation::turn
	AnimationClip_t360 * ___turn_8;
	// UnityEngine.AnimationClip PlayerAnimation::shootAdditive
	AnimationClip_t360 * ___shootAdditive_9;
	// MoveAnimation[] PlayerAnimation::moveAnimations
	MoveAnimationU5BU5D_t365* ___moveAnimations_10;
	// SignalSender PlayerAnimation::footstepSignals
	SignalSender_t361 * ___footstepSignals_11;
	// UnityEngine.Transform PlayerAnimation::tr
	Transform_t258 * ___tr_12;
	// UnityEngine.Vector3 PlayerAnimation::lastPosition
	Vector3_t259  ___lastPosition_13;
	// UnityEngine.Vector3 PlayerAnimation::velocity
	Vector3_t259  ___velocity_14;
	// UnityEngine.Vector3 PlayerAnimation::localVelocity
	Vector3_t259  ___localVelocity_15;
	// System.Single PlayerAnimation::speed
	float ___speed_16;
	// System.Single PlayerAnimation::angle
	float ___angle_17;
	// System.Single PlayerAnimation::lowerBodyDeltaAngle
	float ___lowerBodyDeltaAngle_18;
	// System.Single PlayerAnimation::idleWeight
	float ___idleWeight_19;
	// UnityEngine.Vector3 PlayerAnimation::lowerBodyForwardTarget
	Vector3_t259  ___lowerBodyForwardTarget_20;
	// UnityEngine.Vector3 PlayerAnimation::lowerBodyForward
	Vector3_t259  ___lowerBodyForward_21;
	// MoveAnimation PlayerAnimation::bestAnimation
	MoveAnimation_t363 * ___bestAnimation_22;
	// System.Single PlayerAnimation::lastFootstepTime
	float ___lastFootstepTime_23;
	// System.Single PlayerAnimation::lastAnimTime
	float ___lastAnimTime_24;
	// UnityEngine.Animation PlayerAnimation::animationComponent
	Animation_t366 * ___animationComponent_25;
};
