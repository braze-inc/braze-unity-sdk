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

// System.ResolveEventHandler
struct ResolveEventHandler_t2783314641;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.ResolveEventArgs
struct ResolveEventArgs_t4124692928;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_ResolveEventArgs4124692928.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ResolveEventHandler__ctor_m2424315661 (ResolveEventHandler_t2783314641 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Assembly_t1882292308 * ResolveEventHandler_Invoke_m4207713166 (ResolveEventHandler_t2783314641 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t4124692928 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1882292308 * pinvoke_delegate_wrapper_ResolveEventHandler_t2783314641(Il2CppObject* delegate, Il2CppObject * ___sender0, ResolveEventArgs_t4124692928 * ___args1);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResolveEventHandler_BeginInvoke_m1625165996 (ResolveEventHandler_t2783314641 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t4124692928 * ___args1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Assembly_t1882292308 * ResolveEventHandler_EndInvoke_m3051650750 (ResolveEventHandler_t2783314641 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
