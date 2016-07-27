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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2583282360;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t2391963950;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t2501850825;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2902591373;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1557563107;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "System_System_Security_Cryptography_X509Certificat2588763298.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica117935804.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C"  void X509Certificate2__ctor_m2334802535 (X509Certificate2_t2583282360 * __this, ByteU5BU5D_t58506160* ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C"  void X509Certificate2__cctor_m1878821707 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C"  X509ExtensionCollection_t2391963950 * X509Certificate2_get_Extensions_m3845394932 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C"  X500DistinguishedName_t2501850825 * X509Certificate2_get_IssuerName_m3367621449 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C"  DateTime_t339033936  X509Certificate2_get_NotAfter_m3441061389 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C"  DateTime_t339033936  X509Certificate2_get_NotBefore_m4057480336 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C"  AsymmetricAlgorithm_t4236534322 * X509Certificate2_get_PrivateKey_m2043008864 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C"  PublicKey_t2902591373 * X509Certificate2_get_PublicKey_m1236823063 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C"  String_t* X509Certificate2_get_SerialNumber_m3272726955 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C"  Oid_t1557563107 * X509Certificate2_get_SignatureAlgorithm_m3325406410 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C"  X500DistinguishedName_t2501850825 * X509Certificate2_get_SubjectName_m4019514164 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C"  String_t* X509Certificate2_get_Thumbprint_m1619061413 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C"  int32_t X509Certificate2_get_Version_m3267654015 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C"  String_t* X509Certificate2_GetNameInfo_m750863125 (X509Certificate2_t2583282360 * __this, int32_t ___nameType0, bool ___forIssuer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C"  ASN1_t1254135647 * X509Certificate2_Find_m3631738471 (X509Certificate2_t2583282360 * __this, ByteU5BU5D_t58506160* ___oid0, ASN1_t1254135647 * ___dn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C"  String_t* X509Certificate2_GetValueAsString_m4160591819 (X509Certificate2_t2583282360 * __this, ASN1_t1254135647 * ___pair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C"  void X509Certificate2_ImportPkcs12_m976921138 (X509Certificate2_t2583282360 * __this, ByteU5BU5D_t58506160* ___rawData0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate2_Import_m295659102 (X509Certificate2_t2583282360 * __this, ByteU5BU5D_t58506160* ___rawData0, String_t* ___password1, int32_t ___keyStorageFlags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C"  void X509Certificate2_Reset_m1463369551 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C"  String_t* X509Certificate2_ToString_m2515669489 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C"  String_t* X509Certificate2_ToString_m1920339368 (X509Certificate2_t2583282360 * __this, bool ___verbose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C"  void X509Certificate2_AppendBuffer_m158196497 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___sb0, ByteU5BU5D_t58506160* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C"  bool X509Certificate2_Verify_m1278605553 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C"  X509Certificate_t273828613 * X509Certificate2_get_MonoCertificate_m2548639992 (X509Certificate2_t2583282360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
