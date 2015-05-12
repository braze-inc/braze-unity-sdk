#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1838;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1846;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.ASN1
struct ASN1_t1833;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m9018 (EncryptedData_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m9019 (EncryptedData_t1838 * __this, ASN1_t1833 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t1846 * EncryptedData_get_EncryptionAlgorithm_m9020 (EncryptedData_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t112* EncryptedData_get_EncryptedContent_m9021 (EncryptedData_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
