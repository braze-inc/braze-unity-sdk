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
struct GameScore_t181;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t108;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t141;

#include "codegen/il2cpp-codegen.h"

// System.Void GameScore::.ctor()
extern "C" void GameScore__ctor_m755 (GameScore_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameScore GameScore::get_Instance()
extern "C" GameScore_t181 * GameScore_get_Instance_m756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnApplicationQuit()
extern "C" void GameScore_OnApplicationQuit_m757 (GameScore_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::get_Deaths()
extern "C" int32_t GameScore_get_Deaths_m758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> GameScore::get_KillTypes()
extern "C" Object_t* GameScore_get_KillTypes_m759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::GetKills(System.String)
extern "C" int32_t GameScore_GetKills_m760 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameScore::get_GameTime()
extern "C" float GameScore_get_GameTime_m761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::RegisterDeath(UnityEngine.GameObject)
extern "C" void GameScore_RegisterDeath_m762 (Object_t * __this /* static, unused */, GameObject_t141 * ___deadObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnLevelWasLoaded(System.Int32)
extern "C" void GameScore_OnLevelWasLoaded_m763 (GameScore_t181 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
