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

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t817568325;
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

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2698834494_gshared (UnityAction_1_t817568325 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2698834494(__this, ___object, ___method, method) ((  void (*) (UnityAction_1_t817568325 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2698834494_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m774762876_gshared (UnityAction_1_t817568325 * __this, Il2CppObject * ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m774762876(__this, ___arg0, method) ((  void (*) (UnityAction_1_t817568325 *, Il2CppObject *, const MethodInfo*))UnityAction_1_Invoke_m774762876_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m1225830823_gshared (UnityAction_1_t817568325 * __this, Il2CppObject * ___arg0, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m1225830823(__this, ___arg0, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_1_t817568325 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m1225830823_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m4220465998_gshared (UnityAction_1_t817568325 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m4220465998(__this, ___result, method) ((  void (*) (UnityAction_1_t817568325 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m4220465998_gshared)(__this, ___result, method)
