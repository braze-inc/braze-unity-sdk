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

// System.Func`2<UnityEngine.RuntimePlatform,System.Object>
struct Func_2_t314;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RuntimePlatform.h"

// System.Void System.Func`2<UnityEngine.RuntimePlatform,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m14337_gshared (Func_2_t314 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m14337(__this, ___object, ___method, method) (( void (*) (Func_2_t314 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m14337_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.RuntimePlatform,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m14339_gshared (Func_2_t314 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m14339(__this, ___arg1, method) (( Object_t * (*) (Func_2_t314 *, int32_t, const MethodInfo*))Func_2_Invoke_m14339_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.RuntimePlatform,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m14341_gshared (Func_2_t314 * __this, int32_t ___arg1, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m14341(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t314 *, int32_t, AsyncCallback_t552 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m14341_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.RuntimePlatform,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m14343_gshared (Func_2_t314 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m14343(__this, ___result, method) (( Object_t * (*) (Func_2_t314 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m14343_gshared)(__this, ___result, method)
