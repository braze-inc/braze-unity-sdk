#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>
struct Transform_1_t3891;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m20665 (Transform_1_t3891 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::Invoke(TKey,TValue)
 Graphic_t579 * Transform_1_Invoke_m20666 (Transform_1_t3891 * __this, Graphic_t579 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m20667 (Transform_1_t3891 * __this, Graphic_t579 * ___key, int32_t ___value, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,UnityEngine.UI.Graphic>::EndInvoke(System.IAsyncResult)
 Graphic_t579 * Transform_1_EndInvoke_m20668 (Transform_1_t3891 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
