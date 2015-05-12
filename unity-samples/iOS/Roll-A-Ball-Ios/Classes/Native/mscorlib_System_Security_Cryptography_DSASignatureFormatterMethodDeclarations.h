#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t2141;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
 void DSASignatureFormatter__ctor_m10635 (DSASignatureFormatter_t2141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t97* DSASignatureFormatter_CreateSignature_m10636 (DSASignatureFormatter_t2141 * __this, ByteU5BU5D_t97* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
 void DSASignatureFormatter_SetHashAlgorithm_m10637 (DSASignatureFormatter_t2141 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureFormatter_SetKey_m10638 (DSASignatureFormatter_t2141 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
