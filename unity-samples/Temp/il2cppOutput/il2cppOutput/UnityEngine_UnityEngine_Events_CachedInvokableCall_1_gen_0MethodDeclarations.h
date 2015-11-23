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
struct CachedInvokableCall_1_t987;
// UnityEngine.Object
struct Object_t253;
struct Object_t253_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5150_gshared (CachedInvokableCall_1_t987 * __this, Object_t253 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5150(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t987 *, Object_t253 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m5150_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20574_gshared (CachedInvokableCall_1_t987 * __this, ObjectU5BU5D_t87* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20574(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t987 *, ObjectU5BU5D_t87*, const MethodInfo*))CachedInvokableCall_1_Invoke_m20574_gshared)(__this, ___args, method)
