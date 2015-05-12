#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2745;
// UnityEngine.Object
struct Object_t70;
struct Object_t70_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t112;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
 void CachedInvokableCall_1__ctor_m12732_gshared (CachedInvokableCall_1_t2745 * __this, Object_t70 * ___target, MethodInfo_t198 * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m12732(__this, ___target, ___theFunction, ___argument, method) (void)CachedInvokableCall_1__ctor_m12732_gshared((CachedInvokableCall_1_t2745 *)__this, (Object_t70 *)___target, (MethodInfo_t198 *)___theFunction, (Object_t *)___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
 void CachedInvokableCall_1_Invoke_m12734_gshared (CachedInvokableCall_1_t2745 * __this, ObjectU5BU5D_t112* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m12734(__this, ___args, method) (void)CachedInvokableCall_1_Invoke_m12734_gshared((CachedInvokableCall_1_t2745 *)__this, (ObjectU5BU5D_t112*)___args, method)
