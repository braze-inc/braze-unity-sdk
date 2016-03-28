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

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t3775219180;
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

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_2__ctor_m1950601551_gshared (UnityEvent_2_t3775219180 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m1950601551(__this, method) ((  void (*) (UnityEvent_2_t3775219180 *, const MethodInfo*))UnityEvent_2__ctor_m1950601551_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m3911325978_gshared (UnityEvent_2_t3775219180 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m3911325978(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_2_t3775219180 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m3911325978_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_2_GetDelegate_m3055054414_gshared (UnityEvent_2_t3775219180 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m3055054414(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_2_t3775219180 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m3055054414_gshared)(__this, ___target, ___theFunction, method)
