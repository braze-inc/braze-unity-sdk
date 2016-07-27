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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3505791693;
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

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m3402788068_gshared (UnityAction_1_t3505791693 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m3402788068(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t3505791693 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3402788068_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m2612362786_gshared (UnityAction_1_t3505791693 * __this, Vector2_t3525329788  ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m2612362786(__this, ___arg00, method) ((  void (*) (UnityAction_1_t3505791693 *, Vector2_t3525329788 , const MethodInfo*))UnityAction_1_Invoke_m2612362786_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m3621024589_gshared (UnityAction_1_t3505791693 * __this, Vector2_t3525329788  ___arg00, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m3621024589(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t3505791693 *, Vector2_t3525329788 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m3621024589_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m822604020_gshared (UnityAction_1_t3505791693 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m822604020(__this, ___result0, method) ((  void (*) (UnityAction_1_t3505791693 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m822604020_gshared)(__this, ___result0, method)
