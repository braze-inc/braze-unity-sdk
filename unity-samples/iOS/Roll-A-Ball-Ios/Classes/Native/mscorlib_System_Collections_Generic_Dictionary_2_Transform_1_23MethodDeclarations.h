#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<ITestResult>,System.Collections.Generic.List`1<ITestResult>>
struct Transform_1_t3297;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<ITestResult>
struct List_1_t354;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<ITestResult>,System.Collections.Generic.List`1<ITestResult>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m16542(__this, ___object, ___method, method) (void)Transform_1__ctor_m13708_gshared((Transform_1_t2858 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<ITestResult>,System.Collections.Generic.List`1<ITestResult>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m16543(__this, ___key, ___value, method) (List_1_t354 *)Transform_1_Invoke_m13709_gshared((Transform_1_t2858 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<ITestResult>,System.Collections.Generic.List`1<ITestResult>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m16544(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m13710_gshared((Transform_1_t2858 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<ITestResult>,System.Collections.Generic.List`1<ITestResult>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m16545(__this, ___result, method) (List_1_t354 *)Transform_1_EndInvoke_m13711_gshared((Transform_1_t2858 *)__this, (Object_t *)___result, method)
