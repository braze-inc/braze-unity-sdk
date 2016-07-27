#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameScore
struct GameScore_t2993539488;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void GameScore::.ctor()
extern "C"  void GameScore__ctor_m2365988811 (GameScore_t2993539488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameScore GameScore::get_Instance()
extern "C"  GameScore_t2993539488 * GameScore_get_Instance_m3825530532 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnApplicationQuit()
extern "C"  void GameScore_OnApplicationQuit_m549336265 (GameScore_t2993539488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::get_Deaths()
extern "C"  int32_t GameScore_get_Deaths_m597872595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> GameScore::get_KillTypes()
extern "C"  Il2CppObject* GameScore_get_KillTypes_m2134614989 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::GetKills(System.String)
extern "C"  int32_t GameScore_GetKills_m2235529496 (Il2CppObject * __this /* static, unused */, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameScore::get_GameTime()
extern "C"  float GameScore_get_GameTime_m327205749 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::RegisterDeath(UnityEngine.GameObject)
extern "C"  void GameScore_RegisterDeath_m2366228018 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___deadObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnLevelWasLoaded(System.Int32)
extern "C"  void GameScore_OnLevelWasLoaded_m523126035 (GameScore_t2993539488 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
