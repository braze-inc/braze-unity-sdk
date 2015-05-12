#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t4551;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
 void UnityEvent_3__ctor_m24716_gshared (UnityEvent_3_t4551 * __this, MethodInfo* method);
#define UnityEvent_3__ctor_m24716(__this, method) (void)UnityEvent_3__ctor_m24716_gshared((UnityEvent_3_t4551 *)__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t198 * UnityEvent_3_FindMethod_Impl_m24717_gshared (UnityEvent_3_t4551 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m24717(__this, ___name, ___targetObj, method) (MethodInfo_t198 *)UnityEvent_3_FindMethod_Impl_m24717_gshared((UnityEvent_3_t4551 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t970 * UnityEvent_3_GetDelegate_m24718_gshared (UnityEvent_3_t4551 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method);
#define UnityEvent_3_GetDelegate_m24718(__this, ___target, ___theFunction, method) (BaseInvokableCall_t970 *)UnityEvent_3_GetDelegate_m24718_gshared((UnityEvent_3_t4551 *)__this, (Object_t *)___target, (MethodInfo_t198 *)___theFunction, method)
