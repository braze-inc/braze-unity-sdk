#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t158;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t162;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1243 (Func_2_t158 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m14668 (Func_2_t158 * __this, FieldInfo_t162 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m14669 (Func_2_t158 * __this, FieldInfo_t162 * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m14670 (Func_2_t158 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
