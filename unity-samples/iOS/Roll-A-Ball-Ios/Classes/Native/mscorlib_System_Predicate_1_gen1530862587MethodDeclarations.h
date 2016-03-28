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
struct Predicate_1_t1530862587;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResu959898689.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3721624866_gshared (Predicate_1_t1530862587 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3721624866(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1530862587 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3721624866_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3513546528_gshared (Predicate_1_t1530862587 * __this, RaycastResult_t959898689  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3513546528(__this, ___obj, method) ((  bool (*) (Predicate_1_t1530862587 *, RaycastResult_t959898689 , const MethodInfo*))Predicate_1_Invoke_m3513546528_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2814560687_gshared (Predicate_1_t1530862587 * __this, RaycastResult_t959898689  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2814560687(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t1530862587 *, RaycastResult_t959898689 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2814560687_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3277815988_gshared (Predicate_1_t1530862587 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3277815988(__this, ___result, method) ((  bool (*) (Predicate_1_t1530862587 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3277815988_gshared)(__this, ___result, method)
