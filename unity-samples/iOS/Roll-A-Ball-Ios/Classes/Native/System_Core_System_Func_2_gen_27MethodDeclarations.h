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

// System.Func`2<System.Object,System.Single>
struct Func_2_t2559;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m18387_gshared (Func_2_t2559 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m18387(__this, ___object, ___method, method) (( void (*) (Func_2_t2559 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m18387_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m18388_gshared (Func_2_t2559 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m18388(__this, ___arg1, method) (( float (*) (Func_2_t2559 *, Object_t *, const MethodInfo*))Func_2_Invoke_m18388_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m18390_gshared (Func_2_t2559 * __this, Object_t * ___arg1, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m18390(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2559 *, Object_t *, AsyncCallback_t552 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m18390_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m18392_gshared (Func_2_t2559 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m18392(__this, ___result, method) (( float (*) (Func_2_t2559 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m18392_gshared)(__this, ___result, method)
