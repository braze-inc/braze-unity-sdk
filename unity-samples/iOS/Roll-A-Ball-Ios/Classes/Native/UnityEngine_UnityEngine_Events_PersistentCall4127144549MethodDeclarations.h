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

// UnityEngine.Events.PersistentCall
struct PersistentCall_t4127144549;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2732610389;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2174897510;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerM1501524350.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase2174897510.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache2732610389.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C"  void PersistentCall__ctor_m3363339247 (PersistentCall_t4127144549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C"  Object_t3878351788 * PersistentCall_get_target_m3400889750 (PersistentCall_t4127144549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C"  String_t* PersistentCall_get_methodName_m3021973351 (PersistentCall_t4127144549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C"  int32_t PersistentCall_get_mode_m1522877562 (PersistentCall_t4127144549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C"  ArgumentCache_t2732610389 * PersistentCall_get_arguments_m1871980514 (PersistentCall_t4127144549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C"  bool PersistentCall_IsValid_m1010437221 (PersistentCall_t4127144549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C"  BaseInvokableCall_t1733537956 * PersistentCall_GetRuntimeCall_m3912860610 (PersistentCall_t4127144549 * __this, UnityEventBase_t2174897510 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C"  BaseInvokableCall_t1733537956 * PersistentCall_GetObjectCall_m1043326447 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___target, MethodInfo_t * ___method, ArgumentCache_t2732610389 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
