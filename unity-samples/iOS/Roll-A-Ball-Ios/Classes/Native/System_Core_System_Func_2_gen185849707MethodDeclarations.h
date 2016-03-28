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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct Func_2_t185849707;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2905551390_gshared (Func_2_t185849707 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2905551390(__this, ___object, ___method, method) ((  void (*) (Func_2_t185849707 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2905551390_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Invoke(T)
extern "C"  int32_t Func_2_Invoke_m2499057156_gshared (Func_2_t185849707 * __this, KeyValuePair_2_t3312956448  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2499057156(__this, ___arg1, method) ((  int32_t (*) (Func_2_t185849707 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Func_2_Invoke_m2499057156_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m4240992307_gshared (Func_2_t185849707 * __this, KeyValuePair_2_t3312956448  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m4240992307(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t185849707 *, KeyValuePair_2_t3312956448 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m4240992307_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_2_EndInvoke_m2144360528_gshared (Func_2_t185849707 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2144360528(__this, ___result, method) ((  int32_t (*) (Func_2_t185849707 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2144360528_gshared)(__this, ___result, method)
