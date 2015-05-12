#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent
struct UnityEvent_t556;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t981;

// System.Void UnityEngine.Events.UnityEvent::.ctor()
 void UnityEvent__ctor_m3485 (UnityEvent_t556 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t211 * UnityEvent_FindMethod_Impl_m3486 (UnityEvent_t556 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t981 * UnityEvent_GetDelegate_m3487 (UnityEvent_t556 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
 void UnityEvent_Invoke_m3489 (UnityEvent_t556 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
