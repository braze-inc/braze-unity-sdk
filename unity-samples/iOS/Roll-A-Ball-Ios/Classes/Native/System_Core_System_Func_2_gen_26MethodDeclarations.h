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
struct Func_2_t322;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m14790_gshared (Func_2_t322 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m14790(__this, ___object, ___method, method) (( void (*) (Func_2_t322 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m14790_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m14792_gshared (Func_2_t322 * __this, KeyValuePair_2_t118  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m14792(__this, ___arg1, method) (( int32_t (*) (Func_2_t322 *, KeyValuePair_2_t118 , const MethodInfo*))Func_2_Invoke_m14792_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m14794_gshared (Func_2_t322 * __this, KeyValuePair_2_t118  ___arg1, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m14794(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t322 *, KeyValuePair_2_t118 , AsyncCallback_t552 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m14794_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m14796_gshared (Func_2_t322 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m14796(__this, ___result, method) (( int32_t (*) (Func_2_t322 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m14796_gshared)(__this, ___result, method)
