#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t948;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t571;

// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
 void AchievementDescription__ctor_m4901 (AchievementDescription_t948 * __this, String_t* ___id, String_t* ___title, Texture2D_t571 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
 String_t* AchievementDescription_ToString_m4902 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
 void AchievementDescription_SetImage_m4903 (AchievementDescription_t948 * __this, Texture2D_t571 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
 String_t* AchievementDescription_get_id_m4904 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
 void AchievementDescription_set_id_m4905 (AchievementDescription_t948 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
 String_t* AchievementDescription_get_title_m4906 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
 String_t* AchievementDescription_get_achievedDescription_m4907 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
 String_t* AchievementDescription_get_unachievedDescription_m4908 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
 bool AchievementDescription_get_hidden_m4909 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
 int32_t AchievementDescription_get_points_m4910 (AchievementDescription_t948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
