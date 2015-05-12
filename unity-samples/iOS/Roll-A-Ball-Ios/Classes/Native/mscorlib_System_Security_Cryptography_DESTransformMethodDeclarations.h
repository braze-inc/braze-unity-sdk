#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t2139;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1395;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.UInt32[]
struct UInt32U5BU5D_t1365;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
 void DESTransform__ctor_m10603 (DESTransform_t2139 * __this, SymmetricAlgorithm_t1395 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t97* ___key, ByteU5BU5D_t97* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
 void DESTransform__cctor_m10604 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
 uint32_t DESTransform_CipherFunct_m10605 (DESTransform_t2139 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
 void DESTransform_Permutation_m10606 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___input, ByteU5BU5D_t97* ___output, UInt32U5BU5D_t1365* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
 void DESTransform_BSwap_m10607 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
 void DESTransform_SetKey_m10608 (DESTransform_t2139 * __this, ByteU5BU5D_t97* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
 void DESTransform_ProcessBlock_m10609 (DESTransform_t2139 * __this, ByteU5BU5D_t97* ___input, ByteU5BU5D_t97* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
 void DESTransform_ECB_m10610 (DESTransform_t2139 * __this, ByteU5BU5D_t97* ___input, ByteU5BU5D_t97* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
 ByteU5BU5D_t97* DESTransform_GetStrongKey_m10611 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
