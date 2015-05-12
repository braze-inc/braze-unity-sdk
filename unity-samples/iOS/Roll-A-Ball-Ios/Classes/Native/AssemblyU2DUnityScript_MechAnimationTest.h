#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t390;
// UnityEngine.AnimationClip
struct AnimationClip_t391;
// SignalSender
struct SignalSender_t392;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MechAnimationTest
struct MechAnimationTest_t394  : public MonoBehaviour_t2
{
	// System.Single MechAnimationTest::turning
	float ___turning_2;
	// System.Single MechAnimationTest::walking
	float ___walking_3;
	// System.Single MechAnimationTest::turnOffset
	float ___turnOffset_4;
	// UnityEngine.Rigidbody MechAnimationTest::rigid
	Rigidbody_t390 * ___rigid_5;
	// UnityEngine.AnimationClip MechAnimationTest::idle
	AnimationClip_t391 * ___idle_6;
	// UnityEngine.AnimationClip MechAnimationTest::walk
	AnimationClip_t391 * ___walk_7;
	// UnityEngine.AnimationClip MechAnimationTest::turnLeft
	AnimationClip_t391 * ___turnLeft_8;
	// UnityEngine.AnimationClip MechAnimationTest::turnRight
	AnimationClip_t391 * ___turnRight_9;
	// SignalSender MechAnimationTest::footstepSignals
	SignalSender_t392 * ___footstepSignals_10;
};
