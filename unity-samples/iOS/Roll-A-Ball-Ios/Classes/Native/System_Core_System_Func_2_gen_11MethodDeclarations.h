#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityTest.TestComponent,System.Boolean>
struct Func_2_t246;
// System.Object
struct Object_t;
// UnityTest.TestComponent
struct TestComponent_t247;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityTest.TestComponent,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1447 (Func_2_t246 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityTest.TestComponent,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m15992 (Func_2_t246 * __this, TestComponent_t247 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityTest.TestComponent,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m15993 (Func_2_t246 * __this, TestComponent_t247 * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityTest.TestComponent,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m15994 (Func_2_t246 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
