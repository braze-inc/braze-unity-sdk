#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2229;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t239;
// System.ResolveEventArgs
struct ResolveEventArgs_t2288;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m12051 (ResolveEventHandler_t2229 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t239 * ResolveEventHandler_Invoke_m12052 (ResolveEventHandler_t2229 * __this, Object_t * ___sender, ResolveEventArgs_t2288 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m12053 (ResolveEventHandler_t2229 * __this, Object_t * ___sender, ResolveEventArgs_t2288 * ___args, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t239 * ResolveEventHandler_EndInvoke_m12054 (ResolveEventHandler_t2229 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
