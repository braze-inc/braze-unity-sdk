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

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct NetscapeCertTypeExtension_t1387961723;
// Mono.Security.X509.X509Extension
struct X509Extension_t1510964269;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1510964268.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netscap588297365.h"

// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void NetscapeCertTypeExtension__ctor_m3785381751 (NetscapeCertTypeExtension_t1387961723 * __this, X509Extension_t1510964269 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Decode()
extern "C"  void NetscapeCertTypeExtension_Decode_m4024937351 (NetscapeCertTypeExtension_t1387961723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Support(Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes)
extern "C"  bool NetscapeCertTypeExtension_Support_m1416151043 (NetscapeCertTypeExtension_t1387961723 * __this, int32_t ___usage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ToString()
extern "C"  String_t* NetscapeCertTypeExtension_ToString_m3439723074 (NetscapeCertTypeExtension_t1387961723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
