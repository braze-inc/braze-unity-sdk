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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2607;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19105_gshared (Predicate_1_t2607 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m19105(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2607 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m19105_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19106_gshared (Predicate_1_t2607 * __this, Vector4_t260  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19106(__this, ___obj, method) (( bool (*) (Predicate_1_t2607 *, Vector4_t260 , const MethodInfo*))Predicate_1_Invoke_m19106_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19107_gshared (Predicate_1_t2607 * __this, Vector4_t260  ___obj, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19107(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2607 *, Vector4_t260 , AsyncCallback_t552 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19107_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19108_gshared (Predicate_1_t2607 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19108(__this, ___result, method) (( bool (*) (Predicate_1_t2607 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19108_gshared)(__this, ___result, method)
