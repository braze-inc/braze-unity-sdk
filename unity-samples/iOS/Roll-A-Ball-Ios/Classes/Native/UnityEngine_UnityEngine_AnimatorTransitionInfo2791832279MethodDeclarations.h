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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo2791832279.h"
#include "mscorlib_System_String968488902.h"

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C"  bool AnimatorTransitionInfo_IsName_m1283663078 (AnimatorTransitionInfo_t2791832279 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C"  bool AnimatorTransitionInfo_IsUserName_m2732197659 (AnimatorTransitionInfo_t2791832279 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C"  int32_t AnimatorTransitionInfo_get_fullPathHash_m3335466636 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C"  int32_t AnimatorTransitionInfo_get_nameHash_m2102867203 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C"  int32_t AnimatorTransitionInfo_get_userNameHash_m249220782 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C"  float AnimatorTransitionInfo_get_normalizedTime_m3258684986 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C"  bool AnimatorTransitionInfo_get_anyState_m3421556405 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C"  bool AnimatorTransitionInfo_get_entry_m2038132324 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C"  bool AnimatorTransitionInfo_get_exit_m2568505102 (AnimatorTransitionInfo_t2791832279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimatorTransitionInfo_t2791832279;
struct AnimatorTransitionInfo_t2791832279_marshaled_pinvoke;

extern "C" void AnimatorTransitionInfo_t2791832279_marshal_pinvoke(const AnimatorTransitionInfo_t2791832279& unmarshaled, AnimatorTransitionInfo_t2791832279_marshaled_pinvoke& marshaled);
extern "C" void AnimatorTransitionInfo_t2791832279_marshal_pinvoke_back(const AnimatorTransitionInfo_t2791832279_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t2791832279& unmarshaled);
extern "C" void AnimatorTransitionInfo_t2791832279_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t2791832279_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimatorTransitionInfo_t2791832279;
struct AnimatorTransitionInfo_t2791832279_marshaled_com;

extern "C" void AnimatorTransitionInfo_t2791832279_marshal_com(const AnimatorTransitionInfo_t2791832279& unmarshaled, AnimatorTransitionInfo_t2791832279_marshaled_com& marshaled);
extern "C" void AnimatorTransitionInfo_t2791832279_marshal_com_back(const AnimatorTransitionInfo_t2791832279_marshaled_com& marshaled, AnimatorTransitionInfo_t2791832279& unmarshaled);
extern "C" void AnimatorTransitionInfo_t2791832279_marshal_com_cleanup(AnimatorTransitionInfo_t2791832279_marshaled_com& marshaled);
