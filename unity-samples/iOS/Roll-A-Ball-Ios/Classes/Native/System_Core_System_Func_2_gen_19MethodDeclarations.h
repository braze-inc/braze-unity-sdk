#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.Component,System.Boolean>
struct Func_2_t351;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t263;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.Component,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1526 (Func_2_t351 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.Component,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m16453 (Func_2_t351 * __this, Component_t263 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityEngine.Component,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16454 (Func_2_t351 * __this, Component_t263 * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.Component,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m16455 (Func_2_t351 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
