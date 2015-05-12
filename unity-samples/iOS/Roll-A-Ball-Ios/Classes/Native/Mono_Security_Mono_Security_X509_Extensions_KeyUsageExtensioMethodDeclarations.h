#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.KeyUsageExtension
struct KeyUsageExtension_t1423;
// Mono.Security.X509.X509Extension
struct X509Extension_t1414;
// System.String
struct String_t;
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"

// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
 void KeyUsageExtension__ctor_m5862 (KeyUsageExtension_t1423 * __this, X509Extension_t1414 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Decode()
 void KeyUsageExtension_Decode_m5863 (KeyUsageExtension_t1423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Encode()
 void KeyUsageExtension_Encode_m5864 (KeyUsageExtension_t1423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.KeyUsageExtension::Support(Mono.Security.X509.Extensions.KeyUsages)
 bool KeyUsageExtension_Support_m5865 (KeyUsageExtension_t1423 * __this, int32_t ___usage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.KeyUsageExtension::ToString()
 String_t* KeyUsageExtension_ToString_m5866 (KeyUsageExtension_t1423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
