#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t326;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m15656_gshared (Func_2_t326 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define Func_2__ctor_m15656(__this, ___object, ___method, method) (void)Func_2__ctor_m15656_gshared((Func_2_t326 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
 Object_t * Func_2_Invoke_m15658_gshared (Func_2_t326 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m15658(__this, ___arg1, method) (Object_t *)Func_2_Invoke_m15658_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m15660_gshared (Func_2_t326 * __this, Object_t * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m15660(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m15660_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_2_EndInvoke_m15662_gshared (Func_2_t326 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m15662(__this, ___result, method) (Object_t *)Func_2_EndInvoke_m15662_gshared((Func_2_t326 *)__this, (Object_t *)___result, method)
