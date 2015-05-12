#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1377;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1376;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.ASN1
struct ASN1_t1373;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m5622 (EncryptedData_t1377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m5623 (EncryptedData_t1377 * __this, ASN1_t1373 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t1376 * EncryptedData_get_EncryptionAlgorithm_m5624 (EncryptedData_t1377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t97* EncryptedData_get_EncryptedContent_m5625 (EncryptedData_t1377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
