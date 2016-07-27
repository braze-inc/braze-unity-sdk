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

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t3784099155;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C"  void AchievementDescription__ctor_m3032164909 (AchievementDescription_t3784099155 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t2509538522 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern "C"  String_t* AchievementDescription_ToString_m1633092820 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C"  void AchievementDescription_SetImage_m1092175896 (AchievementDescription_t3784099155 * __this, Texture2D_t2509538522 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C"  String_t* AchievementDescription_get_id_m3162941612 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C"  void AchievementDescription_set_id_m2215766207 (AchievementDescription_t3784099155 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C"  String_t* AchievementDescription_get_title_m1294089737 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C"  String_t* AchievementDescription_get_achievedDescription_m4248956218 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C"  String_t* AchievementDescription_get_unachievedDescription_m3429874753 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C"  bool AchievementDescription_get_hidden_m734162136 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C"  int32_t AchievementDescription_get_points_m4158769271 (AchievementDescription_t3784099155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
