#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall
struct InvokableCall_t971;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Object[]
struct ObjectU5BU5D_t112;

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall__ctor_m4925 (InvokableCall_t971 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
 void InvokableCall_Invoke_m4926 (InvokableCall_t971 * __this, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_Find_m4927 (InvokableCall_t971 * __this, Object_t * ___targetObj, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
