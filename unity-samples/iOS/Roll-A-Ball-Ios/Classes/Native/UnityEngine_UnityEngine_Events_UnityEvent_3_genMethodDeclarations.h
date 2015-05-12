#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t4569;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t981;

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
 void UnityEvent_3__ctor_m24926_gshared (UnityEvent_3_t4569 * __this, MethodInfo* method);
#define UnityEvent_3__ctor_m24926(__this, method) (void)UnityEvent_3__ctor_m24926_gshared((UnityEvent_3_t4569 *)__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t211 * UnityEvent_3_FindMethod_Impl_m24927_gshared (UnityEvent_3_t4569 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m24927(__this, ___name, ___targetObj, method) (MethodInfo_t211 *)UnityEvent_3_FindMethod_Impl_m24927_gshared((UnityEvent_3_t4569 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t981 * UnityEvent_3_GetDelegate_m24928_gshared (UnityEvent_3_t4569 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method);
#define UnityEvent_3_GetDelegate_m24928(__this, ___target, ___theFunction, method) (BaseInvokableCall_t981 *)UnityEvent_3_GetDelegate_m24928_gshared((UnityEvent_3_t4569 *)__this, (Object_t *)___target, (MethodInfo_t211 *)___theFunction, method)
