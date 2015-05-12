#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t978;
// UnityEngine.Object
struct Object_t70;
struct Object_t70_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t969;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t979;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m4928 (PersistentCall_t978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t70 * PersistentCall_get_target_m4929 (PersistentCall_t978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m4930 (PersistentCall_t978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m4931 (PersistentCall_t978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t969 * PersistentCall_get_arguments_m4932 (PersistentCall_t978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m4933 (PersistentCall_t978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t970 * PersistentCall_GetRuntimeCall_m4934 (PersistentCall_t978 * __this, UnityEventBase_t979 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t970 * PersistentCall_GetObjectCall_m4935 (Object_t * __this/* static, unused */, Object_t70 * ___target, MethodInfo_t198 * ___method, ArgumentCache_t969 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
