#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t2154;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
 void RSAPKCS1SignatureFormatter__ctor_m10760 (RSAPKCS1SignatureFormatter_t2154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t97* RSAPKCS1SignatureFormatter_CreateSignature_m10761 (RSAPKCS1SignatureFormatter_t2154 * __this, ByteU5BU5D_t97* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m10762 (RSAPKCS1SignatureFormatter_t2154 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureFormatter_SetKey_m10763 (RSAPKCS1SignatureFormatter_t2154 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
