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

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2182287890;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_4__ctor_m4162891446_gshared (InvokableCall_4_t2182287890 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_4__ctor_m4162891446(__this, ___target, ___theFunction, method) ((  void (*) (InvokableCall_4_t2182287890 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_4__ctor_m4162891446_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_4_Invoke_m2239232717_gshared (InvokableCall_4_t2182287890 * __this, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define InvokableCall_4_Invoke_m2239232717(__this, ___args, method) ((  void (*) (InvokableCall_4_t2182287890 *, ObjectU5BU5D_t11523773*, const MethodInfo*))InvokableCall_4_Invoke_m2239232717_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_4_Find_m2015184255_gshared (InvokableCall_4_t2182287890 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_4_Find_m2015184255(__this, ___targetObj, ___method, method) ((  bool (*) (InvokableCall_4_t2182287890 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_4_Find_m2015184255_gshared)(__this, ___targetObj, ___method, method)
