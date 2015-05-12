#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t549;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t551;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t981;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
 void UnityEvent_1__ctor_m3468 (UnityEvent_1_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m3473 (UnityEvent_1_t549 * __this, UnityAction_1_t551 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m19240 (UnityEvent_1_t549 * __this, UnityAction_1_t551 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t211 * UnityEvent_1_FindMethod_Impl_m3469 (UnityEvent_1_t549 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t981 * UnityEvent_1_GetDelegate_m3470 (UnityEvent_1_t549 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t981 * UnityEvent_1_GetDelegate_m19241 (Object_t * __this/* static, unused */, UnityAction_1_t551 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
 void UnityEvent_1_Invoke_m3472 (UnityEvent_1_t549 * __this, Color_t12  ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
