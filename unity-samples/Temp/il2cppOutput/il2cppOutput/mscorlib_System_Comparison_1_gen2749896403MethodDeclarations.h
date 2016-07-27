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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t2749896403;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m2670394222_gshared (Comparison_1_t2749896403 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m2670394222(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t2749896403 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2670394222_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1503417360_gshared (Comparison_1_t2749896403 * __this, RaycastHit_t46221527  ___x0, RaycastHit_t46221527  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m1503417360(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t2749896403 *, RaycastHit_t46221527 , RaycastHit_t46221527 , const MethodInfo*))Comparison_1_Invoke_m1503417360_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m589252441_gshared (Comparison_1_t2749896403 * __this, RaycastHit_t46221527  ___x0, RaycastHit_t46221527  ___y1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m589252441(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t2749896403 *, RaycastHit_t46221527 , RaycastHit_t46221527 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m589252441_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2910831196_gshared (Comparison_1_t2749896403 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2910831196(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t2749896403 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2910831196_gshared)(__this, ___result0, method)
