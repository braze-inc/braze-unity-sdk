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
struct PKCS12_t2950126079;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811650;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t839208017;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t636832622;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2184496330;
// Mono.Security.ASN1
struct ASN1_t1254135646;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828612;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1278398631;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Security_PKCS7_EncryptedData636832622.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter2524359253.h"
#include "mscorlib_Mono_Security_Cryptography_PKCS8_PrivateK2184496330.h"
#include "mscorlib_Mono_Security_ASN11254135646.h"
#include "mscorlib_Mono_Security_X509_X509Certificate273828612.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C"  void PKCS12__ctor_m3712246019 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C"  void PKCS12__ctor_m3690240934 (PKCS12_t2950126079 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C"  void PKCS12__ctor_m252275042 (PKCS12_t2950126079 * __this, ByteU5BU5D_t58506160* ___data0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C"  void PKCS12__cctor_m2928380682 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C"  void PKCS12_Decode_m1208795610 (PKCS12_t2950126079 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C"  void PKCS12_Finalize_m510753919 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C"  void PKCS12_set_Password_m451279849 (PKCS12_t2950126079 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C"  int32_t PKCS12_get_IterationCount_m3782498752 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C"  void PKCS12_set_IterationCount_m2830125857 (PKCS12_t2950126079 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C"  X509CertificateCollection_t3336811650 * PKCS12_get_Certificates_m3935451749 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C"  RandomNumberGenerator_t2174318432 * PKCS12_get_RNG_m2501991994 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS12_Compare_m143948868 (PKCS12_t2950126079 * __this, ByteU5BU5D_t58506160* ___expected0, ByteU5BU5D_t58506160* ___actual1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C"  SymmetricAlgorithm_t839208017 * PKCS12_GetSymmetricAlgorithm_m1131954313 (PKCS12_t2950126079 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterationCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS12_Decrypt_m1846702093 (PKCS12_t2950126079 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t58506160* ___encryptedData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C"  ByteU5BU5D_t58506160* PKCS12_Decrypt_m232511250 (PKCS12_t2950126079 * __this, EncryptedData_t636832622 * ___ed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS12_Encrypt_m2547245285 (PKCS12_t2950126079 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t58506160* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C"  DSAParameters_t2524359253  PKCS12_GetExistingParameters_m713420615 (PKCS12_t2950126079 * __this, bool* ___found0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C"  void PKCS12_AddPrivateKey_m2603644745 (PKCS12_t2950126079 * __this, PrivateKeyInfo_t2184496330 * ___pki0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C"  void PKCS12_ReadSafeBag_m2164322798 (PKCS12_t2950126079 * __this, ASN1_t1254135646 * ___safeBag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  ASN1_t1254135646 * PKCS12_CertificateSafeBag_m3963003161 (PKCS12_t2950126079 * __this, X509Certificate_t273828612 * ___x5090, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS12_MAC_m1584310760 (PKCS12_t2950126079 * __this, ByteU5BU5D_t58506160* ___password0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterations2, ByteU5BU5D_t58506160* ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C"  ByteU5BU5D_t58506160* PKCS12_GetBytes_m683139820 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C"  ContentInfo_t1278398631 * PKCS12_EncryptedContentInfo_m3437609430 (PKCS12_t2950126079 * __this, ASN1_t1254135646 * ___safeBags0, String_t* ___algorithmOid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_AddCertificate_m1604686507 (PKCS12_t2950126079 * __this, X509Certificate_t273828612 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_AddCertificate_m3204746356 (PKCS12_t2950126079 * __this, X509Certificate_t273828612 * ___cert0, Il2CppObject * ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_RemoveCertificate_m1503902376 (PKCS12_t2950126079 * __this, X509Certificate_t273828612 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_RemoveCertificate_m4138771671 (PKCS12_t2950126079 * __this, X509Certificate_t273828612 * ___cert0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C"  Il2CppObject * PKCS12_Clone_m3498443123 (PKCS12_t2950126079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C"  int32_t PKCS12_get_MaximumPasswordLength_m2869456565 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
