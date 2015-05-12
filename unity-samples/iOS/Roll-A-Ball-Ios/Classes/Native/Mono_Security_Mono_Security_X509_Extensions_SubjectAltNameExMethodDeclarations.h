#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t1437;
// System.String[]
struct StringU5BU5D_t3;
// Mono.Security.X509.X509Extension
struct X509Extension_t1425;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
 void SubjectAltNameExtension__ctor_m5965 (SubjectAltNameExtension_t1437 * __this, X509Extension_t1425 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
 void SubjectAltNameExtension_Decode_m5966 (SubjectAltNameExtension_t1437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
 StringU5BU5D_t3* SubjectAltNameExtension_get_DNSNames_m5967 (SubjectAltNameExtension_t1437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
 StringU5BU5D_t3* SubjectAltNameExtension_get_IPAddresses_m5968 (SubjectAltNameExtension_t1437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
 String_t* SubjectAltNameExtension_ToString_m5969 (SubjectAltNameExtension_t1437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
