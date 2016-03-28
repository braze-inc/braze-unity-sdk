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

// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;
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

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3944524044_gshared (Func_2_t2135783352 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m3944524044(__this, ___object, ___method, method) ((  void (*) (Func_2_t2135783352 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3944524044_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Func_2_Invoke_m1924616534_gshared (Func_2_t2135783352 * __this, Il2CppObject * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1924616534(__this, ___arg1, method) ((  Il2CppObject * (*) (Func_2_t2135783352 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m1924616534_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4281703301_gshared (Func_2_t2135783352 * __this, Il2CppObject * ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m4281703301(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t2135783352 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m4281703301_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_2_EndInvoke_m4118168638_gshared (Func_2_t2135783352 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4118168638(__this, ___result, method) ((  Il2CppObject * (*) (Func_2_t2135783352 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m4118168638_gshared)(__this, ___result, method)
