#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t4512;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_3__ctor_m24385_gshared (UnityAction_3_t4512 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define UnityAction_3__ctor_m24385(__this, ___object, ___method, method) (void)UnityAction_3__ctor_m24385_gshared((UnityAction_3_t4512 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
 void UnityAction_3_Invoke_m24386_gshared (UnityAction_3_t4512 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define UnityAction_3_Invoke_m24386(__this, ___arg0, ___arg1, ___arg2, method) (void)UnityAction_3_Invoke_m24386_gshared((UnityAction_3_t4512 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (Object_t *)___arg2, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
 Object_t * UnityAction_3_BeginInvoke_m24387_gshared (UnityAction_3_t4512 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_3_BeginInvoke_m24387(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method) (Object_t *)UnityAction_3_BeginInvoke_m24387_gshared((UnityAction_3_t4512 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (Object_t *)___arg2, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_3_EndInvoke_m24388_gshared (UnityAction_3_t4512 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_3_EndInvoke_m24388(__this, ___result, method) (void)UnityAction_3_EndInvoke_m24388_gshared((UnityAction_3_t4512 *)__this, (Object_t *)___result, method)
