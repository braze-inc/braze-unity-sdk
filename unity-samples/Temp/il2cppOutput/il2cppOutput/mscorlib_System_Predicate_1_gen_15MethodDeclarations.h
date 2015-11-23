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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2366;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15513_gshared (Predicate_1_t2366 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15513(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2366 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15513_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15514_gshared (Predicate_1_t2366 * __this, RaycastResult_t460  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15514(__this, ___obj, method) (( bool (*) (Predicate_1_t2366 *, RaycastResult_t460 , const MethodInfo*))Predicate_1_Invoke_m15514_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15515_gshared (Predicate_1_t2366 * __this, RaycastResult_t460  ___obj, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15515(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2366 *, RaycastResult_t460 , AsyncCallback_t552 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15515_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15516_gshared (Predicate_1_t2366 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15516(__this, ___result, method) (( bool (*) (Predicate_1_t2366 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15516_gshared)(__this, ___result, method)
