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

// Mono.Security.X509.PKCS12
struct PKCS12_t2950126080;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t839208017;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t636832623;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2184496331;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1278398632;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Mono_Security_Mono_Security_PKCS7_EncryptedData636832622.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter2524359253.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Pri2184496330.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C"  void PKCS12__ctor_m2645615037 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C"  void PKCS12__ctor_m1570997648 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C"  void PKCS12__ctor_m3732648396 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C"  void PKCS12__cctor_m4222558608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C"  void PKCS12_Decode_m3657725204 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C"  void PKCS12_Finalize_m2970192261 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C"  void PKCS12_set_Password_m255122339 (PKCS12_t2950126080 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C"  int32_t PKCS12_get_IterationCount_m1936461050 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C"  void PKCS12_set_IterationCount_m4214894503 (PKCS12_t2950126080 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C"  ArrayList_t2121638921 * PKCS12_get_Keys_m3197281000 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C"  X509CertificateCollection_t3336811651 * PKCS12_get_Certificates_m425759547 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C"  RandomNumberGenerator_t2174318432 * PKCS12_get_RNG_m944600768 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS12_Compare_m1707054334 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___expected, ByteU5BU5D_t58506160* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C"  SymmetricAlgorithm_t839208017 * PKCS12_GetSymmetricAlgorithm_m2527458883 (PKCS12_t2950126080 * __this, String_t* ___algorithmOid, ByteU5BU5D_t58506160* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS12_Decrypt_m2583016519 (PKCS12_t2950126080 * __this, String_t* ___algorithmOid, ByteU5BU5D_t58506160* ___salt, int32_t ___iterationCount, ByteU5BU5D_t58506160* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C"  ByteU5BU5D_t58506160* PKCS12_Decrypt_m1699029656 (PKCS12_t2950126080 * __this, EncryptedData_t636832623 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS12_Encrypt_m3283559711 (PKCS12_t2950126080 * __this, String_t* ___algorithmOid, ByteU5BU5D_t58506160* ___salt, int32_t ___iterationCount, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C"  DSAParameters_t2524359253  PKCS12_GetExistingParameters_m1851295361 (PKCS12_t2950126080 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C"  void PKCS12_AddPrivateKey_m3693882703 (PKCS12_t2950126080 * __this, PrivateKeyInfo_t2184496331 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C"  void PKCS12_ReadSafeBag_m4010108072 (PKCS12_t2950126080 * __this, ASN1_t1254135647 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  ASN1_t1254135647 * PKCS12_CertificateSafeBag_m2143586463 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___x509, Il2CppObject * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS12_MAC_m1203837730 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___password, ByteU5BU5D_t58506160* ___salt, int32_t ___iterations, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C"  ByteU5BU5D_t58506160* PKCS12_GetBytes_m1971373682 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C"  ContentInfo_t1278398632 * PKCS12_EncryptedContentInfo_m722640604 (PKCS12_t2950126080 * __this, ASN1_t1254135647 * ___safeBags, String_t* ___algorithmOid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_AddCertificate_m3895304625 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_AddCertificate_m710679726 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert, Il2CppObject * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_RemoveCertificate_m2867856866 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_RemoveCertificate_m2039050845 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C"  Il2CppObject * PKCS12_Clone_m668285869 (PKCS12_t2950126080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C"  int32_t PKCS12_get_MaximumPasswordLength_m1083541051 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
