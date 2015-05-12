#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t339;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m15876_gshared (Func_2_t339 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method);
#define Func_2__ctor_m15876(__this, ___object, ___method, method) (void)Func_2__ctor_m15876_gshared((Func_2_t339 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
 Object_t * Func_2_Invoke_m15878_gshared (Func_2_t339 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m15878(__this, ___arg1, method) (Object_t *)Func_2_Invoke_m15878_gshared((Func_2_t339 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m15880_gshared (Func_2_t339 * __this, Object_t * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m15880(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m15880_gshared((Func_2_t339 *)__this, (Object_t *)___arg1, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_2_EndInvoke_m15882_gshared (Func_2_t339 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m15882(__this, ___result, method) (Object_t *)Func_2_EndInvoke_m15882_gshared((Func_2_t339 *)__this, (Object_t *)___result, method)
