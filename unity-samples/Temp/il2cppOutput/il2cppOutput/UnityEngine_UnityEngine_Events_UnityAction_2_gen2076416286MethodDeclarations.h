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

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t2076416286;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m1077712043_gshared (UnityAction_2_t2076416286 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m1077712043(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t2076416286 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m1077712043_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1848147712_gshared (UnityAction_2_t2076416286 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m1848147712(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t2076416286 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityAction_2_Invoke_m1848147712_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m1411513831_gshared (UnityAction_2_t2076416286 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m1411513831(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t2076416286 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m1411513831_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m2463306811_gshared (UnityAction_2_t2076416286 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m2463306811(__this, ___result0, method) ((  void (*) (UnityAction_2_t2076416286 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m2463306811_gshared)(__this, ___result0, method)
