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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t1989425629;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m165005445_gshared (CachedInvokableCall_1_t1989425629 * __this, Object_t3878351788 * ___target, MethodInfo_t * ___theFunction, Il2CppObject * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m165005445(__this, ___target, ___theFunction, ___argument, method) ((  void (*) (CachedInvokableCall_1_t1989425629 *, Object_t3878351788 *, MethodInfo_t *, Il2CppObject *, const MethodInfo*))CachedInvokableCall_1__ctor_m165005445_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m3570141426_gshared (CachedInvokableCall_1_t1989425629 * __this, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m3570141426(__this, ___args, method) ((  void (*) (CachedInvokableCall_1_t1989425629 *, ObjectU5BU5D_t11523773*, const MethodInfo*))CachedInvokableCall_1_Invoke_m3570141426_gshared)(__this, ___args, method)
