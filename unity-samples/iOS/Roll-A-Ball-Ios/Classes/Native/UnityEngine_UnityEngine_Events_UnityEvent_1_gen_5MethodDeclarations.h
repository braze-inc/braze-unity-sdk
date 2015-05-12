#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3614;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2747;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
 void UnityEvent_1__ctor_m18393_gshared (UnityEvent_1_t3614 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m18393(__this, method) (void)UnityEvent_1__ctor_m18393_gshared((UnityEvent_1_t3614 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m18395_gshared (UnityEvent_1_t3614 * __this, UnityAction_1_t2747 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m18395(__this, ___call, method) (void)UnityEvent_1_AddListener_m18395_gshared((UnityEvent_1_t3614 *)__this, (UnityAction_1_t2747 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m18397_gshared (UnityEvent_1_t3614 * __this, UnityAction_1_t2747 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m18397(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m18397_gshared((UnityEvent_1_t3614 *)__this, (UnityAction_1_t2747 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t198 * UnityEvent_1_FindMethod_Impl_m18398_gshared (UnityEvent_1_t3614 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m18398(__this, ___name, ___targetObj, method) (MethodInfo_t198 *)UnityEvent_1_FindMethod_Impl_m18398_gshared((UnityEvent_1_t3614 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t970 * UnityEvent_1_GetDelegate_m18399_gshared (UnityEvent_1_t3614 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m18399(__this, ___target, ___theFunction, method) (BaseInvokableCall_t970 *)UnityEvent_1_GetDelegate_m18399_gshared((UnityEvent_1_t3614 *)__this, (Object_t *)___target, (MethodInfo_t198 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t970 * UnityEvent_1_GetDelegate_m18400_gshared (Object_t * __this/* static, unused */, UnityAction_1_t2747 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m18400(__this/* static, unused */, ___action, method) (BaseInvokableCall_t970 *)UnityEvent_1_GetDelegate_m18400_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t2747 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
 void UnityEvent_1_Invoke_m18401_gshared (UnityEvent_1_t3614 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m18401(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m18401_gshared((UnityEvent_1_t3614 *)__this, (Object_t *)___arg0, method)
