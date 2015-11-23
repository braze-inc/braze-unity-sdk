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

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t1622;
// System.Object
struct Object_t;
// System.Reflection.Module
struct Module_t1605;
// System.ResolveEventArgs
struct ResolveEventArgs_t2021;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ModuleResolveEventHandler__ctor_m12384 (ModuleResolveEventHandler_t1622 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Module_t1605 * ModuleResolveEventHandler_Invoke_m12385 (ModuleResolveEventHandler_t1622 * __this, Object_t * ___sender, ResolveEventArgs_t2021 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Module_t1605 * pinvoke_delegate_wrapper_ModuleResolveEventHandler_t1622(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2021 * ___e);
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ModuleResolveEventHandler_BeginInvoke_m12386 (ModuleResolveEventHandler_t1622 * __this, Object_t * ___sender, ResolveEventArgs_t2021 * ___e, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Module_t1605 * ModuleResolveEventHandler_EndInvoke_m12387 (ModuleResolveEventHandler_t1622 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
