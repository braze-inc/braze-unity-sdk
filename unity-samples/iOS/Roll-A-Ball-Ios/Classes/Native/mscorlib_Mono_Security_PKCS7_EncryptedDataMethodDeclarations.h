#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1826;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1834;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.ASN1
struct ASN1_t1821;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m8923 (EncryptedData_t1826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m8924 (EncryptedData_t1826 * __this, ASN1_t1821 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t1834 * EncryptedData_get_EncryptionAlgorithm_m8925 (EncryptedData_t1826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t97* EncryptedData_get_EncryptedContent_m8926 (EncryptedData_t1826 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
