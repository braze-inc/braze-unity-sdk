#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t2760;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m13055_gshared (Comparison_1_t2760 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define Comparison_1__ctor_m13055(__this, ___object, ___method, method) (void)Comparison_1__ctor_m13055_gshared((Comparison_1_t2760 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m13056_gshared (Comparison_1_t2760 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparison_1_Invoke_m13056(__this, ___x, ___y, method) (int32_t)Comparison_1_Invoke_m13056_gshared((Comparison_1_t2760 *)__this, (Object_t *)___x, (Object_t *)___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m13057_gshared (Comparison_1_t2760 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m13057(__this, ___x, ___y, ___callback, ___object, method) (Object_t *)Comparison_1_BeginInvoke_m13057_gshared((Comparison_1_t2760 *)__this, (Object_t *)___x, (Object_t *)___y, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m13058_gshared (Comparison_1_t2760 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m13058(__this, ___result, method) (int32_t)Comparison_1_EndInvoke_m13058_gshared((Comparison_1_t2760 *)__this, (Object_t *)___result, method)
