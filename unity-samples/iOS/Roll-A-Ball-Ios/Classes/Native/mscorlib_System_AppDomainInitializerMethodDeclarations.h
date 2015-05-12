#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomainInitializer
struct AppDomainInitializer_t2232;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t3;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
 void AppDomainInitializer__ctor_m12039 (AppDomainInitializer_t2232 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
 void AppDomainInitializer_Invoke_m12040 (AppDomainInitializer_t2232 * __this, StringU5BU5D_t3* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
 Object_t * AppDomainInitializer_BeginInvoke_m12041 (AppDomainInitializer_t2232 * __this, StringU5BU5D_t3* ___args, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
 void AppDomainInitializer_EndInvoke_m12042 (AppDomainInitializer_t2232 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
