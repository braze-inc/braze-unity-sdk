#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>,System.Boolean>
struct Func_2_t104;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m564 (Func_2_t104 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m13919 (Func_2_t104 * __this, KeyValuePair_2_t35  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m13920 (Func_2_t104 * __this, KeyValuePair_2_t35  ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m13921 (Func_2_t104 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
