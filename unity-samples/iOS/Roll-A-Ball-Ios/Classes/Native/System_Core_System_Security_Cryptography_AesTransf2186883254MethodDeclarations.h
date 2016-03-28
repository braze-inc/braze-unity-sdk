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

// System.Security.Cryptography.AesTransform
struct AesTransform_t2186883254;
// System.Security.Cryptography.Aes
struct Aes_t1557549544;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Security_Cryptography_Aes1557549544.h"

// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void AesTransform__ctor_m2781154868 (AesTransform_t2186883254 * __this, Aes_t1557549544 * ___algo, bool ___encryption, ByteU5BU5D_t58506160* ___key, ByteU5BU5D_t58506160* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C"  void AesTransform__cctor_m1179286690 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void AesTransform_ECB_m2589908703 (AesTransform_t2186883254 * __this, ByteU5BU5D_t58506160* ___input, ByteU5BU5D_t58506160* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C"  uint32_t AesTransform_SubByte_m1214814958 (AesTransform_t2186883254 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Encrypt128_m3651261907 (AesTransform_t2186883254 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void AesTransform_Decrypt128_m3310750971 (AesTransform_t2186883254 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
