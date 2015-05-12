#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction
struct UnityAction_t562;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
 void UnityAction__ctor_m3575 (UnityAction_t562 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::Invoke()
 void UnityAction_Invoke_m3427 (UnityAction_t562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * UnityAction_BeginInvoke_m4966 (UnityAction_t562 * __this, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
 void UnityAction_EndInvoke_m4967 (UnityAction_t562 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
