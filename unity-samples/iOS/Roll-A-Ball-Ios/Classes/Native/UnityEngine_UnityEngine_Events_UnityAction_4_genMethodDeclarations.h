#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t4532;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_4__ctor_m24602_gshared (UnityAction_4_t4532 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method);
#define UnityAction_4__ctor_m24602(__this, ___object, ___method, method) (void)UnityAction_4__ctor_m24602_gshared((UnityAction_4_t4532 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
 void UnityAction_4_Invoke_m24603_gshared (UnityAction_4_t4532 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
#define UnityAction_4_Invoke_m24603(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) (void)UnityAction_4_Invoke_m24603_gshared((UnityAction_4_t4532 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
 Object_t * UnityAction_4_BeginInvoke_m24604_gshared (UnityAction_4_t4532 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_4_BeginInvoke_m24604(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (Object_t *)UnityAction_4_BeginInvoke_m24604_gshared((UnityAction_4_t4532 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (Object_t *)___arg2, (Object_t *)___arg3, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_4_EndInvoke_m24605_gshared (UnityAction_4_t4532 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_4_EndInvoke_m24605(__this, ___result, method) (void)UnityAction_4_EndInvoke_m24605_gshared((UnityAction_4_t4532 *)__this, (Object_t *)___result, method)
