#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>>
struct Transform_1_t2878;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Appboy.Utilities.JSONNode
struct JSONNode_t19;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m13909 (Transform_1_t2878 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>>::Invoke(TKey,TValue)
 KeyValuePair_2_t35  Transform_1_Invoke_m13910 (Transform_1_t2878 * __this, String_t* ___key, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m13911 (Transform_1_t2878 * __this, String_t* ___key, JSONNode_t19 * ___value, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.Generic.KeyValuePair`2<System.String,Appboy.Utilities.JSONNode>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t35  Transform_1_EndInvoke_m13912 (Transform_1_t2878 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
