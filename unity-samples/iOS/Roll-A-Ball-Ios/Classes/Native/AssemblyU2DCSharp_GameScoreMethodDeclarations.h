#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameScore
struct GameScore_t213;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t125;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t154;

// System.Void GameScore::.ctor()
 void GameScore__ctor_m880 (GameScore_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameScore GameScore::get_Instance()
 GameScore_t213 * GameScore_get_Instance_m881 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnApplicationQuit()
 void GameScore_OnApplicationQuit_m882 (GameScore_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::get_Deaths()
 int32_t GameScore_get_Deaths_m883 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> GameScore::get_KillTypes()
 Object_t* GameScore_get_KillTypes_m884 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::GetKills(System.String)
 int32_t GameScore_GetKills_m885 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameScore::get_GameTime()
 float GameScore_get_GameTime_m886 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::RegisterDeath(UnityEngine.GameObject)
 void GameScore_RegisterDeath_m887 (Object_t * __this/* static, unused */, GameObject_t154 * ___deadObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnLevelWasLoaded(System.Int32)
 void GameScore_OnLevelWasLoaded_m888 (GameScore_t213 * __this, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
