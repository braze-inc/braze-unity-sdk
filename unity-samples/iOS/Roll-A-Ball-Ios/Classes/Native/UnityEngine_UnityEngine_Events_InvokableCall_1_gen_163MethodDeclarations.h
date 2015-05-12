#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t4535;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4536;
// System.Object[]
struct ObjectU5BU5D_t96;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m24613 (InvokableCall_1_t4535 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m24614 (InvokableCall_1_t4535 * __this, UnityAction_1_t4536 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m24615 (InvokableCall_1_t4535 * __this, ObjectU5BU5D_t96* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m24616 (InvokableCall_1_t4535 * __this, Object_t * ___targetObj, MethodInfo_t211 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
