#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t4533;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.Object[]
struct ObjectU5BU5D_t96;

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_4__ctor_m24599_gshared (InvokableCall_4_t4533 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method);
#define InvokableCall_4__ctor_m24599(__this, ___target, ___theFunction, method) (void)InvokableCall_4__ctor_m24599_gshared((InvokableCall_4_t4533 *)__this, (Object_t *)___target, (MethodInfo_t211 *)___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
 void InvokableCall_4_Invoke_m24600_gshared (InvokableCall_4_t4533 * __this, ObjectU5BU5D_t96* ___args, MethodInfo* method);
#define InvokableCall_4_Invoke_m24600(__this, ___args, method) (void)InvokableCall_4_Invoke_m24600_gshared((InvokableCall_4_t4533 *)__this, (ObjectU5BU5D_t96*)___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_4_Find_m24601_gshared (InvokableCall_4_t4533 * __this, Object_t * ___targetObj, MethodInfo_t211 * ___method, MethodInfo* method);
#define InvokableCall_4_Find_m24601(__this, ___targetObj, ___method, method) (bool)InvokableCall_4_Find_m24601_gshared((InvokableCall_4_t4533 *)__this, (Object_t *)___targetObj, (MethodInfo_t211 *)___method, method)
