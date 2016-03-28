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

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t3894999172;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1422561091;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t2158783410;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leade1422561091.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter2223678307.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m4042810199 (GcLeaderboard_t3894999172 * __this, Leaderboard_t1422561091 * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C"  void GcLeaderboard_Finalize_m4015840938 (GcLeaderboard_t3894999172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m100384368 (GcLeaderboard_t3894999172 * __this, Leaderboard_t1422561091 * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GcLeaderboard_SetScores_m1734279820 (GcLeaderboard_t3894999172 * __this, GcScoreDataU5BU5D_t2158783410* ___scoreDatas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C"  void GcLeaderboard_SetLocalScore_m3970132532 (GcLeaderboard_t3894999172 * __this, GcScoreData_t2223678307  ___scoreData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C"  void GcLeaderboard_SetMaxRange_m3160374921 (GcLeaderboard_t3894999172 * __this, uint32_t ___maxRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C"  void GcLeaderboard_SetTitle_m3781988000 (GcLeaderboard_t3894999172 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GcLeaderboard_Internal_LoadScores_m1783152707 (GcLeaderboard_t3894999172 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C"  void GcLeaderboard_Internal_LoadScoresWithUsers_m1315210452 (GcLeaderboard_t3894999172 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t2956870243* ___userIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m294711596 (GcLeaderboard_t3894999172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m301614325 (GcLeaderboard_t3894999172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
