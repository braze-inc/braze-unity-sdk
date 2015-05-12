#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t609;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t753;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
 void UnityEvent_1__ctor_m3643 (UnityEvent_1_t609 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m3663 (UnityEvent_1_t609 * __this, UnityAction_1_t753 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m3662 (UnityEvent_1_t609 * __this, UnityAction_1_t753 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t198 * UnityEvent_1_FindMethod_Impl_m3644 (UnityEvent_1_t609 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t970 * UnityEvent_1_GetDelegate_m3645 (UnityEvent_1_t609 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t970 * UnityEvent_1_GetDelegate_m20739 (Object_t * __this/* static, unused */, UnityAction_1_t753 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
 void UnityEvent_1_Invoke_m3652 (UnityEvent_1_t609 * __this, float ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
