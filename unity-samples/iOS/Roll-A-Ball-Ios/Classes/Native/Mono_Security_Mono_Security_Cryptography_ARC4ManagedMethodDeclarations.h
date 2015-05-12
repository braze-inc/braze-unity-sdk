#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t1379;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
 void ARC4Managed__ctor_m5626 (ARC4Managed_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
 void ARC4Managed_Finalize_m5627 (ARC4Managed_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
 void ARC4Managed_Dispose_m5628 (ARC4Managed_t1379 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
 ByteU5BU5D_t97* ARC4Managed_get_Key_m5629 (ARC4Managed_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
 void ARC4Managed_set_Key_m5630 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
 bool ARC4Managed_get_CanReuseTransform_m5631 (ARC4Managed_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateEncryptor_m5632 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateDecryptor_m5633 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
 void ARC4Managed_GenerateIV_m5634 (ARC4Managed_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
 void ARC4Managed_GenerateKey_m5635 (ARC4Managed_t1379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
 void ARC4Managed_KeySetup_m5636 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
 void ARC4Managed_CheckInput_m5637 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_TransformBlock_m5638 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t97* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_InternalTransformBlock_m5639 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t97* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t97* ARC4Managed_TransformFinalBlock_m5640 (ARC4Managed_t1379 * __this, ByteU5BU5D_t97* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
