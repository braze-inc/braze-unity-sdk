#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t348;
// System.String
struct String_t;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t251;
// System.Reflection.Assembly
struct Assembly_t252;
// System.Security.Policy.Evidence
struct Evidence_t1975;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2049;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m11342 (AppDomain_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t348 * AppDomain_getCurDomain_m11343 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t348 * AppDomain_get_CurrentDomain_m1518 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies(System.Boolean)
 AssemblyU5BU5D_t251* AppDomain_GetAssemblies_m11344 (AppDomain_t348 * __this, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
 AssemblyU5BU5D_t251* AppDomain_GetAssemblies_m1519 (AppDomain_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t252 * AppDomain_LoadAssembly_m11345 (AppDomain_t348 * __this, String_t* ___assemblyRef, Evidence_t1975 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t252 * AppDomain_Load_m11346 (AppDomain_t348 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t252 * AppDomain_Load_m11347 (AppDomain_t348 * __this, String_t* ___assemblyString, Evidence_t1975 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t2049 * AppDomain_InternalGetContext_m11348 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t2049 * AppDomain_InternalGetDefaultContext_m11349 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m11350 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m11351 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m11352 (AppDomain_t348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
