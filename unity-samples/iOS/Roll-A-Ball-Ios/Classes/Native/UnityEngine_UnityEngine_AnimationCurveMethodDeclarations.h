#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t909;
struct AnimationCurve_t909_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t910;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m4664 (AnimationCurve_t909 * __this, KeyframeU5BU5D_t910* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m4665 (AnimationCurve_t909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m4666 (AnimationCurve_t909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m4667 (AnimationCurve_t909 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m4668 (AnimationCurve_t909 * __this, KeyframeU5BU5D_t910* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t909_marshal(const AnimationCurve_t909& unmarshaled, AnimationCurve_t909_marshaled& marshaled);
void AnimationCurve_t909_marshal_back(const AnimationCurve_t909_marshaled& marshaled, AnimationCurve_t909& unmarshaled);
void AnimationCurve_t909_marshal_cleanup(AnimationCurve_t909_marshaled& marshaled);
