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

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t3193939828;
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

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_4__ctor_m2430556805_gshared (UnityAction_4_t3193939828 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_4__ctor_m2430556805(__this, ___object, ___method, method) ((  void (*) (UnityAction_4_t3193939828 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_4__ctor_m2430556805_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C"  void UnityAction_4_Invoke_m295067525_gshared (UnityAction_4_t3193939828 * __this, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, const MethodInfo* method);
#define UnityAction_4_Invoke_m295067525(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) ((  void (*) (UnityAction_4_t3193939828 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityAction_4_Invoke_m295067525_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_4_BeginInvoke_m3784231950_gshared (UnityAction_4_t3193939828 * __this, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_4_BeginInvoke_m3784231950(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_4_t3193939828 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_4_BeginInvoke_m3784231950_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_4_EndInvoke_m2334578453_gshared (UnityAction_4_t3193939828 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_4_EndInvoke_m2334578453(__this, ___result, method) ((  void (*) (UnityAction_4_t3193939828 *, Il2CppObject *, const MethodInfo*))UnityAction_4_EndInvoke_m2334578453_gshared)(__this, ___result, method)
