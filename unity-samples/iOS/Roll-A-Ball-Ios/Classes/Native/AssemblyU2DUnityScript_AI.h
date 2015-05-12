#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.AudioClip
struct AudioClip_t383;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AI
struct AI_t384  : public MonoBehaviour_t2
{
	// UnityEngine.MonoBehaviour AI::behaviourOnSpotted
	MonoBehaviour_t2 * ___behaviourOnSpotted_2;
	// UnityEngine.AudioClip AI::soundOnSpotted
	AudioClip_t383 * ___soundOnSpotted_3;
	// UnityEngine.MonoBehaviour AI::behaviourOnLostTrack
	MonoBehaviour_t2 * ___behaviourOnLostTrack_4;
	// UnityEngine.Transform AI::character
	Transform_t193 * ___character_5;
	// UnityEngine.Transform AI::player
	Transform_t193 * ___player_6;
	// System.Boolean AI::insideInterestArea
	bool ___insideInterestArea_7;
};
