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

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm24372250.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C"  void PKCS1__cctor_m2574493212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Compare_m2966371174 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___array10, ByteU5BU5D_t58506160* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* PKCS1_I2OSP_m2941319222 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___x0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS1_OS2IP_m3050204367 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS1_RSASP1_m3485035079 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, ByteU5BU5D_t58506160* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS1_RSAVP1_m2589639562 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, ByteU5BU5D_t58506160* ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PKCS1_Sign_v15_m456933555 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, HashAlgorithm_t24372250 * ___hash1, ByteU5BU5D_t58506160* ___hashValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C"  bool PKCS1_Verify_v15_m555702422 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, HashAlgorithm_t24372250 * ___hash1, ByteU5BU5D_t58506160* ___hashValue2, ByteU5BU5D_t58506160* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C"  bool PKCS1_Verify_v15_m4160617511 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, HashAlgorithm_t24372250 * ___hash1, ByteU5BU5D_t58506160* ___hashValue2, ByteU5BU5D_t58506160* ___signature3, bool ___tryNonStandardEncoding4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* PKCS1_Encode_v15_m2783024148 (Il2CppObject * __this /* static, unused */, HashAlgorithm_t24372250 * ___hash0, ByteU5BU5D_t58506160* ___hashValue1, int32_t ___emLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
