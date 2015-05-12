#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t989;
// UnityEngine.Object
struct Object_t151;
struct Object_t151_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t980;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t981;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t990;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m5023 (PersistentCall_t989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t151 * PersistentCall_get_target_m5024 (PersistentCall_t989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m5025 (PersistentCall_t989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m5026 (PersistentCall_t989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t980 * PersistentCall_get_arguments_m5027 (PersistentCall_t989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m5028 (PersistentCall_t989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t981 * PersistentCall_GetRuntimeCall_m5029 (PersistentCall_t989 * __this, UnityEventBase_t990 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t981 * PersistentCall_GetObjectCall_m5030 (Object_t * __this/* static, unused */, Object_t151 * ___target, MethodInfo_t211 * ___method, ArgumentCache_t980 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
