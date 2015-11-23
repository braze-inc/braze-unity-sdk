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

// System.Security.Cryptography.DESTransform
struct DESTransform_t1853;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1239;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.UInt32[]
struct UInt32U5BU5D_t1247;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m10792 (DESTransform_t1853 * __this, SymmetricAlgorithm_t1239 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t98* ___key, ByteU5BU5D_t98* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m10793 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m10794 (DESTransform_t1853 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m10795 (Object_t * __this /* static, unused */, ByteU5BU5D_t98* ___input, ByteU5BU5D_t98* ___output, UInt32U5BU5D_t1247* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m10796 (Object_t * __this /* static, unused */, ByteU5BU5D_t98* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m10797 (DESTransform_t1853 * __this, ByteU5BU5D_t98* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m10798 (DESTransform_t1853 * __this, ByteU5BU5D_t98* ___input, ByteU5BU5D_t98* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m10799 (DESTransform_t1853 * __this, ByteU5BU5D_t98* ___input, ByteU5BU5D_t98* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t98* DESTransform_GetStrongKey_m10800 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
