#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t920;
struct AnimationCurve_t920_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t921;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m4759 (AnimationCurve_t920 * __this, KeyframeU5BU5D_t921* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m4760 (AnimationCurve_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m4761 (AnimationCurve_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m4762 (AnimationCurve_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m4763 (AnimationCurve_t920 * __this, KeyframeU5BU5D_t921* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t920_marshal(const AnimationCurve_t920& unmarshaled, AnimationCurve_t920_marshaled& marshaled);
void AnimationCurve_t920_marshal_back(const AnimationCurve_t920_marshaled& marshaled, AnimationCurve_t920& unmarshaled);
void AnimationCurve_t920_marshal_cleanup(AnimationCurve_t920_marshaled& marshaled);
