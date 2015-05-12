#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t4550;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
 void UnityEvent_2__ctor_m24713_gshared (UnityEvent_2_t4550 * __this, MethodInfo* method);
#define UnityEvent_2__ctor_m24713(__this, method) (void)UnityEvent_2__ctor_m24713_gshared((UnityEvent_2_t4550 *)__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t198 * UnityEvent_2_FindMethod_Impl_m24714_gshared (UnityEvent_2_t4550 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m24714(__this, ___name, ___targetObj, method) (MethodInfo_t198 *)UnityEvent_2_FindMethod_Impl_m24714_gshared((UnityEvent_2_t4550 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t970 * UnityEvent_2_GetDelegate_m24715_gshared (UnityEvent_2_t4550 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method);
#define UnityEvent_2_GetDelegate_m24715(__this, ___target, ___theFunction, method) (BaseInvokableCall_t970 *)UnityEvent_2_GetDelegate_m24715_gshared((UnityEvent_2_t4550 *)__this, (Object_t *)___target, (MethodInfo_t198 *)___theFunction, method)
