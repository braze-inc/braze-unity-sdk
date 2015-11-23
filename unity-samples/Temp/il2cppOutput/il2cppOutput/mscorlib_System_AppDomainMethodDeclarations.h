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

// System.AppDomain
struct AppDomain_t293;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t965;
// System.String
struct String_t;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t214;
// System.Reflection.Assembly
struct Assembly_t215;
// System.Security.Policy.Evidence
struct Evidence_t1623;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1730;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_add_UnhandledException_m5079 (AppDomain_t293 * __this, UnhandledExceptionEventHandler_t965 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_remove_UnhandledException_m11567 (AppDomain_t293 * __this, UnhandledExceptionEventHandler_t965 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m11568 (AppDomain_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t293 * AppDomain_getCurDomain_m11569 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t293 * AppDomain_get_CurrentDomain_m1181 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies(System.Boolean)
extern "C" AssemblyU5BU5D_t214* AppDomain_GetAssemblies_m11570 (AppDomain_t293 * __this, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
extern "C" AssemblyU5BU5D_t214* AppDomain_GetAssemblies_m1182 (AppDomain_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t215 * AppDomain_LoadAssembly_m11571 (AppDomain_t293 * __this, String_t* ___assemblyRef, Evidence_t1623 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t215 * AppDomain_Load_m11572 (AppDomain_t293 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t215 * AppDomain_Load_m11573 (AppDomain_t293 * __this, String_t* ___assemblyString, Evidence_t1623 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1730 * AppDomain_InternalSetContext_m11574 (Object_t * __this /* static, unused */, Context_t1730 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1730 * AppDomain_InternalGetContext_m11575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1730 * AppDomain_InternalGetDefaultContext_m11576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m11577 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m11578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m11579 (AppDomain_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t215 * AppDomain_DoTypeResolve_m11580 (AppDomain_t293 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
