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

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t986;
// UnityEngine.Object
struct Object_t253;
struct Object_t253_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5149_gshared (CachedInvokableCall_1_t986 * __this, Object_t253 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5149(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t986 *, Object_t253 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m5149_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20573_gshared (CachedInvokableCall_1_t986 * __this, ObjectU5BU5D_t87* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20573(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t986 *, ObjectU5BU5D_t87*, const MethodInfo*))CachedInvokableCall_1_Invoke_m20573_gshared)(__this, ___args, method)
