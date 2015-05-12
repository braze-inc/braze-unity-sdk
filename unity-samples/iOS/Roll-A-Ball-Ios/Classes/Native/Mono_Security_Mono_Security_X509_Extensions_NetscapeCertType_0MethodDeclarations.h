#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct NetscapeCertTypeExtension_t1436;
// Mono.Security.X509.X509Extension
struct X509Extension_t1425;
// System.String
struct String_t;
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"

// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::.ctor(Mono.Security.X509.X509Extension)
 void NetscapeCertTypeExtension__ctor_m5961 (NetscapeCertTypeExtension_t1436 * __this, X509Extension_t1425 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Decode()
 void NetscapeCertTypeExtension_Decode_m5962 (NetscapeCertTypeExtension_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Support(Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes)
 bool NetscapeCertTypeExtension_Support_m5963 (NetscapeCertTypeExtension_t1436 * __this, int32_t ___usage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ToString()
 String_t* NetscapeCertTypeExtension_ToString_m5964 (NetscapeCertTypeExtension_t1436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
