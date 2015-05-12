#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1388;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1387;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.ASN1
struct ASN1_t1384;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m5716 (EncryptedData_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m5717 (EncryptedData_t1388 * __this, ASN1_t1384 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t1387 * EncryptedData_get_EncryptionAlgorithm_m5718 (EncryptedData_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t112* EncryptedData_get_EncryptedContent_m5719 (EncryptedData_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
