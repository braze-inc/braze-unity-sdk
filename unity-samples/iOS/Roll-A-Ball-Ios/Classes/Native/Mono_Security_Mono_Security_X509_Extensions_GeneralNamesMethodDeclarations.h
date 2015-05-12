#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1432;
// System.String[]
struct StringU5BU5D_t3;
// Mono.Security.ASN1
struct ASN1_t1384;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
 void GeneralNames__ctor_m5952 (GeneralNames_t1432 * __this, ASN1_t1384 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
 StringU5BU5D_t3* GeneralNames_get_DNSNames_m5953 (GeneralNames_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
 StringU5BU5D_t3* GeneralNames_get_IPAddresses_m5954 (GeneralNames_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
 String_t* GeneralNames_ToString_m5955 (GeneralNames_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
