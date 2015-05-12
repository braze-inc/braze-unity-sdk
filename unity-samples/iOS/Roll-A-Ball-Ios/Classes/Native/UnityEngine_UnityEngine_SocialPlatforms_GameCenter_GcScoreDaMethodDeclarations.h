#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t828;
struct GcScoreData_t828_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t950;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
 Score_t950 * GcScoreData_ToScore_m4872 (GcScoreData_t828 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t828_marshal(const GcScoreData_t828& unmarshaled, GcScoreData_t828_marshaled& marshaled);
void GcScoreData_t828_marshal_back(const GcScoreData_t828_marshaled& marshaled, GcScoreData_t828& unmarshaled);
void GcScoreData_t828_marshal_cleanup(GcScoreData_t828_marshaled& marshaled);
