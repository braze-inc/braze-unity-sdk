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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t636832623;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1278398632;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m1149165926 (EncryptedData_t636832623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m794340270 (EncryptedData_t636832623 * __this, ASN1_t1254135647 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t1278398632 * EncryptedData_get_EncryptionAlgorithm_m3999045305 (EncryptedData_t636832623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t58506160* EncryptedData_get_EncryptedContent_m2775206546 (EncryptedData_t636832623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
