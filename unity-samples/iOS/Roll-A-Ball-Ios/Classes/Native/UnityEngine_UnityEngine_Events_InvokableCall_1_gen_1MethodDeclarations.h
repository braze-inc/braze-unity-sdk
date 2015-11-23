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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2419;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t662;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16317_gshared (InvokableCall_1_t2419 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m16317(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2419 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m16317_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16318_gshared (InvokableCall_1_t2419 * __this, UnityAction_1_t662 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m16318(__this, ___action, method) (( void (*) (InvokableCall_1_t2419 *, UnityAction_1_t662 *, const MethodInfo*))InvokableCall_1__ctor_m16318_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16319_gshared (InvokableCall_1_t2419 * __this, ObjectU5BU5D_t87* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m16319(__this, ___args, method) (( void (*) (InvokableCall_1_t2419 *, ObjectU5BU5D_t87*, const MethodInfo*))InvokableCall_1_Invoke_m16319_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16320_gshared (InvokableCall_1_t2419 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m16320(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2419 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m16320_gshared)(__this, ___targetObj, ___method, method)
