#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t813;
struct GcAchievementData_t813_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t938;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
 Achievement_t938 * GcAchievementData_ToAchievement_m4776 (GcAchievementData_t813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t813_marshal(const GcAchievementData_t813& unmarshaled, GcAchievementData_t813_marshaled& marshaled);
void GcAchievementData_t813_marshal_back(const GcAchievementData_t813_marshaled& marshaled, GcAchievementData_t813& unmarshaled);
void GcAchievementData_t813_marshal_cleanup(GcAchievementData_t813_marshaled& marshaled);
