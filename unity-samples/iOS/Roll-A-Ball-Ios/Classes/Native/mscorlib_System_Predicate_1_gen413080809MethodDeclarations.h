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

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t413080809;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1072563380_gshared (Predicate_1_t413080809 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1072563380(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t413080809 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1072563380_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3562076050_gshared (Predicate_1_t413080809 * __this, Color32_t4137084207  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3562076050(__this, ___obj, method) ((  bool (*) (Predicate_1_t413080809 *, Color32_t4137084207 , const MethodInfo*))Predicate_1_Invoke_m3562076050_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2338878821_gshared (Predicate_1_t413080809 * __this, Color32_t4137084207  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2338878821(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t413080809 *, Color32_t4137084207 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2338878821_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m4225244034_gshared (Predicate_1_t413080809 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m4225244034(__this, ___result, method) ((  bool (*) (Predicate_1_t413080809 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m4225244034_gshared)(__this, ___result, method)
