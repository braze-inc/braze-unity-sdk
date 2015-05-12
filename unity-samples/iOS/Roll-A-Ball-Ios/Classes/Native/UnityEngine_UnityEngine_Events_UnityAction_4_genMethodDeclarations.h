#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t4514;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_4__ctor_m24392_gshared (UnityAction_4_t4514 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define UnityAction_4__ctor_m24392(__this, ___object, ___method, method) (void)UnityAction_4__ctor_m24392_gshared((UnityAction_4_t4514 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
 void UnityAction_4_Invoke_m24393_gshared (UnityAction_4_t4514 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
#define UnityAction_4_Invoke_m24393(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) (void)UnityAction_4_Invoke_m24393_gshared((UnityAction_4_t4514 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
 Object_t * UnityAction_4_BeginInvoke_m24394_gshared (UnityAction_4_t4514 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_4_BeginInvoke_m24394(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (Object_t *)UnityAction_4_BeginInvoke_m24394_gshared((UnityAction_4_t4514 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_4_EndInvoke_m24395_gshared (UnityAction_4_t4514 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_4_EndInvoke_m24395(__this, ___result, method) (void)UnityAction_4_EndInvoke_m24395_gshared((UnityAction_4_t4514 *)__this, (Object_t *)___result, method)
