#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AsyncCallback
struct AsyncCallback_t473;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
 void AsyncCallback__ctor_m6594 (AsyncCallback_t473 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
 void AsyncCallback_Invoke_m8471 (AsyncCallback_t473 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
 Object_t * AsyncCallback_BeginInvoke_m6592 (AsyncCallback_t473 * __this, Object_t * ___ar, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
 void AsyncCallback_EndInvoke_m8472 (AsyncCallback_t473 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
