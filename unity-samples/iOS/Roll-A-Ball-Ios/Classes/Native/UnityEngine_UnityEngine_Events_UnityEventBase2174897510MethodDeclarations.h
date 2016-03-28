#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2174897510;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t4127144549;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall4127144549.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerM1501524350.h"
#include "mscorlib_System_Type2779229935.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall1733537956.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C"  void UnityEventBase__ctor_m199506446 (UnityEventBase_t2174897510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1699382396 (UnityEventBase_t2174897510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1605173738 (UnityEventBase_t2174897510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m1166071979 (UnityEventBase_t2174897510 * __this, PersistentCall_t4127144549 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m113598831 (UnityEventBase_t2174897510 * __this, String_t* ___name, Il2CppObject * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C"  void UnityEventBase_DirtyPersistentCalls_m1636785090 (UnityEventBase_t2174897510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C"  void UnityEventBase_RebuildPersistentCallsIfNeeded_m4147202091 (UnityEventBase_t2174897510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void UnityEventBase_AddCall_m1246572149 (UnityEventBase_t2174897510 * __this, BaseInvokableCall_t1733537956 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C"  void UnityEventBase_RemoveListener_m276725997 (UnityEventBase_t2174897510 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C"  void UnityEventBase_Invoke_m3681078084 (UnityEventBase_t2174897510 * __this, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern "C"  String_t* UnityEventBase_ToString_m249191135 (UnityEventBase_t2174897510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C"  MethodInfo_t * UnityEventBase_GetValidMethodInfo_m2325301202 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, String_t* ___functionName, TypeU5BU5D_t3431720054* ___argumentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
