#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityTest.AssertionComponent,System.Boolean>
struct Func_2_t260;
// System.Object
struct Object_t;
// UnityTest.AssertionComponent
struct AssertionComponent_t135;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityTest.AssertionComponent,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1500 (Func_2_t260 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityTest.AssertionComponent,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m16484 (Func_2_t260 * __this, AssertionComponent_t135 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityTest.AssertionComponent,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16485 (Func_2_t260 * __this, AssertionComponent_t135 * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityTest.AssertionComponent,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m16486 (Func_2_t260 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
