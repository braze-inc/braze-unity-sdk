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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t4062822289;
// Mono.Security.Protocol.Tls.Context
struct Context_t4123145639;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4123145639.h"

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
extern "C"  void ClientSessionCache__cctor_m3222200124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
extern "C"  void ClientSessionCache_Add_m1176188661 (Il2CppObject * __this /* static, unused */, String_t* ___host0, ByteU5BU5D_t58506160* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
extern "C"  ByteU5BU5D_t58506160* ClientSessionCache_FromHost_m3499660871 (Il2CppObject * __this /* static, unused */, String_t* ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
extern "C"  ClientSessionInfo_t4062822289 * ClientSessionCache_FromContext_m1274339950 (Il2CppObject * __this /* static, unused */, Context_t4123145639 * ___context0, bool ___checkValidity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
extern "C"  bool ClientSessionCache_SetContextInCache_m1823103460 (Il2CppObject * __this /* static, unused */, Context_t4123145639 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
extern "C"  bool ClientSessionCache_SetContextFromCache_m2249085247 (Il2CppObject * __this /* static, unused */, Context_t4123145639 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
