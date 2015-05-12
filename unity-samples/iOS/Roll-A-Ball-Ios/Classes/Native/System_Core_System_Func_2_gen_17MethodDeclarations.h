#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>
struct Func_2_t279;
// System.Object
struct Object_t;
// UnityTest.TestResult
struct TestResult_t245;
// UnityTest.TestComponent
struct TestComponent_t260;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_5MethodDeclarations.h"
#define Func_2__ctor_m1623(__this, ___object, ___method, method) (void)Func_2__ctor_m15876_gshared((Func_2_t339 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// TResult System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>::Invoke(T)
#define Func_2_Invoke_m16611(__this, ___arg1, method) (TestResult_t245 *)Func_2_Invoke_m15878_gshared((Func_2_t339 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16612(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m15880_gshared((Func_2_t339 *)__this, (Object_t *)___arg1, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16613(__this, ___result, method) (TestResult_t245 *)Func_2_EndInvoke_m15882_gshared((Func_2_t339 *)__this, (Object_t *)___result, method)
