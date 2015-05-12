#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t465;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t3613;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m3220(__this, method) (void)UnityEvent_1__ctor_m18393_gshared((UnityEvent_1_t3614 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m18394(__this, ___call, method) (void)UnityEvent_1_AddListener_m18395_gshared((UnityEvent_1_t3614 *)__this, (UnityAction_1_t2747 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m18396(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m18397_gshared((UnityEvent_1_t3614 *)__this, (UnityAction_1_t2747 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m3224(__this, ___name, ___targetObj, method) (MethodInfo_t198 *)UnityEvent_1_FindMethod_Impl_m18398_gshared((UnityEvent_1_t3614 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m3225(__this, ___target, ___theFunction, method) (BaseInvokableCall_t970 *)UnityEvent_1_GetDelegate_m18399_gshared((UnityEvent_1_t3614 *)__this, (Object_t *)___target, (MethodInfo_t198 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m3226(__this/* static, unused */, ___action, method) (BaseInvokableCall_t970 *)UnityEvent_1_GetDelegate_m18400_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t2747 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m3231(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m18401_gshared((UnityEvent_1_t3614 *)__this, (Object_t *)___arg0, method)
