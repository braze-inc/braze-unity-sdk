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

// Mono.Security.X509.X509Crl
struct X509Crl_t2942805322;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3291243611;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"
#include "mscorlib_System_Security_Cryptography_DSA1557551819.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C"  void X509Crl__ctor_m1270803331 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C"  void X509Crl_Parse_m3104051218 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692651 * X509Crl_get_Extensions_m2379703492 (X509Crl_t2942805322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C"  ByteU5BU5D_t58506160* X509Crl_get_Hash_m2225876287 (X509Crl_t2942805322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C"  String_t* X509Crl_get_IssuerName_m3020541034 (X509Crl_t2942805322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C"  DateTime_t339033936  X509Crl_get_NextUpdate_m1145701656 (X509Crl_t2942805322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509Crl_Compare_m1588393905 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___array10, ByteU5BU5D_t58506160* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C"  X509CrlEntry_t3291243611 * X509Crl_GetCrlEntry_m698190412 (X509Crl_t2942805322 * __this, X509Certificate_t273828613 * ___x5090, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C"  X509CrlEntry_t3291243611 * X509Crl_GetCrlEntry_m1555363125 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___serialNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C"  String_t* X509Crl_GetHashName_m3316681040 (X509Crl_t2942805322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Crl_VerifySignature_m1549750422 (X509Crl_t2942805322 * __this, DSA_t1557551819 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Crl_VerifySignature_m1550167496 (X509Crl_t2942805322 * __this, RSA_t1557565273 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Crl_VerifySignature_m4119089195 (X509Crl_t2942805322 * __this, AsymmetricAlgorithm_t4236534322 * ___aa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
