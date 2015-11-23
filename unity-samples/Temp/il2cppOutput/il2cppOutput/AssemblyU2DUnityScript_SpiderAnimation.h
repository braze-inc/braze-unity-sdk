#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MovementMotor
struct MovementMotor_t347;
// UnityEngine.AnimationClip
struct AnimationClip_t360;
// UnityEngine.AudioSource
struct AudioSource_t348;
// SignalSender
struct SignalSender_t361;
// UnityEngine.Transform
struct Transform_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SpiderAnimation
struct  SpiderAnimation_t367  : public MonoBehaviour_t2
{
	// MovementMotor SpiderAnimation::motor
	MovementMotor_t347 * ___motor_2;
	// UnityEngine.AnimationClip SpiderAnimation::activateAnim
	AnimationClip_t360 * ___activateAnim_3;
	// UnityEngine.AnimationClip SpiderAnimation::forwardAnim
	AnimationClip_t360 * ___forwardAnim_4;
	// UnityEngine.AnimationClip SpiderAnimation::backAnim
	AnimationClip_t360 * ___backAnim_5;
	// UnityEngine.AnimationClip SpiderAnimation::leftAnim
	AnimationClip_t360 * ___leftAnim_6;
	// UnityEngine.AnimationClip SpiderAnimation::rightAnim
	AnimationClip_t360 * ___rightAnim_7;
	// UnityEngine.AudioSource SpiderAnimation::audioSource
	AudioSource_t348 * ___audioSource_8;
	// SignalSender SpiderAnimation::footstepSignals
	SignalSender_t361 * ___footstepSignals_9;
	// System.Boolean SpiderAnimation::skiddingSounds
	bool ___skiddingSounds_10;
	// System.Boolean SpiderAnimation::footstepSounds
	bool ___footstepSounds_11;
	// UnityEngine.Transform SpiderAnimation::tr
	Transform_t258 * ___tr_12;
	// System.Single SpiderAnimation::lastFootstepTime
	float ___lastFootstepTime_13;
	// System.Single SpiderAnimation::lastAnimTime
	float ___lastAnimTime_14;
};
