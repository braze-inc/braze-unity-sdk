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
#include "UnityEngine_UnityEngine_AnimatorStateInfo4162640357.h"
#include "mscorlib_System_String968488902.h"

// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C"  bool AnimatorStateInfo_IsName_m1653922768 (AnimatorStateInfo_t4162640357 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C"  int32_t AnimatorStateInfo_get_fullPathHash_m3257074542 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m453823205 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C"  int32_t AnimatorStateInfo_get_shortNameHash_m994885515 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C"  float AnimatorStateInfo_get_normalizedTime_m2531821060 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C"  float AnimatorStateInfo_get_length_m3147284742 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C"  float AnimatorStateInfo_get_speed_m247405833 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C"  float AnimatorStateInfo_get_speedMultiplier_m489756842 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C"  int32_t AnimatorStateInfo_get_tagHash_m3543262078 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C"  bool AnimatorStateInfo_IsTag_m119936877 (AnimatorStateInfo_t4162640357 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C"  bool AnimatorStateInfo_get_loop_m1495892586 (AnimatorStateInfo_t4162640357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimatorStateInfo_t4162640357;
struct AnimatorStateInfo_t4162640357_marshaled_pinvoke;

extern "C" void AnimatorStateInfo_t4162640357_marshal_pinvoke(const AnimatorStateInfo_t4162640357& unmarshaled, AnimatorStateInfo_t4162640357_marshaled_pinvoke& marshaled);
extern "C" void AnimatorStateInfo_t4162640357_marshal_pinvoke_back(const AnimatorStateInfo_t4162640357_marshaled_pinvoke& marshaled, AnimatorStateInfo_t4162640357& unmarshaled);
extern "C" void AnimatorStateInfo_t4162640357_marshal_pinvoke_cleanup(AnimatorStateInfo_t4162640357_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimatorStateInfo_t4162640357;
struct AnimatorStateInfo_t4162640357_marshaled_com;

extern "C" void AnimatorStateInfo_t4162640357_marshal_com(const AnimatorStateInfo_t4162640357& unmarshaled, AnimatorStateInfo_t4162640357_marshaled_com& marshaled);
extern "C" void AnimatorStateInfo_t4162640357_marshal_com_back(const AnimatorStateInfo_t4162640357_marshaled_com& marshaled, AnimatorStateInfo_t4162640357& unmarshaled);
extern "C" void AnimatorStateInfo_t4162640357_marshal_com_cleanup(AnimatorStateInfo_t4162640357_marshaled_com& marshaled);
