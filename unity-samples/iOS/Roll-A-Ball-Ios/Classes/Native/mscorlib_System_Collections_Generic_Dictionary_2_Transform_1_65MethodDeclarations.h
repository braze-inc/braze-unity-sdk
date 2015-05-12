#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
struct Transform_1_t4502;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t601;
struct Event_t601_marshaled;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m24339 (Transform_1_t4502 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4490  Transform_1_Invoke_m24340 (Transform_1_t4502 * __this, Event_t601 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m24341 (Transform_1_t4502 * __this, Event_t601 * ___key, int32_t ___value, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4490  Transform_1_EndInvoke_m24342 (Transform_1_t4502 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
