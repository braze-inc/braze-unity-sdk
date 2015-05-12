#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t801;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m21998 (Action_1_t801 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
 void Action_1_Invoke_m4973 (Action_1_t801 * __this, bool ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m21999 (Action_1_t801 * __this, bool ___obj, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m22000 (Action_1_t801 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
