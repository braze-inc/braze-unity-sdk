#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AI
struct AI_t384;
// UnityEngine.Collider
struct Collider_t385;

// System.Void AI::.ctor()
 void AI__ctor_m1680 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::Awake()
 void AI_Awake_m1681 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnEnable()
 void AI_OnEnable_m1682 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnTriggerEnter(UnityEngine.Collider)
 void AI_OnTriggerEnter_m1683 (AI_t384 * __this, Collider_t385 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnEnterInterestArea()
 void AI_OnEnterInterestArea_m1684 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnExitInterestArea()
 void AI_OnExitInterestArea_m1685 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnSpotted()
 void AI_OnSpotted_m1686 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::OnLostTrack()
 void AI_OnLostTrack_m1687 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AI::CanSeePlayer()
 bool AI_CanSeePlayer_m1688 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AI::Main()
 void AI_Main_m1689 (AI_t384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
