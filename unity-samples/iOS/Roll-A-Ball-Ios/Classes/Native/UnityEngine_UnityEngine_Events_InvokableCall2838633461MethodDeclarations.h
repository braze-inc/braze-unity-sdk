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

// UnityEngine.Events.InvokableCall
struct InvokableCall_t2838633461;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t909267611;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "UnityEngine_UnityEngine_Events_UnityAction909267611.h"

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall__ctor_m1927467228 (InvokableCall_t2838633461 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall__ctor_m3567423952 (InvokableCall_t2838633461 * __this, UnityAction_t909267611 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C"  void InvokableCall_Invoke_m1513455731 (InvokableCall_t2838633461 * __this, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_Find_m2076119333 (InvokableCall_t2838633461 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
