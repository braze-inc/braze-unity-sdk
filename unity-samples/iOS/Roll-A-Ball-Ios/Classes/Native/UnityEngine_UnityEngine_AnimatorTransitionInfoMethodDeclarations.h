#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t915;
struct AnimatorTransitionInfo_t915_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
 bool AnimatorTransitionInfo_IsName_m4686 (AnimatorTransitionInfo_t915 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
 bool AnimatorTransitionInfo_IsUserName_m4687 (AnimatorTransitionInfo_t915 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
 int32_t AnimatorTransitionInfo_get_fullPathHash_m4688 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
 int32_t AnimatorTransitionInfo_get_nameHash_m4689 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
 int32_t AnimatorTransitionInfo_get_userNameHash_m4690 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
 float AnimatorTransitionInfo_get_normalizedTime_m4691 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
 bool AnimatorTransitionInfo_get_anyState_m4692 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
 bool AnimatorTransitionInfo_get_entry_m4693 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
 bool AnimatorTransitionInfo_get_exit_m4694 (AnimatorTransitionInfo_t915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t915_marshal(const AnimatorTransitionInfo_t915& unmarshaled, AnimatorTransitionInfo_t915_marshaled& marshaled);
void AnimatorTransitionInfo_t915_marshal_back(const AnimatorTransitionInfo_t915_marshaled& marshaled, AnimatorTransitionInfo_t915& unmarshaled);
void AnimatorTransitionInfo_t915_marshal_cleanup(AnimatorTransitionInfo_t915_marshaled& marshaled);
