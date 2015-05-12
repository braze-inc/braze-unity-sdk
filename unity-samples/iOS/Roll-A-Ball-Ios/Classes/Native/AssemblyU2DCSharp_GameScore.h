#pragma once
#include <stdint.h>
// GameScore
struct GameScore_t213;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t56;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameScore
struct GameScore_t213  : public MonoBehaviour_t2
{
	// System.String GameScore::playerLayerName
	String_t* ___playerLayerName_3;
	// System.String GameScore::enemyLayerName
	String_t* ___enemyLayerName_4;
	// System.Int32 GameScore::m_Deaths
	int32_t ___m_Deaths_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameScore::m_Kills
	Dictionary_2_t56 * ___m_Kills_6;
	// System.Single GameScore::m_StartTime
	float ___m_StartTime_7;
};
struct GameScore_t213_StaticFields{
	// GameScore GameScore::s_Instance
	GameScore_t213 * ___s_Instance_2;
};
