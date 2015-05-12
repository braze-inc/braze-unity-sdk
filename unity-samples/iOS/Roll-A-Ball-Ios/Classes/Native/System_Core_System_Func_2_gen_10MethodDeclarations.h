#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t336;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1425 (Func_2_t336 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Type,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m16030 (Func_2_t336 * __this, Type_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Type,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16031 (Func_2_t336 * __this, Type_t * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Type,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m16032 (Func_2_t336 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
