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

// System.Array/Swapper
struct Swapper_t4148259466;
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

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
extern "C"  void Swapper__ctor_m1046757893 (Swapper_t4148259466 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
extern "C"  void Swapper_Invoke_m3507571047 (Swapper_t4148259466 * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Swapper_t4148259466(Il2CppObject* delegate, int32_t ___i, int32_t ___j);
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Swapper_BeginInvoke_m3139859620 (Swapper_t4148259466 * __this, int32_t ___i, int32_t ___j, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
extern "C"  void Swapper_EndInvoke_m843808405 (Swapper_t4148259466 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
