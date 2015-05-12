#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t1825;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1824;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1395;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1826;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1815;
// Mono.Security.ASN1
struct ASN1_t1821;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m8827 (PKCS12_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m8828 (PKCS12_t1825 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m8829 (PKCS12_t1825 * __this, ByteU5BU5D_t97* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m8830 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m8831 (PKCS12_t1825 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m8832 (PKCS12_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m8833 (PKCS12_t1825 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t1824 * PKCS12_get_Certificates_m8834 (PKCS12_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m8835 (PKCS12_t1825 * __this, ByteU5BU5D_t97* ___expected, ByteU5BU5D_t97* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t1395 * PKCS12_GetSymmetricAlgorithm_m8836 (PKCS12_t1825 * __this, String_t* ___algorithmOid, ByteU5BU5D_t97* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t97* PKCS12_Decrypt_m8837 (PKCS12_t1825 * __this, String_t* ___algorithmOid, ByteU5BU5D_t97* ___salt, int32_t ___iterationCount, ByteU5BU5D_t97* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t97* PKCS12_Decrypt_m8838 (PKCS12_t1825 * __this, EncryptedData_t1826 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t1391  PKCS12_GetExistingParameters_m8839 (PKCS12_t1825 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m8840 (PKCS12_t1825 * __this, PrivateKeyInfo_t1815 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m8841 (PKCS12_t1825 * __this, ASN1_t1821 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t97* PKCS12_MAC_m8842 (PKCS12_t1825 * __this, ByteU5BU5D_t97* ___password, ByteU5BU5D_t97* ___salt, int32_t ___iterations, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m8843 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
