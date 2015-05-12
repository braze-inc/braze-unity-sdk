#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Extension
struct X509Extension_t1831;
// Mono.Security.ASN1
struct ASN1_t1821;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t80;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
 void X509Extension__ctor_m8875 (X509Extension_t1831 * __this, ASN1_t1821 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
 void X509Extension_Decode_m8876 (X509Extension_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
 bool X509Extension_Equals_m8877 (X509Extension_t1831 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
 int32_t X509Extension_GetHashCode_m8878 (X509Extension_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
 void X509Extension_WriteLine_m8879 (X509Extension_t1831 * __this, StringBuilder_t80 * ___sb, int32_t ___n, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
 String_t* X509Extension_ToString_m8880 (X509Extension_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
