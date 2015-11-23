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

// UnityEngine.AnimationCurve
struct AnimationCurve_t829;
struct AnimationCurve_t829_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t957;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m4290 (AnimationCurve_t829 * __this, KeyframeU5BU5D_t957* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4291 (AnimationCurve_t829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4292 (AnimationCurve_t829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4293 (AnimationCurve_t829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4294 (AnimationCurve_t829 * __this, KeyframeU5BU5D_t957* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t829_marshal(const AnimationCurve_t829& unmarshaled, AnimationCurve_t829_marshaled& marshaled);
extern "C" void AnimationCurve_t829_marshal_back(const AnimationCurve_t829_marshaled& marshaled, AnimationCurve_t829& unmarshaled);
extern "C" void AnimationCurve_t829_marshal_cleanup(AnimationCurve_t829_marshaled& marshaled);
