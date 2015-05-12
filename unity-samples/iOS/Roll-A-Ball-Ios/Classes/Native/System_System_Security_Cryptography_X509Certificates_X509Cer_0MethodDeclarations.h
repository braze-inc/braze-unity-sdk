#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1549;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1621;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1617;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1418;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1614;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1613;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1417;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.ASN1
struct ASN1_t1384;
// System.Text.StringBuilder
struct StringBuilder_t89;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
 void X509Certificate2__ctor_m6677 (X509Certificate2_t1549 * __this, ByteU5BU5D_t112* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
 void X509Certificate2__cctor_m6982 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
 X509ExtensionCollection_t1621 * X509Certificate2_get_Extensions_m6983 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
 X500DistinguishedName_t1617 * X509Certificate2_get_IssuerName_m6984 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
 DateTime_t850  X509Certificate2_get_NotAfter_m6985 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
 DateTime_t850  X509Certificate2_get_NotBefore_m6986 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
 AsymmetricAlgorithm_t1418 * X509Certificate2_get_PrivateKey_m6682 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
 PublicKey_t1614 * X509Certificate2_get_PublicKey_m6987 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
 String_t* X509Certificate2_get_SerialNumber_m6988 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
 Oid_t1613 * X509Certificate2_get_SignatureAlgorithm_m6989 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
 X500DistinguishedName_t1617 * X509Certificate2_get_SubjectName_m6990 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
 String_t* X509Certificate2_get_Thumbprint_m6991 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
 int32_t X509Certificate2_get_Version_m6992 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
 String_t* X509Certificate2_GetNameInfo_m6993 (X509Certificate2_t1549 * __this, int32_t ___nameType, bool ___forIssuer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
 ASN1_t1384 * X509Certificate2_Find_m6994 (X509Certificate2_t1549 * __this, ByteU5BU5D_t112* ___oid, ASN1_t1384 * ___dn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
 String_t* X509Certificate2_GetValueAsString_m6995 (X509Certificate2_t1549 * __this, ASN1_t1384 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
 void X509Certificate2_ImportPkcs12_m6996 (X509Certificate2_t1549 * __this, ByteU5BU5D_t112* ___rawData, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate2_Import_m6997 (X509Certificate2_t1549 * __this, ByteU5BU5D_t112* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
 void X509Certificate2_Reset_m6998 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
 String_t* X509Certificate2_ToString_m6999 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
 String_t* X509Certificate2_ToString_m7000 (X509Certificate2_t1549 * __this, bool ___verbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
 void X509Certificate2_AppendBuffer_m7001 (Object_t * __this/* static, unused */, StringBuilder_t89 * ___sb, ByteU5BU5D_t112* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
 bool X509Certificate2_Verify_m7002 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
 X509Certificate_t1417 * X509Certificate2_get_MonoCertificate_m7003 (X509Certificate2_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
