#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityTest.TestResult,System.Boolean>
struct Func_2_t281;
// System.Object
struct Object_t;
// UnityTest.TestResult
struct TestResult_t245;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityTest.TestResult,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1636 (Func_2_t281 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityTest.TestResult,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m16617 (Func_2_t281 * __this, TestResult_t245 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityTest.TestResult,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16618 (Func_2_t281 * __this, TestResult_t245 * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityTest.TestResult,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m16619 (Func_2_t281 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
