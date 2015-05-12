#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.RuntimePlatform,System.String>
struct Func_2_t224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"

// System.Void System.Func`2<UnityEngine.RuntimePlatform,System.String>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1460 (Func_2_t224 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.RuntimePlatform,System.String>::Invoke(T)
 String_t* Func_2_Invoke_m15861 (Func_2_t224 * __this, int32_t ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityEngine.RuntimePlatform,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m15862 (Func_2_t224 * __this, int32_t ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.RuntimePlatform,System.String>::EndInvoke(System.IAsyncResult)
 String_t* Func_2_EndInvoke_m15863 (Func_2_t224 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
