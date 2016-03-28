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

// System.Threading.ThreadStart
struct ThreadStart_t2758142267;
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

// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C"  void ThreadStart__ctor_m346361139 (ThreadStart_t2758142267 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::Invoke()
extern "C"  void ThreadStart_Invoke_m225334093 (ThreadStart_t2758142267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t2758142267(Il2CppObject* delegate);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ThreadStart_BeginInvoke_m4084423702 (ThreadStart_t2758142267 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C"  void ThreadStart_EndInvoke_m3441234115 (ThreadStart_t2758142267 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
