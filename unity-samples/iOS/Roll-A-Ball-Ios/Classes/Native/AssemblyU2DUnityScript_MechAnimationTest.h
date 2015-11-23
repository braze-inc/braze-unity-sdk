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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MechAnimationTest
struct  MechAnimationTest_t362  : public MonoBehaviour_t2
{
	// System.Single MechAnimationTest::turning
	float ___turning_2;
	// System.Single MechAnimationTest::walking
	float ___walking_3;
	// System.Single MechAnimationTest::turnOffset
	float ___turnOffset_4;
	// UnityEngine.Rigidbody MechAnimationTest::rigid
	Rigidbody_t359 * ___rigid_5;
	// UnityEngine.AnimationClip MechAnimationTest::idle
	AnimationClip_t360 * ___idle_6;
	// UnityEngine.AnimationClip MechAnimationTest::walk
	AnimationClip_t360 * ___walk_7;
	// UnityEngine.AnimationClip MechAnimationTest::turnLeft
	AnimationClip_t360 * ___turnLeft_8;
	// UnityEngine.AnimationClip MechAnimationTest::turnRight
	AnimationClip_t360 * ___turnRight_9;
	// SignalSender MechAnimationTest::footstepSignals
	SignalSender_t361 * ___footstepSignals_10;
};
