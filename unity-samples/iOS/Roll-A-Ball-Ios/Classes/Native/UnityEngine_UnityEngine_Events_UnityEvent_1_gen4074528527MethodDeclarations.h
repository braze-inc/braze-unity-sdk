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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t4074528527;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t817568325;
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

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C"  void UnityEvent_1__ctor_m4139691420_gshared (UnityEvent_1_t4074528527 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m4139691420(__this, method) ((  void (*) (UnityEvent_1_t4074528527 *, const MethodInfo*))UnityEvent_1__ctor_m4139691420_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m1298407787_gshared (UnityEvent_1_t4074528527 * __this, UnityAction_1_t817568325 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1298407787(__this, ___call, method) ((  void (*) (UnityEvent_1_t4074528527 *, UnityAction_1_t817568325 *, const MethodInfo*))UnityEvent_1_AddListener_m1298407787_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2525028476_gshared (UnityEvent_1_t4074528527 * __this, UnityAction_1_t817568325 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2525028476(__this, ___call, method) ((  void (*) (UnityEvent_1_t4074528527 *, UnityAction_1_t817568325 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2525028476_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m936319469_gshared (UnityEvent_1_t4074528527 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m936319469(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_1_t4074528527 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m936319469_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m882504923_gshared (UnityEvent_1_t4074528527 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m882504923(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_1_t4074528527 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m882504923_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m2100323256_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t817568325 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2100323256(__this /* static, unused */, ___action, method) ((  BaseInvokableCall_t1733537956 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t817568325 *, const MethodInfo*))UnityEvent_1_GetDelegate_m2100323256_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m3779699780_gshared (UnityEvent_1_t4074528527 * __this, Il2CppObject * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3779699780(__this, ___arg0, method) ((  void (*) (UnityEvent_1_t4074528527 *, Il2CppObject *, const MethodInfo*))UnityEvent_1_Invoke_m3779699780_gshared)(__this, ___arg0, method)
