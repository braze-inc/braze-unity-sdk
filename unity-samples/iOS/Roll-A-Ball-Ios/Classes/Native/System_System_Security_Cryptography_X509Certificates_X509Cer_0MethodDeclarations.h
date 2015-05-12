#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1538;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1609;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1605;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1602;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1601;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.ASN1
struct ASN1_t1373;
// System.Text.StringBuilder
struct StringBuilder_t80;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
 void X509Certificate2__ctor_m6583 (X509Certificate2_t1538 * __this, ByteU5BU5D_t97* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
 void X509Certificate2__cctor_m6888 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
 X509ExtensionCollection_t1609 * X509Certificate2_get_Extensions_m6889 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
 X500DistinguishedName_t1605 * X509Certificate2_get_IssuerName_m6890 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
 DateTime_t837  X509Certificate2_get_NotAfter_m6891 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
 DateTime_t837  X509Certificate2_get_NotBefore_m6892 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
 AsymmetricAlgorithm_t1407 * X509Certificate2_get_PrivateKey_m6588 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
 PublicKey_t1602 * X509Certificate2_get_PublicKey_m6893 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
 String_t* X509Certificate2_get_SerialNumber_m6894 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
 Oid_t1601 * X509Certificate2_get_SignatureAlgorithm_m6895 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
 X500DistinguishedName_t1605 * X509Certificate2_get_SubjectName_m6896 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
 String_t* X509Certificate2_get_Thumbprint_m6897 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
 int32_t X509Certificate2_get_Version_m6898 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
 String_t* X509Certificate2_GetNameInfo_m6899 (X509Certificate2_t1538 * __this, int32_t ___nameType, bool ___forIssuer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
 ASN1_t1373 * X509Certificate2_Find_m6900 (X509Certificate2_t1538 * __this, ByteU5BU5D_t97* ___oid, ASN1_t1373 * ___dn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
 String_t* X509Certificate2_GetValueAsString_m6901 (X509Certificate2_t1538 * __this, ASN1_t1373 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
 void X509Certificate2_ImportPkcs12_m6902 (X509Certificate2_t1538 * __this, ByteU5BU5D_t97* ___rawData, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate2_Import_m6903 (X509Certificate2_t1538 * __this, ByteU5BU5D_t97* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
 void X509Certificate2_Reset_m6904 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
 String_t* X509Certificate2_ToString_m6905 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
 String_t* X509Certificate2_ToString_m6906 (X509Certificate2_t1538 * __this, bool ___verbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
 void X509Certificate2_AppendBuffer_m6907 (Object_t * __this/* static, unused */, StringBuilder_t80 * ___sb, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
 bool X509Certificate2_Verify_m6908 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
 X509Certificate_t1406 * X509Certificate2_get_MonoCertificate_m6909 (X509Certificate2_t1538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
