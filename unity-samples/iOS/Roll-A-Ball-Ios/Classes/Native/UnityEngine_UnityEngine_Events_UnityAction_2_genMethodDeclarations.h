#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t4510;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_2__ctor_m24378_gshared (UnityAction_2_t4510 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define UnityAction_2__ctor_m24378(__this, ___object, ___method, method) (void)UnityAction_2__ctor_m24378_gshared((UnityAction_2_t4510 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
 void UnityAction_2_Invoke_m24379_gshared (UnityAction_2_t4510 * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
#define UnityAction_2_Invoke_m24379(__this, ___arg0, ___arg1, method) (void)UnityAction_2_Invoke_m24379_gshared((UnityAction_2_t4510 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
 Object_t * UnityAction_2_BeginInvoke_m24380_gshared (UnityAction_2_t4510 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_2_BeginInvoke_m24380(__this, ___arg0, ___arg1, ___callback, ___object, method) (Object_t *)UnityAction_2_BeginInvoke_m24380_gshared((UnityAction_2_t4510 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_2_EndInvoke_m24381_gshared (UnityAction_2_t4510 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_2_EndInvoke_m24381(__this, ___result, method) (void)UnityAction_2_EndInvoke_m24381_gshared((UnityAction_2_t4510 *)__this, (Object_t *)___result, method)
