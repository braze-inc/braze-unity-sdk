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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2184496331;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter2524359253.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C"  void PrivateKeyInfo__ctor_m362104835 (PrivateKeyInfo_t2184496331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void PrivateKeyInfo__ctor_m3331527846 (PrivateKeyInfo_t2184496331 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C"  ByteU5BU5D_t58506160* PrivateKeyInfo_get_PrivateKey_m2153221404 (PrivateKeyInfo_t2184496331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C"  void PrivateKeyInfo_Decode_m2973591770 (PrivateKeyInfo_t2184496331 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PrivateKeyInfo_RemoveLeadingZero_m3776637556 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bigInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* PrivateKeyInfo_Normalize_m3523909062 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bigInt0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C"  RSA_t1557565273 * PrivateKeyInfo_DecodeRSA_m311172684 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___keypair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C"  DSA_t1557551819 * PrivateKeyInfo_DecodeDSA_m1682427249 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___privateKey0, DSAParameters_t2524359253  ___dsaParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
