#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t4001;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t4000;
// System.Object[]
struct ObjectU5BU5D_t112;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m21299 (InvokableCall_1_t4001 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m21300 (InvokableCall_1_t4001 * __this, UnityAction_1_t4000 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m21301 (InvokableCall_1_t4001 * __this, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m21302 (InvokableCall_1_t4001 * __this, Object_t * ___targetObj, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
