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

// System.AppDomainInitializer
struct AppDomainInitializer_t1372758802;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C"  void AppDomainInitializer__ctor_m1326333162 (AppDomainInitializer_t1372758802 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C"  void AppDomainInitializer_Invoke_m1655649116 (AppDomainInitializer_t1372758802 * __this, StringU5BU5D_t2956870243* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1372758802(Il2CppObject* delegate, StringU5BU5D_t2956870243* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AppDomainInitializer_BeginInvoke_m1784264109 (AppDomainInitializer_t1372758802 * __this, StringU5BU5D_t2956870243* ___args, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C"  void AppDomainInitializer_EndInvoke_m4178097146 (AppDomainInitializer_t1372758802 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
