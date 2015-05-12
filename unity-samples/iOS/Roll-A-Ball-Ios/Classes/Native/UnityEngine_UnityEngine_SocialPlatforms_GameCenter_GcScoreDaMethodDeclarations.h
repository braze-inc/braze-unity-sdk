#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t815;
struct GcScoreData_t815_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t939;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
 Score_t939 * GcScoreData_ToScore_m4777 (GcScoreData_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t815_marshal(const GcScoreData_t815& unmarshaled, GcScoreData_t815_marshaled& marshaled);
void GcScoreData_t815_marshal_back(const GcScoreData_t815_marshaled& marshaled, GcScoreData_t815& unmarshaled);
void GcScoreData_t815_marshal_cleanup(GcScoreData_t815_marshaled& marshaled);
