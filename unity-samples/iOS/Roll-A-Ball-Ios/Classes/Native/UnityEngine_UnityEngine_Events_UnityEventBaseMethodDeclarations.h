#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t979;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t978;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Type[]
struct TypeU5BU5D_t146;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
 void UnityEventBase__ctor_m4944 (UnityEventBase_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3222 (UnityEventBase_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3223 (UnityEventBase_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
 MethodInfo_t198 * UnityEventBase_FindMethod_m4945 (UnityEventBase_t979 * __this, PersistentCall_t978 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
 MethodInfo_t198 * UnityEventBase_FindMethod_m4946 (UnityEventBase_t979 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
 void UnityEventBase_DirtyPersistentCalls_m4947 (UnityEventBase_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
 void UnityEventBase_RebuildPersistentCallsIfNeeded_m4948 (UnityEventBase_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
 void UnityEventBase_AddCall_m4949 (UnityEventBase_t979 * __this, BaseInvokableCall_t970 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void UnityEventBase_RemoveListener_m4950 (UnityEventBase_t979 * __this, Object_t * ___targetObj, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
 void UnityEventBase_Invoke_m4951 (UnityEventBase_t979 * __this, ObjectU5BU5D_t112* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
 String_t* UnityEventBase_ToString_m3221 (UnityEventBase_t979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
 MethodInfo_t198 * UnityEventBase_GetValidMethodInfo_m4952 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t146* ___argumentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
