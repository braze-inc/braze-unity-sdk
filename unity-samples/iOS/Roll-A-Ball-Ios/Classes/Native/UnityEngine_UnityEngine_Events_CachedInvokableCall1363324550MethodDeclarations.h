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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t1363324550;
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

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m562163564_gshared (CachedInvokableCall_1_t1363324550 * __this, Object_t3878351788 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m562163564(__this, ___target, ___theFunction, ___argument, method) ((  void (*) (CachedInvokableCall_1_t1363324550 *, Object_t3878351788 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m562163564_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m3206745387_gshared (CachedInvokableCall_1_t1363324550 * __this, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m3206745387(__this, ___args, method) ((  void (*) (CachedInvokableCall_1_t1363324550 *, ObjectU5BU5D_t11523773*, const MethodInfo*))CachedInvokableCall_1_Invoke_m3206745387_gshared)(__this, ___args, method)
