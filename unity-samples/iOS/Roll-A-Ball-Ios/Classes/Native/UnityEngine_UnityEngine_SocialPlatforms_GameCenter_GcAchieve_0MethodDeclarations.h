#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t826;
struct GcAchievementData_t826_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t949;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
 Achievement_t949 * GcAchievementData_ToAchievement_m4871 (GcAchievementData_t826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t826_marshal(const GcAchievementData_t826& unmarshaled, GcAchievementData_t826_marshaled& marshaled);
void GcAchievementData_t826_marshal_back(const GcAchievementData_t826_marshaled& marshaled, GcAchievementData_t826& unmarshaled);
void GcAchievementData_t826_marshal_cleanup(GcAchievementData_t826_marshaled& marshaled);
