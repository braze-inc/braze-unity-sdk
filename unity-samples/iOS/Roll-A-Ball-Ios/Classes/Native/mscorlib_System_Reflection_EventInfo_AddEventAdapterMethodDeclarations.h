#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1972;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t730;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
 void AddEventAdapter__ctor_m9934 (AddEventAdapter_t1972 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
 void AddEventAdapter_Invoke_m9935 (AddEventAdapter_t1972 * __this, Object_t * ____this, Delegate_t730 * ___dele, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
 Object_t * AddEventAdapter_BeginInvoke_m9936 (AddEventAdapter_t1972 * __this, Object_t * ____this, Delegate_t730 * ___dele, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
 void AddEventAdapter_EndInvoke_m9937 (AddEventAdapter_t1972 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
