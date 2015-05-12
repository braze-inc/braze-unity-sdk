#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.AudioClip
struct AudioClip_t371;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AI
struct AI_t372  : public MonoBehaviour_t2
{
	// UnityEngine.MonoBehaviour AI::behaviourOnSpotted
	MonoBehaviour_t2 * ___behaviourOnSpotted_2;
	// UnityEngine.AudioClip AI::soundOnSpotted
	AudioClip_t371 * ___soundOnSpotted_3;
	// UnityEngine.MonoBehaviour AI::behaviourOnLostTrack
	MonoBehaviour_t2 * ___behaviourOnLostTrack_4;
	// UnityEngine.Transform AI::character
	Transform_t179 * ___character_5;
	// UnityEngine.Transform AI::player
	Transform_t179 * ___player_6;
	// System.Boolean AI::insideInterestArea
	bool ___insideInterestArea_7;
};
