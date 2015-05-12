#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1990;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
 void GetterAdapter__ctor_m10082 (GetterAdapter_t1990 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
 Object_t * GetterAdapter_Invoke_m10083 (GetterAdapter_t1990 * __this, Object_t * ____this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * GetterAdapter_BeginInvoke_m10084 (GetterAdapter_t1990 * __this, Object_t * ____this, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
 Object_t * GetterAdapter_EndInvoke_m10085 (GetterAdapter_t1990 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
