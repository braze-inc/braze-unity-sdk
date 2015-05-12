#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1132;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
 void Dispatcher__ctor_m5234 (Dispatcher_t1132 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
 Object_t * Dispatcher_Invoke_m5235 (Dispatcher_t1132 * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
 Object_t * Dispatcher_BeginInvoke_m5236 (Dispatcher_t1132 * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
 Object_t * Dispatcher_EndInvoke_m5237 (Dispatcher_t1132 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
