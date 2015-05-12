#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t820;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t946;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t947;
// System.String[]
struct StringU5BU5D_t3;
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
 void Leaderboard__ctor_m4823 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
 String_t* Leaderboard_ToString_m4824 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
 void Leaderboard_SetLocalUserScore_m4825 (Leaderboard_t820 * __this, Object_t * ___score, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
 void Leaderboard_SetMaxRange_m4826 (Leaderboard_t820 * __this, uint32_t ___maxRange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
 void Leaderboard_SetScores_m4827 (Leaderboard_t820 * __this, IScoreU5BU5D_t947* ___scores, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
 void Leaderboard_SetTitle_m4828 (Leaderboard_t820 * __this, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
 StringU5BU5D_t3* Leaderboard_GetUserFilter_m4829 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
 String_t* Leaderboard_get_id_m4830 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
 void Leaderboard_set_id_m4831 (Leaderboard_t820 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
 int32_t Leaderboard_get_userScope_m4832 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
 void Leaderboard_set_userScope_m4833 (Leaderboard_t820 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
 Range_t948  Leaderboard_get_range_m4834 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
 void Leaderboard_set_range_m4835 (Leaderboard_t820 * __this, Range_t948  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
 int32_t Leaderboard_get_timeScope_m4836 (Leaderboard_t820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
 void Leaderboard_set_timeScope_m4837 (Leaderboard_t820 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
