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

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t1663182458;
// Mono.Security.X509.X509Extension
struct X509Extension_t1510964269;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1510964268.h"

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void SubjectAltNameExtension__ctor_m607242584 (SubjectAltNameExtension_t1663182458 * __this, X509Extension_t1510964269 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C"  void SubjectAltNameExtension_Decode_m3473224134 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C"  StringU5BU5D_t2956870243* SubjectAltNameExtension_get_DNSNames_m3652648031 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C"  StringU5BU5D_t2956870243* SubjectAltNameExtension_get_IPAddresses_m3152105661 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C"  String_t* SubjectAltNameExtension_ToString_m2980757505 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
