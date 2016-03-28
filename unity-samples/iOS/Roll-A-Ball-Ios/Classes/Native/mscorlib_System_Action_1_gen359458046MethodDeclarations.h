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

// System.Action`1<System.Boolean>
struct Action_1_t359458046;
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

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m88247757_gshared (Action_1_t359458046 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m88247757(__this, ___object, ___method, method) ((  void (*) (Action_1_t359458046 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m88247757_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C"  void Action_1_Invoke_m3594021162_gshared (Action_1_t359458046 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3594021162(__this, ___obj, method) ((  void (*) (Action_1_t359458046 *, bool, const MethodInfo*))Action_1_Invoke_m3594021162_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m647183148_gshared (Action_1_t359458046 * __this, bool ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m647183148(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t359458046 *, bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m647183148_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1601629789_gshared (Action_1_t359458046 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1601629789(__this, ___result, method) ((  void (*) (Action_1_t359458046 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1601629789_gshared)(__this, ___result, method)
