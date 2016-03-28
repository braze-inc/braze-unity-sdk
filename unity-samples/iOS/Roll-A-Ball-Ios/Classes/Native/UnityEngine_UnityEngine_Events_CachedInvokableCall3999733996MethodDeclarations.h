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

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t3999733996;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m1791898438_gshared (CachedInvokableCall_1_t3999733996 * __this, Object_t3878351788 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m1791898438(__this, ___target, ___theFunction, ___argument, method) ((  void (*) (CachedInvokableCall_1_t3999733996 *, Object_t3878351788 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m1791898438_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m3818847761_gshared (CachedInvokableCall_1_t3999733996 * __this, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m3818847761(__this, ___args, method) ((  void (*) (CachedInvokableCall_1_t3999733996 *, ObjectU5BU5D_t11523773*, const MethodInfo*))CachedInvokableCall_1_Invoke_m3818847761_gshared)(__this, ___args, method)
