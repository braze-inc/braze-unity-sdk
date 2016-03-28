#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameScore
struct GameScore_t2993539488;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameScore
struct  GameScore_t2993539488  : public MonoBehaviour_t3012272455
{
public:
	// System.String GameScore::playerLayerName
	String_t* ___playerLayerName_3;
	// System.String GameScore::enemyLayerName
	String_t* ___enemyLayerName_4;
	// System.Int32 GameScore::m_Deaths
	int32_t ___m_Deaths_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameScore::m_Kills
	Dictionary_2_t190145395 * ___m_Kills_6;
	// System.Single GameScore::m_StartTime
	float ___m_StartTime_7;

public:
	inline static int32_t get_offset_of_playerLayerName_3() { return static_cast<int32_t>(offsetof(GameScore_t2993539488, ___playerLayerName_3)); }
	inline String_t* get_playerLayerName_3() const { return ___playerLayerName_3; }
	inline String_t** get_address_of_playerLayerName_3() { return &___playerLayerName_3; }
	inline void set_playerLayerName_3(String_t* value)
	{
		___playerLayerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerLayerName_3, value);
	}

	inline static int32_t get_offset_of_enemyLayerName_4() { return static_cast<int32_t>(offsetof(GameScore_t2993539488, ___enemyLayerName_4)); }
	inline String_t* get_enemyLayerName_4() const { return ___enemyLayerName_4; }
	inline String_t** get_address_of_enemyLayerName_4() { return &___enemyLayerName_4; }
	inline void set_enemyLayerName_4(String_t* value)
	{
		___enemyLayerName_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemyLayerName_4, value);
	}

	inline static int32_t get_offset_of_m_Deaths_5() { return static_cast<int32_t>(offsetof(GameScore_t2993539488, ___m_Deaths_5)); }
	inline int32_t get_m_Deaths_5() const { return ___m_Deaths_5; }
	inline int32_t* get_address_of_m_Deaths_5() { return &___m_Deaths_5; }
	inline void set_m_Deaths_5(int32_t value)
	{
		___m_Deaths_5 = value;
	}

	inline static int32_t get_offset_of_m_Kills_6() { return static_cast<int32_t>(offsetof(GameScore_t2993539488, ___m_Kills_6)); }
	inline Dictionary_2_t190145395 * get_m_Kills_6() const { return ___m_Kills_6; }
	inline Dictionary_2_t190145395 ** get_address_of_m_Kills_6() { return &___m_Kills_6; }
	inline void set_m_Kills_6(Dictionary_2_t190145395 * value)
	{
		___m_Kills_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Kills_6, value);
	}

	inline static int32_t get_offset_of_m_StartTime_7() { return static_cast<int32_t>(offsetof(GameScore_t2993539488, ___m_StartTime_7)); }
	inline float get_m_StartTime_7() const { return ___m_StartTime_7; }
	inline float* get_address_of_m_StartTime_7() { return &___m_StartTime_7; }
	inline void set_m_StartTime_7(float value)
	{
		___m_StartTime_7 = value;
	}
};

struct GameScore_t2993539488_StaticFields
{
public:
	// GameScore GameScore::s_Instance
	GameScore_t2993539488 * ___s_Instance_2;

public:
	inline static int32_t get_offset_of_s_Instance_2() { return static_cast<int32_t>(offsetof(GameScore_t2993539488_StaticFields, ___s_Instance_2)); }
	inline GameScore_t2993539488 * get_s_Instance_2() const { return ___s_Instance_2; }
	inline GameScore_t2993539488 ** get_address_of_s_Instance_2() { return &___s_Instance_2; }
	inline void set_s_Instance_2(GameScore_t2993539488 * value)
	{
		___s_Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
