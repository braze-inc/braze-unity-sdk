#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t4528;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_2__ctor_m24588_gshared (UnityAction_2_t4528 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method);
#define UnityAction_2__ctor_m24588(__this, ___object, ___method, method) (void)UnityAction_2__ctor_m24588_gshared((UnityAction_2_t4528 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
 void UnityAction_2_Invoke_m24589_gshared (UnityAction_2_t4528 * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
#define UnityAction_2_Invoke_m24589(__this, ___arg0, ___arg1, method) (void)UnityAction_2_Invoke_m24589_gshared((UnityAction_2_t4528 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
 Object_t * UnityAction_2_BeginInvoke_m24590_gshared (UnityAction_2_t4528 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_2_BeginInvoke_m24590(__this, ___arg0, ___arg1, ___callback, ___object, method) (Object_t *)UnityAction_2_BeginInvoke_m24590_gshared((UnityAction_2_t4528 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_2_EndInvoke_m24591_gshared (UnityAction_2_t4528 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_2_EndInvoke_m24591(__this, ___result, method) (void)UnityAction_2_EndInvoke_m24591_gshared((UnityAction_2_t4528 *)__this, (Object_t *)___result, method)
