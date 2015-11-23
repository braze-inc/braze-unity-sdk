#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.AudioClip
struct AudioClip_t342;
// UnityEngine.Transform
struct Transform_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AI
struct  AI_t341  : public MonoBehaviour_t2
{
	// UnityEngine.MonoBehaviour AI::behaviourOnSpotted
	MonoBehaviour_t2 * ___behaviourOnSpotted_2;
	// UnityEngine.AudioClip AI::soundOnSpotted
	AudioClip_t342 * ___soundOnSpotted_3;
	// UnityEngine.MonoBehaviour AI::behaviourOnLostTrack
	MonoBehaviour_t2 * ___behaviourOnLostTrack_4;
	// UnityEngine.Transform AI::character
	Transform_t258 * ___character_5;
	// UnityEngine.Transform AI::player
	Transform_t258 * ___player_6;
	// System.Boolean AI::insideInterestArea
	bool ___insideInterestArea_7;
};
