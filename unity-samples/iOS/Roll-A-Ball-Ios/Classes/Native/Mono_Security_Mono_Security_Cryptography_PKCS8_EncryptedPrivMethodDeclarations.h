#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t1403;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
 void EncryptedPrivateKeyInfo__ctor_m5766 (EncryptedPrivateKeyInfo_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
 void EncryptedPrivateKeyInfo__ctor_m5767 (EncryptedPrivateKeyInfo_t1403 * __this, ByteU5BU5D_t112* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
 String_t* EncryptedPrivateKeyInfo_get_Algorithm_m5768 (EncryptedPrivateKeyInfo_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
 ByteU5BU5D_t112* EncryptedPrivateKeyInfo_get_EncryptedData_m5769 (EncryptedPrivateKeyInfo_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
 ByteU5BU5D_t112* EncryptedPrivateKeyInfo_get_Salt_m5770 (EncryptedPrivateKeyInfo_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
 int32_t EncryptedPrivateKeyInfo_get_IterationCount_m5771 (EncryptedPrivateKeyInfo_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
 void EncryptedPrivateKeyInfo_Decode_m5772 (EncryptedPrivateKeyInfo_t1403 * __this, ByteU5BU5D_t112* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
