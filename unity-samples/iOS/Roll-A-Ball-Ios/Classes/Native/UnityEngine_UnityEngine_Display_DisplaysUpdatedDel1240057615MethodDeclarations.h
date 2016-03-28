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

// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1240057615;
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

// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DisplaysUpdatedDelegate__ctor_m3468699627 (DisplaysUpdatedDelegate_t1240057615 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C"  void DisplaysUpdatedDelegate_Invoke_m3958989829 (DisplaysUpdatedDelegate_t1240057615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t1240057615(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DisplaysUpdatedDelegate_BeginInvoke_m3264685798 (DisplaysUpdatedDelegate_t1240057615 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void DisplaysUpdatedDelegate_EndInvoke_m3466741627 (DisplaysUpdatedDelegate_t1240057615 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
