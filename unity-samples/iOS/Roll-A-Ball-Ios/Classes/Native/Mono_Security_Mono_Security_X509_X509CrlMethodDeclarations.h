#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1413;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1405;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1412;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// System.Security.Cryptography.DSA
struct DSA_t1390;
// System.Security.Cryptography.RSA
struct RSA_t1388;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m5800 (X509Crl_t1413 * __this, ByteU5BU5D_t97* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m5801 (X509Crl_t1413 * __this, ByteU5BU5D_t97* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t1405 * X509Crl_get_Extensions_m5802 (X509Crl_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t97* X509Crl_get_Hash_m5803 (X509Crl_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m5804 (X509Crl_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t837  X509Crl_get_NextUpdate_m5805 (X509Crl_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m5806 (X509Crl_t1413 * __this, ByteU5BU5D_t97* ___array1, ByteU5BU5D_t97* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t1412 * X509Crl_GetCrlEntry_m5807 (X509Crl_t1413 * __this, X509Certificate_t1406 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t1412 * X509Crl_GetCrlEntry_m5808 (X509Crl_t1413 * __this, ByteU5BU5D_t97* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m5809 (X509Crl_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m5810 (X509Crl_t1413 * __this, DSA_t1390 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m5811 (X509Crl_t1413 * __this, RSA_t1388 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m5812 (X509Crl_t1413 * __this, AsymmetricAlgorithm_t1407 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
