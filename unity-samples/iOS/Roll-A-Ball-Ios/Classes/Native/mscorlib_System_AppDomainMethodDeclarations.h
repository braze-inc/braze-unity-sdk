#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t335;
// System.String
struct String_t;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t238;
// System.Reflection.Assembly
struct Assembly_t239;
// System.Security.Policy.Evidence
struct Evidence_t1963;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2037;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m11247 (AppDomain_t335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t335 * AppDomain_getCurDomain_m11248 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t335 * AppDomain_get_CurrentDomain_m1412 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies(System.Boolean)
 AssemblyU5BU5D_t238* AppDomain_GetAssemblies_m11249 (AppDomain_t335 * __this, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
 AssemblyU5BU5D_t238* AppDomain_GetAssemblies_m1413 (AppDomain_t335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t239 * AppDomain_LoadAssembly_m11250 (AppDomain_t335 * __this, String_t* ___assemblyRef, Evidence_t1963 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t239 * AppDomain_Load_m11251 (AppDomain_t335 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t239 * AppDomain_Load_m11252 (AppDomain_t335 * __this, String_t* ___assemblyString, Evidence_t1963 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t2037 * AppDomain_InternalGetContext_m11253 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t2037 * AppDomain_InternalGetDefaultContext_m11254 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m11255 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m11256 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m11257 (AppDomain_t335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
