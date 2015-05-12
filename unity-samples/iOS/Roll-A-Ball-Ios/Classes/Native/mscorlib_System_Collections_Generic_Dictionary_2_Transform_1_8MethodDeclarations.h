#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.DictionaryEntry>
struct Transform_1_t2870;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m13905 (Transform_1_t2870 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1564  Transform_1_Invoke_m13906 (Transform_1_t2870 * __this, String_t* ___key, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m13907 (Transform_1_t2870 * __this, String_t* ___key, JSONNode_t19 * ___value, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Appboy.Utilities.JSONNode,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1564  Transform_1_EndInvoke_m13908 (Transform_1_t2870 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
