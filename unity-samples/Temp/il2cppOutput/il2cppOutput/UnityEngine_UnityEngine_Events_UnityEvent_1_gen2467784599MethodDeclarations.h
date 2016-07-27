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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t2467784599;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3505791693;
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
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C"  void UnityEvent_1__ctor_m99457450_gshared (UnityEvent_1_t2467784599 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m99457450(__this, method) ((  void (*) (UnityEvent_1_t2467784599 *, const MethodInfo*))UnityEvent_1__ctor_m99457450_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m274807813_gshared (UnityEvent_1_t2467784599 * __this, UnityAction_1_t3505791693 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m274807813(__this, ___call0, method) ((  void (*) (UnityEvent_1_t2467784599 *, UnityAction_1_t3505791693 *, const MethodInfo*))UnityEvent_1_AddListener_m274807813_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2726004642_gshared (UnityEvent_1_t2467784599 * __this, UnityAction_1_t3505791693 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2726004642(__this, ___call0, method) ((  void (*) (UnityEvent_1_t2467784599 *, UnityAction_1_t3505791693 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2726004642_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3931660819_gshared (UnityEvent_1_t2467784599 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3931660819(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t2467784599 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m3931660819_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m1046909621_gshared (UnityEvent_1_t2467784599 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1046909621(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_1_t2467784599 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m1046909621_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m2362895634_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t3505791693 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2362895634(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1733537956 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t3505791693 *, const MethodInfo*))UnityEvent_1_GetDelegate_m2362895634_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m3332953603_gshared (UnityEvent_1_t2467784599 * __this, Vector2_t3525329788  ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3332953603(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t2467784599 *, Vector2_t3525329788 , const MethodInfo*))UnityEvent_1_Invoke_m3332953603_gshared)(__this, ___arg00, method)
