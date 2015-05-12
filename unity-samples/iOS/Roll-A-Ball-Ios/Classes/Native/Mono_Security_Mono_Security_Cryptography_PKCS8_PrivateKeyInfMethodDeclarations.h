#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1389;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.RSA
struct RSA_t1388;
// System.Security.Cryptography.DSA
struct DSA_t1390;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m5664 (PrivateKeyInfo_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m5665 (PrivateKeyInfo_t1389 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t97* PrivateKeyInfo_get_PrivateKey_m5666 (PrivateKeyInfo_t1389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m5667 (PrivateKeyInfo_t1389 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t97* PrivateKeyInfo_RemoveLeadingZero_m5668 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t97* PrivateKeyInfo_Normalize_m5669 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t1388 * PrivateKeyInfo_DecodeRSA_m5670 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t1390 * PrivateKeyInfo_DecodeDSA_m5671 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___privateKey, DSAParameters_t1391  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
