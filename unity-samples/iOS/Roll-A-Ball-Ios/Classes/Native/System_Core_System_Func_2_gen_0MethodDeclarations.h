#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_t280;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t70;
struct Object_t70_marshaled;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1089 (Func_2_t280 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.Object,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m14402 (Func_2_t280 * __this, Object_t70 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityEngine.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m14403 (Func_2_t280 * __this, Object_t70 * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m14404 (Func_2_t280 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
