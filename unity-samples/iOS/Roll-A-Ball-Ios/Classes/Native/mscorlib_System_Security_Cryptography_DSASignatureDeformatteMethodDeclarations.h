#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1518;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
 void DSASignatureDeformatter__ctor_m10633 (DSASignatureDeformatter_t1518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter__ctor_m6488 (DSASignatureDeformatter_t1518 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
 void DSASignatureDeformatter_SetHashAlgorithm_m6489 (DSASignatureDeformatter_t1518 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter_SetKey_m10634 (DSASignatureDeformatter_t1518 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool DSASignatureDeformatter_VerifySignature_m6490 (DSASignatureDeformatter_t1518 * __this, ByteU5BU5D_t97* ___rgbHash, ByteU5BU5D_t97* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
