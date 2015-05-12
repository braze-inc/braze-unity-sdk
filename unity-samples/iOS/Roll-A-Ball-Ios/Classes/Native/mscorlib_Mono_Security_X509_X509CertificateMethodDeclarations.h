#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1829;
// System.Security.Cryptography.DSA
struct DSA_t1390;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.ASN1
struct ASN1_t1821;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m8848 (X509Certificate_t1829 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m8849 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m8850 (X509Certificate_t1829 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t97* X509Certificate_GetUnsignedBigInteger_m8851 (X509Certificate_t1829 * __this, ByteU5BU5D_t97* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t1390 * X509Certificate_get_DSA_m8852 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m8853 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t97* X509Certificate_get_KeyAlgorithmParameters_m8854 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t97* X509Certificate_get_PublicKey_m8855 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t97* X509Certificate_get_RawData_m8856 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m8857 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t837  X509Certificate_get_ValidFrom_m8858 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t837  X509Certificate_get_ValidUntil_m8859 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t1821 * X509Certificate_GetIssuerName_m8860 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t1821 * X509Certificate_GetSubjectName_m8861 (X509Certificate_t1829 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m8862 (X509Certificate_t1829 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t97* X509Certificate_PEM_m8863 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
