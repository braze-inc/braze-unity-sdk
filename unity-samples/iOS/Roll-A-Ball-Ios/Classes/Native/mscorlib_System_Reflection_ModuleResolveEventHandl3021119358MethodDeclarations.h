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
struct ModuleResolveEventHandler_t3021119358;
// System.Object
struct Il2CppObject;
// System.Reflection.Module
struct Module_t206139610;
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

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ModuleResolveEventHandler__ctor_m1364124346 (ModuleResolveEventHandler_t3021119358 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Module_t206139610 * ModuleResolveEventHandler_Invoke_m2550379485 (ModuleResolveEventHandler_t3021119358 * __this, Il2CppObject * ___sender, ResolveEventArgs_t4124692928 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Module_t206139610 * pinvoke_delegate_wrapper_ModuleResolveEventHandler_t3021119358(Il2CppObject* delegate, Il2CppObject * ___sender, ResolveEventArgs_t4124692928 * ___e);
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ModuleResolveEventHandler_BeginInvoke_m3285111655 (ModuleResolveEventHandler_t3021119358 * __this, Il2CppObject * ___sender, ResolveEventArgs_t4124692928 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Module_t206139610 * ModuleResolveEventHandler_EndInvoke_m236958287 (ModuleResolveEventHandler_t3021119358 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
