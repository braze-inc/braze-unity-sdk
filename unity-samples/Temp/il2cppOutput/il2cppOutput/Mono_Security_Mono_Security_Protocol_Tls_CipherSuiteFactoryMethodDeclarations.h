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

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1309;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSupportedCiphers(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" CipherSuiteCollection_t1309 * CipherSuiteFactory_GetSupportedCiphers_m6766 (Object_t * __this /* static, unused */, int32_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetTls1SupportedCiphers()
extern "C" CipherSuiteCollection_t1309 * CipherSuiteFactory_GetTls1SupportedCiphers_m6767 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSsl3SupportedCiphers()
extern "C" CipherSuiteCollection_t1309 * CipherSuiteFactory_GetSsl3SupportedCiphers_m6768 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
