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

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t191467246;
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

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m1354516801_gshared (UnityAction_1_t191467246 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1354516801(__this, ___object, ___method, method) ((  void (*) (UnityAction_1_t191467246 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1354516801_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m2333712627_gshared (UnityAction_1_t191467246 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m2333712627(__this, ___arg0, method) ((  void (*) (UnityAction_1_t191467246 *, bool, const MethodInfo*))UnityAction_1_Invoke_m2333712627_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m987196326_gshared (UnityAction_1_t191467246 * __this, bool ___arg0, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m987196326(__this, ___arg0, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_1_t191467246 *, bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m987196326_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m535265605_gshared (UnityAction_1_t191467246 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m535265605(__this, ___result, method) ((  void (*) (UnityAction_1_t191467246 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m535265605_gshared)(__this, ___result, method)
