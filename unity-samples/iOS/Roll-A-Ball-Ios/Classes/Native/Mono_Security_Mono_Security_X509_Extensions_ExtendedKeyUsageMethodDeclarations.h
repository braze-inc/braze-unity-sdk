#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t1431;
// System.Collections.ArrayList
struct ArrayList_t1383;
// Mono.Security.X509.X509Extension
struct X509Extension_t1425;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
 void ExtendedKeyUsageExtension__ctor_m5947 (ExtendedKeyUsageExtension_t1431 * __this, X509Extension_t1425 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
 void ExtendedKeyUsageExtension_Decode_m5948 (ExtendedKeyUsageExtension_t1431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
 void ExtendedKeyUsageExtension_Encode_m5949 (ExtendedKeyUsageExtension_t1431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
 ArrayList_t1383 * ExtendedKeyUsageExtension_get_KeyPurpose_m5950 (ExtendedKeyUsageExtension_t1431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
 String_t* ExtendedKeyUsageExtension_ToString_m5951 (ExtendedKeyUsageExtension_t1431 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
