#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t338;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t76;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_5MethodDeclarations.h"
#define Func_2__ctor_m16012(__this, ___object, ___method, method) (void)Func_2__ctor_m15656_gshared((Func_2_t326 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::Invoke(T)
#define Func_2_Invoke_m16013(__this, ___arg1, method) (Object_t*)Func_2_Invoke_m15658_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16014(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m15660_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16015(__this, ___result, method) (Object_t*)Func_2_EndInvoke_m15662_gshared((Func_2_t326 *)__this, (Object_t *)___result, method)
