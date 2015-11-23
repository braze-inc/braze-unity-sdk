#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameScore
struct GameScore_t181;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t46;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameScore
struct  GameScore_t181  : public MonoBehaviour_t2
{
	// System.String GameScore::playerLayerName
	String_t* ___playerLayerName_3;
	// System.String GameScore::enemyLayerName
	String_t* ___enemyLayerName_4;
	// System.Int32 GameScore::m_Deaths
	int32_t ___m_Deaths_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameScore::m_Kills
	Dictionary_2_t46 * ___m_Kills_6;
	// System.Single GameScore::m_StartTime
	float ___m_StartTime_7;
};
struct GameScore_t181_StaticFields{
	// GameScore GameScore::s_Instance
	GameScore_t181 * ___s_Instance_2;
};
