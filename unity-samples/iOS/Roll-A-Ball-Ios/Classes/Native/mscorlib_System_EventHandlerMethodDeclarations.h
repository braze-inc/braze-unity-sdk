#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler
struct EventHandler_t2230;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1396;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
 void EventHandler__ctor_m12047 (EventHandler_t2230 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
 void EventHandler_Invoke_m12048 (EventHandler_t2230 * __this, Object_t * ___sender, EventArgs_t1396 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * EventHandler_BeginInvoke_m12049 (EventHandler_t2230 * __this, Object_t * ___sender, EventArgs_t1396 * ___e, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
 void EventHandler_EndInvoke_m12050 (EventHandler_t2230 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
