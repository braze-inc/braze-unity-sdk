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

// AI
struct AI_t341;
// UnityEngine.Collider
struct Collider_t410;

#include "codegen/il2cpp-codegen.h"

// System.Void AI::.ctor()
extern "C" void AI__ctor_m1344 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::Awake()
extern "C" void AI_Awake_m1345 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnEnable()
extern "C" void AI_OnEnable_m1346 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnTriggerEnter(UnityEngine.Collider)
extern "C" void AI_OnTriggerEnter_m1347 (AI_t341 * __this, Collider_t410 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnEnterInterestArea()
extern "C" void AI_OnEnterInterestArea_m1348 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnExitInterestArea()
extern "C" void AI_OnExitInterestArea_m1349 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnSpotted()
extern "C" void AI_OnSpotted_m1350 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnLostTrack()
extern "C" void AI_OnLostTrack_m1351 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AI::CanSeePlayer()
extern "C" bool AI_CanSeePlayer_m1352 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::Main()
extern "C" void AI_Main_m1353 (AI_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
