#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t379822999;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3833532446;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void HeaderHandler__ctor_m2526578283 (HeaderHandler_t379822999 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C"  Il2CppObject * HeaderHandler_Invoke_m1835336033 (HeaderHandler_t379822999 * __this, HeaderU5BU5D_t3833532446* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Il2CppObject * pinvoke_delegate_wrapper_HeaderHandler_t379822999(Il2CppObject* delegate, HeaderU5BU5D_t3833532446* ___headers);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HeaderHandler_BeginInvoke_m2880476263 (HeaderHandler_t379822999 * __this, HeaderU5BU5D_t3833532446* ___headers, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * HeaderHandler_EndInvoke_m4263089894 (HeaderHandler_t379822999 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
