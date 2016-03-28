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

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t836903542;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3660574010;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Delegate3660574010.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C"  void AddEventAdapter__ctor_m2445699769 (AddEventAdapter_t836903542 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C"  void AddEventAdapter_Invoke_m4107836009 (AddEventAdapter_t836903542 * __this, Il2CppObject * ____this, Delegate_t3660574010 * ___dele, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t836903542(Il2CppObject* delegate, Il2CppObject * ____this, Delegate_t3660574010 * ___dele);
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AddEventAdapter_BeginInvoke_m2800012162 (AddEventAdapter_t836903542 * __this, Il2CppObject * ____this, Delegate_t3660574010 * ___dele, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C"  void AddEventAdapter_EndInvoke_m3991281993 (AddEventAdapter_t836903542 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
