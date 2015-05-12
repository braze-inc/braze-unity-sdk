#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t4511;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Object[]
struct ObjectU5BU5D_t112;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_2__ctor_m24375_gshared (InvokableCall_2_t4511 * __this, Object_t * ___target, MethodInfo_t198 * ___theFunction, MethodInfo* method);
#define InvokableCall_2__ctor_m24375(__this, ___target, ___theFunction, method) (void)InvokableCall_2__ctor_m24375_gshared((InvokableCall_2_t4511 *)__this, (Object_t *)___target, (MethodInfo_t198 *)___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
 void InvokableCall_2_Invoke_m24376_gshared (InvokableCall_2_t4511 * __this, ObjectU5BU5D_t112* ___args, MethodInfo* method);
#define InvokableCall_2_Invoke_m24376(__this, ___args, method) (void)InvokableCall_2_Invoke_m24376_gshared((InvokableCall_2_t4511 *)__this, (ObjectU5BU5D_t112*)___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_2_Find_m24377_gshared (InvokableCall_2_t4511 * __this, Object_t * ___targetObj, MethodInfo_t198 * ___method, MethodInfo* method);
#define InvokableCall_2_Find_m24377(__this, ___targetObj, ___method, method) (bool)InvokableCall_2_Find_m24377_gshared((InvokableCall_2_t4511 *)__this, (Object_t *)___targetObj, (MethodInfo_t198 *)___method, method)
