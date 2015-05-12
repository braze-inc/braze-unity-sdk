#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2241;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t252;
// System.ResolveEventArgs
struct ResolveEventArgs_t2300;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m12146 (ResolveEventHandler_t2241 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t252 * ResolveEventHandler_Invoke_m12147 (ResolveEventHandler_t2241 * __this, Object_t * ___sender, ResolveEventArgs_t2300 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m12148 (ResolveEventHandler_t2241 * __this, Object_t * ___sender, ResolveEventArgs_t2300 * ___args, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t252 * ResolveEventHandler_EndInvoke_m12149 (ResolveEventHandler_t2241 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
