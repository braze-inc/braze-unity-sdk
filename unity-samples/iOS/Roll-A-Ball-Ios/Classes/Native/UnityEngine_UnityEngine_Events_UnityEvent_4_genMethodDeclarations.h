#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t4570;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t981;

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
 void UnityEvent_4__ctor_m24929_gshared (UnityEvent_4_t4570 * __this, MethodInfo* method);
#define UnityEvent_4__ctor_m24929(__this, method) (void)UnityEvent_4__ctor_m24929_gshared((UnityEvent_4_t4570 *)__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t211 * UnityEvent_4_FindMethod_Impl_m24930_gshared (UnityEvent_4_t4570 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m24930(__this, ___name, ___targetObj, method) (MethodInfo_t211 *)UnityEvent_4_FindMethod_Impl_m24930_gshared((UnityEvent_4_t4570 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t981 * UnityEvent_4_GetDelegate_m24931_gshared (UnityEvent_4_t4570 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method);
#define UnityEvent_4_GetDelegate_m24931(__this, ___target, ___theFunction, method) (BaseInvokableCall_t981 *)UnityEvent_4_GetDelegate_m24931_gshared((UnityEvent_4_t4570 *)__this, (Object_t *)___target, (MethodInfo_t211 *)___theFunction, method)
