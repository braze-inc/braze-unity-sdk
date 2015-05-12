#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1818;
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

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
 void KeyGeneratedEventHandler__ctor_m8775 (KeyGeneratedEventHandler_t1818 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
 void KeyGeneratedEventHandler_Invoke_m8776 (KeyGeneratedEventHandler_t1818 * __this, Object_t * ___sender, EventArgs_t1396 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * KeyGeneratedEventHandler_BeginInvoke_m8777 (KeyGeneratedEventHandler_t1818 * __this, Object_t * ___sender, EventArgs_t1396 * ___e, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
 void KeyGeneratedEventHandler_EndInvoke_m8778 (KeyGeneratedEventHandler_t1818 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
