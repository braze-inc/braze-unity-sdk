#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1519;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
 void RSAPKCS1SignatureDeformatter__ctor_m10758 (RSAPKCS1SignatureDeformatter_t1519 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter__ctor_m6491 (RSAPKCS1SignatureDeformatter_t1519 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m6492 (RSAPKCS1SignatureDeformatter_t1519 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter_SetKey_m10759 (RSAPKCS1SignatureDeformatter_t1519 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSAPKCS1SignatureDeformatter_VerifySignature_m6493 (RSAPKCS1SignatureDeformatter_t1519 * __this, ByteU5BU5D_t97* ___rgbHash, ByteU5BU5D_t97* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
