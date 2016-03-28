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

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t1065917714;
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

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_4__ctor_m492943285_gshared (UnityEvent_4_t1065917714 * __this, const MethodInfo* method);
#define UnityEvent_4__ctor_m492943285(__this, method) ((  void (*) (UnityEvent_4_t1065917714 *, const MethodInfo*))UnityEvent_4__ctor_m492943285_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_4_FindMethod_Impl_m1344084084_gshared (UnityEvent_4_t1065917714 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m1344084084(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_4_t1065917714 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_4_FindMethod_Impl_m1344084084_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_4_GetDelegate_m1269387316_gshared (UnityEvent_4_t1065917714 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_4_GetDelegate_m1269387316(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_4_t1065917714 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_4_GetDelegate_m1269387316_gshared)(__this, ___target, ___theFunction, method)
