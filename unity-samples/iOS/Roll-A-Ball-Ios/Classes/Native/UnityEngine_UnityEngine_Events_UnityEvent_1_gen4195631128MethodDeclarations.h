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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t4195631128;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t938670926;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1354608473_gshared (UnityEvent_1_t4195631128 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1354608473(__this, method) ((  void (*) (UnityEvent_1_t4195631128 *, const MethodInfo*))UnityEvent_1__ctor_m1354608473_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m994670587_gshared (UnityEvent_1_t4195631128 * __this, UnityAction_1_t938670926 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m994670587(__this, ___call, method) ((  void (*) (UnityEvent_1_t4195631128 *, UnityAction_1_t938670926 *, const MethodInfo*))UnityEvent_1_AddListener_m994670587_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m1402724082_gshared (UnityEvent_1_t4195631128 * __this, UnityAction_1_t938670926 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m1402724082(__this, ___call, method) ((  void (*) (UnityEvent_1_t4195631128 *, UnityAction_1_t938670926 *, const MethodInfo*))UnityEvent_1_RemoveListener_m1402724082_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m941410756_gshared (UnityEvent_1_t4195631128 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m941410756(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_1_t4195631128 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m941410756_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m3630876836_gshared (UnityEvent_1_t4195631128 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3630876836(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_1_t4195631128 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m3630876836_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m3019506241_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t938670926 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3019506241(__this /* static, unused */, ___action, method) ((  BaseInvokableCall_t1733537956 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t938670926 *, const MethodInfo*))UnityEvent_1_GetDelegate_m3019506241_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m3551800820_gshared (UnityEvent_1_t4195631128 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3551800820(__this, ___arg0, method) ((  void (*) (UnityEvent_1_t4195631128 *, float, const MethodInfo*))UnityEvent_1_Invoke_m3551800820_gshared)(__this, ___arg0, method)
