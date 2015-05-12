#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t531;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m3357 (Comparison_1_t531 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m19012 (Comparison_1_t531 * __this, RaycastHit_t439  ___x, RaycastHit_t439  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m19013 (Comparison_1_t531 * __this, RaycastHit_t439  ___x, RaycastHit_t439  ___y, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m19014 (Comparison_1_t531 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
