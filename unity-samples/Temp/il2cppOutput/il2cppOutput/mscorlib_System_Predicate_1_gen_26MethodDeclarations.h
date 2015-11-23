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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2475;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17127_gshared (Predicate_1_t2475 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17127(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2475 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17127_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17128_gshared (Predicate_1_t2475 * __this, UIVertex_t560  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17128(__this, ___obj, method) (( bool (*) (Predicate_1_t2475 *, UIVertex_t560 , const MethodInfo*))Predicate_1_Invoke_m17128_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17129_gshared (Predicate_1_t2475 * __this, UIVertex_t560  ___obj, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17129(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2475 *, UIVertex_t560 , AsyncCallback_t552 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17129_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17130_gshared (Predicate_1_t2475 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17130(__this, ___result, method) (( bool (*) (Predicate_1_t2475 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17130_gshared)(__this, ___result, method)
