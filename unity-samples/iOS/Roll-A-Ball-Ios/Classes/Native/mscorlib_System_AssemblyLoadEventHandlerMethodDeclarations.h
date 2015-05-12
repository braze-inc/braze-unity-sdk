#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t2228;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2236;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
 void AssemblyLoadEventHandler__ctor_m12043 (AssemblyLoadEventHandler_t2228 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
 void AssemblyLoadEventHandler_Invoke_m12044 (AssemblyLoadEventHandler_t2228 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2236 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
 Object_t * AssemblyLoadEventHandler_BeginInvoke_m12045 (AssemblyLoadEventHandler_t2228 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2236 * ___args, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
 void AssemblyLoadEventHandler_EndInvoke_m12046 (AssemblyLoadEventHandler_t2228 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
