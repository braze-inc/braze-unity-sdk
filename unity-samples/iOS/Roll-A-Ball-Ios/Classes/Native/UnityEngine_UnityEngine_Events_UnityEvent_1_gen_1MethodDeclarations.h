#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t590;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t3907;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m3535(__this, method) (void)UnityEvent_1__ctor_m18393_gshared((UnityEvent_1_t3614 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m20666(__this, ___call, method) (void)UnityEvent_1_AddListener_m18395_gshared((UnityEvent_1_t3614 *)__this, (UnityAction_1_t2747 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m20667(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m18397_gshared((UnityEvent_1_t3614 *)__this, (UnityAction_1_t2747 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m3536(__this, ___name, ___targetObj, method) (MethodInfo_t198 *)UnityEvent_1_FindMethod_Impl_m18398_gshared((UnityEvent_1_t3614 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m3537(__this, ___target, ___theFunction, method) (BaseInvokableCall_t970 *)UnityEvent_1_GetDelegate_m18399_gshared((UnityEvent_1_t3614 *)__this, (Object_t *)___target, (MethodInfo_t198 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m3538(__this/* static, unused */, ___action, method) (BaseInvokableCall_t970 *)UnityEvent_1_GetDelegate_m18400_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t2747 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m3601(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m18401_gshared((UnityEvent_1_t3614 *)__this, (Object_t *)___arg0, method)
