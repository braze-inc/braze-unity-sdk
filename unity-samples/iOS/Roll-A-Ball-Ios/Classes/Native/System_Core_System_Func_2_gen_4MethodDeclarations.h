#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Type,System.String>
struct Func_2_t215;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Type,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_5MethodDeclarations.h"
#define Func_2__ctor_m1363(__this, ___object, ___method, method) (void)Func_2__ctor_m15656_gshared((Func_2_t326 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// TResult System.Func`2<System.Type,System.String>::Invoke(T)
#define Func_2_Invoke_m15657(__this, ___arg1, method) (String_t*)Func_2_Invoke_m15658_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Type,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m15659(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m15660_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Type,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m15661(__this, ___result, method) (String_t*)Func_2_EndInvoke_m15662_gshared((Func_2_t326 *)__this, (Object_t *)___result, method)
