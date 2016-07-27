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
extern "C"  void Predicate_1__ctor_m3721624866_gshared (Predicate_1_t1530862587 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m3721624866(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t1530862587 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3721624866_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3513546528_gshared (Predicate_1_t1530862587 * __this, RaycastResult_t959898689  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3513546528(__this, ___obj0, method) ((  bool (*) (Predicate_1_t1530862587 *, RaycastResult_t959898689 , const MethodInfo*))Predicate_1_Invoke_m3513546528_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2814560687_gshared (Predicate_1_t1530862587 * __this, RaycastResult_t959898689  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2814560687(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t1530862587 *, RaycastResult_t959898689 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2814560687_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3277815988_gshared (Predicate_1_t1530862587 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3277815988(__this, ___result0, method) ((  bool (*) (Predicate_1_t1530862587 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3277815988_gshared)(__this, ___result0, method)
