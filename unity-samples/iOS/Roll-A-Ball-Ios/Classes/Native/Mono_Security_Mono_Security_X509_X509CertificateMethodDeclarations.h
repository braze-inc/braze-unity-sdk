#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// System.Security.Cryptography.DSA
struct DSA_t1390;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1405;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1388;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// Mono.Security.ASN1
struct ASN1_t1373;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m5736 (X509Certificate_t1406 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m5737 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m5738 (X509Certificate_t1406 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t97* X509Certificate_GetUnsignedBigInteger_m5739 (X509Certificate_t1406 * __this, ByteU5BU5D_t97* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t1390 * X509Certificate_get_DSA_m5740 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
 void X509Certificate_set_DSA_m5741 (X509Certificate_t1406 * __this, DSA_t1390 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
 X509ExtensionCollection_t1405 * X509Certificate_get_Extensions_m5742 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
 ByteU5BU5D_t97* X509Certificate_get_Hash_m5743 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m5744 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
 String_t* X509Certificate_get_KeyAlgorithm_m5745 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t97* X509Certificate_get_KeyAlgorithmParameters_m5746 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
 void X509Certificate_set_KeyAlgorithmParameters_m5747 (X509Certificate_t1406 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t97* X509Certificate_get_PublicKey_m5748 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
 RSA_t1388 * X509Certificate_get_RSA_m5749 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
 void X509Certificate_set_RSA_m5750 (X509Certificate_t1406 * __this, RSA_t1388 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t97* X509Certificate_get_RawData_m5751 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
 ByteU5BU5D_t97* X509Certificate_get_SerialNumber_m5752 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
 ByteU5BU5D_t97* X509Certificate_get_Signature_m5753 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
 String_t* X509Certificate_get_SignatureAlgorithm_m5754 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m5755 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t837  X509Certificate_get_ValidFrom_m5756 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t837  X509Certificate_get_ValidUntil_m5757 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
 int32_t X509Certificate_get_Version_m5758 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
 bool X509Certificate_get_IsCurrent_m5759 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
 bool X509Certificate_WasCurrent_m5760 (X509Certificate_t1406 * __this, DateTime_t837  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Certificate_VerifySignature_m5761 (X509Certificate_t1406 * __this, DSA_t1390 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Certificate_VerifySignature_m5762 (X509Certificate_t1406 * __this, RSA_t1388 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Certificate_VerifySignature_m5763 (X509Certificate_t1406 * __this, AsymmetricAlgorithm_t1407 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
 bool X509Certificate_get_IsSelfSigned_m5764 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t1373 * X509Certificate_GetIssuerName_m5765 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t1373 * X509Certificate_GetSubjectName_m5766 (X509Certificate_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m5767 (X509Certificate_t1406 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t97* X509Certificate_PEM_m5768 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
