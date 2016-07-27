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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t4096293686;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2975892103_gshared (Predicate_1_t4096293686 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2975892103(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t4096293686 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2975892103_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2217101919_gshared (Predicate_1_t4096293686 * __this, Vector2_t3525329788  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m2217101919(__this, ___obj0, method) ((  bool (*) (Predicate_1_t4096293686 *, Vector2_t3525329788 , const MethodInfo*))Predicate_1_Invoke_m2217101919_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3964024626_gshared (Predicate_1_t4096293686 * __this, Vector2_t3525329788  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3964024626(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t4096293686 *, Vector2_t3525329788 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m3964024626_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2181069525_gshared (Predicate_1_t4096293686 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2181069525(__this, ___result0, method) ((  bool (*) (Predicate_1_t4096293686 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m2181069525_gshared)(__this, ___result0, method)
