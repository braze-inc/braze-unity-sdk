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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t4580879;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t817568325;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m3494792797_gshared (InvokableCall_1_t4580879 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m3494792797(__this, ___target, ___theFunction, method) ((  void (*) (InvokableCall_1_t4580879 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m3494792797_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m2810088059_gshared (InvokableCall_1_t4580879 * __this, UnityAction_1_t817568325 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m2810088059(__this, ___action, method) ((  void (*) (InvokableCall_1_t4580879 *, UnityAction_1_t817568325 *, const MethodInfo*))InvokableCall_1__ctor_m2810088059_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m689855796_gshared (InvokableCall_1_t4580879 * __this, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m689855796(__this, ___args, method) ((  void (*) (InvokableCall_1_t4580879 *, ObjectU5BU5D_t11523773*, const MethodInfo*))InvokableCall_1_Invoke_m689855796_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m1349477752_gshared (InvokableCall_1_t4580879 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m1349477752(__this, ___targetObj, ___method, method) ((  bool (*) (InvokableCall_1_t4580879 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m1349477752_gshared)(__this, ___targetObj, ___method, method)
