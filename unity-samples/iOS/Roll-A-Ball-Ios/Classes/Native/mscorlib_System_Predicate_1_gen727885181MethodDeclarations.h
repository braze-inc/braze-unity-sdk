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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t727885181;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_UILineInfo156921283.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m44565326_gshared (Predicate_1_t727885181 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m44565326(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t727885181 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m44565326_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2836886388_gshared (Predicate_1_t727885181 * __this, UILineInfo_t156921283  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2836886388(__this, ___obj, method) ((  bool (*) (Predicate_1_t727885181 *, UILineInfo_t156921283 , const MethodInfo*))Predicate_1_Invoke_m2836886388_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m94051843_gshared (Predicate_1_t727885181 * __this, UILineInfo_t156921283  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m94051843(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t727885181 *, UILineInfo_t156921283 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m94051843_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m25903328_gshared (Predicate_1_t727885181 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25903328(__this, ___result, method) ((  bool (*) (Predicate_1_t727885181 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m25903328_gshared)(__this, ___result, method)
