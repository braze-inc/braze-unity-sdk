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

// System.Func`2<System.Object,System.Int32>
struct Func_2_t4146091719;
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

// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3664646529_gshared (Func_2_t4146091719 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m3664646529(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t4146091719 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m3664646529_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
extern "C"  int32_t Func_2_Invoke_m3426833477_gshared (Func_2_t4146091719 * __this, Il2CppObject * ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m3426833477(__this, ___arg10, method) ((  int32_t (*) (Func_2_t4146091719 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m3426833477_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Object,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m3471527160_gshared (Func_2_t4146091719 * __this, Il2CppObject * ___arg10, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m3471527160(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t4146091719 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m3471527160_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_2_EndInvoke_m2021309615_gshared (Func_2_t4146091719 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m2021309615(__this, ___result0, method) ((  int32_t (*) (Func_2_t4146091719 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2021309615_gshared)(__this, ___result0, method)
