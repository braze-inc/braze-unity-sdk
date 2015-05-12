#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t402;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.AnimationClip
struct AnimationClip_t403;
// MoveAnimation[]
struct MoveAnimationU5BU5D_t408;
// SignalSender
struct SignalSender_t404;
// MoveAnimation
struct MoveAnimation_t407;
// UnityEngine.Animation
struct Animation_t409;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerAnimation
struct PlayerAnimation_t410  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody PlayerAnimation::rigid
	Rigidbody_t402 * ___rigid_2;
	// UnityEngine.Transform PlayerAnimation::rootBone
	Transform_t193 * ___rootBone_3;
	// UnityEngine.Transform PlayerAnimation::upperBodyBone
	Transform_t193 * ___upperBodyBone_4;
	// System.Single PlayerAnimation::maxIdleSpeed
	float ___maxIdleSpeed_5;
	// System.Single PlayerAnimation::minWalkSpeed
	float ___minWalkSpeed_6;
	// UnityEngine.AnimationClip PlayerAnimation::idle
	AnimationClip_t403 * ___idle_7;
	// UnityEngine.AnimationClip PlayerAnimation::turn
	AnimationClip_t403 * ___turn_8;
	// UnityEngine.AnimationClip PlayerAnimation::shootAdditive
	AnimationClip_t403 * ___shootAdditive_9;
	// MoveAnimation[] PlayerAnimation::moveAnimations
	MoveAnimationU5BU5D_t408* ___moveAnimations_10;
	// SignalSender PlayerAnimation::footstepSignals
	SignalSender_t404 * ___footstepSignals_11;
	// UnityEngine.Transform PlayerAnimation::tr
	Transform_t193 * ___tr_12;
	// UnityEngine.Vector3 PlayerAnimation::lastPosition
	Vector3_t202  ___lastPosition_13;
	// UnityEngine.Vector3 PlayerAnimation::velocity
	Vector3_t202  ___velocity_14;
	// UnityEngine.Vector3 PlayerAnimation::localVelocity
	Vector3_t202  ___localVelocity_15;
	// System.Single PlayerAnimation::speed
	float ___speed_16;
	// System.Single PlayerAnimation::angle
	float ___angle_17;
	// System.Single PlayerAnimation::lowerBodyDeltaAngle
	float ___lowerBodyDeltaAngle_18;
	// System.Single PlayerAnimation::idleWeight
	float ___idleWeight_19;
	// UnityEngine.Vector3 PlayerAnimation::lowerBodyForwardTarget
	Vector3_t202  ___lowerBodyForwardTarget_20;
	// UnityEngine.Vector3 PlayerAnimation::lowerBodyForward
	Vector3_t202  ___lowerBodyForward_21;
	// MoveAnimation PlayerAnimation::bestAnimation
	MoveAnimation_t407 * ___bestAnimation_22;
	// System.Single PlayerAnimation::lastFootstepTime
	float ___lastFootstepTime_23;
	// System.Single PlayerAnimation::lastAnimTime
	float ___lastAnimTime_24;
	// UnityEngine.Animation PlayerAnimation::animationComponent
	Animation_t409 * ___animationComponent_25;
};
