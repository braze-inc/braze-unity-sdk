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
struct X509Certificate_t273828612;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1254135646;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m3212421763 (X509Certificate_t273828612 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m988953959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m750702354 (X509Certificate_t273828612 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* X509Certificate_GetUnsignedBigInteger_m2414881990 (X509Certificate_t273828612 * __this, ByteU5BU5D_t58506160* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t1557551819 * X509Certificate_get_DSA_m3669842785 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3431933902 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_KeyAlgorithmParameters_m1145471883 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_PublicKey_m1256992391 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_RawData_m1241414723 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m1718232911 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidFrom_m1301607688 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidUntil_m2012833186 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t1254135646 * X509Certificate_GetIssuerName_m3616837067 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t1254135646 * X509Certificate_GetSubjectName_m3155263730 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m3977767844 (X509Certificate_t273828612 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* X509Certificate_PEM_m3139059379 (Il2CppObject * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
