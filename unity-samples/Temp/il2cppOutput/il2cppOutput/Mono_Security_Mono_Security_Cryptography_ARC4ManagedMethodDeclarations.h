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

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t1274;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1253;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
extern "C" void ARC4Managed__ctor_m6458 (ARC4Managed_t1274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
extern "C" void ARC4Managed_Finalize_m6459 (ARC4Managed_t1274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
extern "C" void ARC4Managed_Dispose_m6460 (ARC4Managed_t1274 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
extern "C" ByteU5BU5D_t98* ARC4Managed_get_Key_m6461 (ARC4Managed_t1274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
extern "C" void ARC4Managed_set_Key_m6462 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
extern "C" bool ARC4Managed_get_CanReuseTransform_m6463 (ARC4Managed_t1274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * ARC4Managed_CreateEncryptor_m6464 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___rgbKey, ByteU5BU5D_t98* ___rgvIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * ARC4Managed_CreateDecryptor_m6465 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___rgbKey, ByteU5BU5D_t98* ___rgvIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
extern "C" void ARC4Managed_GenerateIV_m6466 (ARC4Managed_t1274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
extern "C" void ARC4Managed_GenerateKey_m6467 (ARC4Managed_t1274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
extern "C" void ARC4Managed_KeySetup_m6468 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void ARC4Managed_CheckInput_m6469 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ARC4Managed_TransformBlock_m6470 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t98* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ARC4Managed_InternalTransformBlock_m6471 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t98* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t98* ARC4Managed_TransformFinalBlock_m6472 (ARC4Managed_t1274 * __this, ByteU5BU5D_t98* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
