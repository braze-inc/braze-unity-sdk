#pragma once
#include <stdint.h>
// MovementMotor
struct MovementMotor_t377;
// UnityEngine.AnimationClip
struct AnimationClip_t391;
// UnityEngine.AudioSource
struct AudioSource_t378;
// SignalSender
struct SignalSender_t392;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpiderAnimation
struct SpiderAnimation_t399  : public MonoBehaviour_t2
{
	// MovementMotor SpiderAnimation::motor
	MovementMotor_t377 * ___motor_2;
	// UnityEngine.AnimationClip SpiderAnimation::activateAnim
	AnimationClip_t391 * ___activateAnim_3;
	// UnityEngine.AnimationClip SpiderAnimation::forwardAnim
	AnimationClip_t391 * ___forwardAnim_4;
	// UnityEngine.AnimationClip SpiderAnimation::backAnim
	AnimationClip_t391 * ___backAnim_5;
	// UnityEngine.AnimationClip SpiderAnimation::leftAnim
	AnimationClip_t391 * ___leftAnim_6;
	// UnityEngine.AnimationClip SpiderAnimation::rightAnim
	AnimationClip_t391 * ___rightAnim_7;
	// UnityEngine.AudioSource SpiderAnimation::audioSource
	AudioSource_t378 * ___audioSource_8;
	// SignalSender SpiderAnimation::footstepSignals
	SignalSender_t392 * ___footstepSignals_9;
	// System.Boolean SpiderAnimation::skiddingSounds
	bool ___skiddingSounds_10;
	// System.Boolean SpiderAnimation::footstepSounds
	bool ___footstepSounds_11;
	// UnityEngine.Transform SpiderAnimation::tr
	Transform_t179 * ___tr_12;
	// System.Single SpiderAnimation::lastFootstepTime
	float ___lastFootstepTime_13;
	// System.Single SpiderAnimation::lastAnimTime
	float ___lastAnimTime_14;
};
