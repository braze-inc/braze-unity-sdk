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

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3698454801;
// System.Object
struct Il2CppObject;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2839448448;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AssemblyLoadEventArgs2839448448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AssemblyLoadEventHandler__ctor_m1325133929 (AssemblyLoadEventHandler_t3698454801 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C"  void AssemblyLoadEventHandler_Invoke_m2285851689 (AssemblyLoadEventHandler_t3698454801 * __this, Il2CppObject * ___sender, AssemblyLoadEventArgs_t2839448448 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t3698454801(Il2CppObject* delegate, Il2CppObject * ___sender, AssemblyLoadEventArgs_t2839448448 * ___args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssemblyLoadEventHandler_BeginInvoke_m812195344 (AssemblyLoadEventHandler_t3698454801 * __this, Il2CppObject * ___sender, AssemblyLoadEventArgs_t2839448448 * ___args, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AssemblyLoadEventHandler_EndInvoke_m1285684985 (AssemblyLoadEventHandler_t3698454801 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
