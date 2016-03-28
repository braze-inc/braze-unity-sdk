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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSA1557551819.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m1688356825 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m3957890465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m1221896268 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* X509Certificate_GetUnsignedBigInteger_m3057380224 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t1557551819 * X509Certificate_get_DSA_m1952040247 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C"  void X509Certificate_set_DSA_m1562150692 (X509Certificate_t273828613 * __this, DSA_t1557551819 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692651 * X509Certificate_get_Extensions_m577630462 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_Hash_m2925829113 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3235776392 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C"  String_t* X509Certificate_get_KeyAlgorithm_m3661706164 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_KeyAlgorithmParameters_m2708577349 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C"  void X509Certificate_set_KeyAlgorithmParameters_m769560986 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_PublicKey_m835022733 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C"  RSA_t1557565273 * X509Certificate_get_RSA_m842279223 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void X509Certificate_set_RSA_m547377152 (X509Certificate_t273828613 * __this, RSA_t1557565273 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_RawData_m2988459721 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_SerialNumber_m1906128776 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_Signature_m2856370319 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C"  String_t* X509Certificate_get_SignatureAlgorithm_m2628075899 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m4227284693 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidFrom_m3810659470 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidUntil_m2484027100 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m1452122189 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C"  bool X509Certificate_get_IsCurrent_m3064883298 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C"  bool X509Certificate_WasCurrent_m3800725474 (X509Certificate_t273828613 * __this, DateTime_t339033936  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Certificate_VerifySignature_m120457372 (X509Certificate_t273828613 * __this, DSA_t1557551819 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Certificate_VerifySignature_m120874446 (X509Certificate_t273828613 * __this, RSA_t1557565273 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Certificate_VerifySignature_m1482842161 (X509Certificate_t273828613 * __this, AsymmetricAlgorithm_t4236534322 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C"  bool X509Certificate_get_IsSelfSigned_m3915010913 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t1254135647 * X509Certificate_GetIssuerName_m3574279585 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t1254135647 * X509Certificate_GetSubjectName_m1835981788 (X509Certificate_t273828613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m2959679786 (X509Certificate_t273828613 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* X509Certificate_PEM_m3879103085 (Il2CppObject * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
