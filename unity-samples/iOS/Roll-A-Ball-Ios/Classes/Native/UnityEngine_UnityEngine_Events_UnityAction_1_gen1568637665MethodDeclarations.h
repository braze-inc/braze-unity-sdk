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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1568637665;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m3352102596_gshared (UnityAction_1_t1568637665 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m3352102596(__this, ___object, ___method, method) ((  void (*) (UnityAction_1_t1568637665 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3352102596_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m3753038862_gshared (UnityAction_1_t1568637665 * __this, Color_t1588175760  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m3753038862(__this, ___arg0, method) ((  void (*) (UnityAction_1_t1568637665 *, Color_t1588175760 , const MethodInfo*))UnityAction_1_Invoke_m3753038862_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m3065986105_gshared (UnityAction_1_t1568637665 * __this, Color_t1588175760  ___arg0, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m3065986105(__this, ___arg0, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_1_t1568637665 *, Color_t1588175760 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m3065986105_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m4211808480_gshared (UnityAction_1_t1568637665 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m4211808480(__this, ___result, method) ((  void (*) (UnityAction_1_t1568637665 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m4211808480_gshared)(__this, ___result, method)
