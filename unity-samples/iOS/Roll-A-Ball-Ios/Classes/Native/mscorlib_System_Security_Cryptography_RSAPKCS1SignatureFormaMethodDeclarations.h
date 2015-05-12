#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t2166;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1418;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
 void RSAPKCS1SignatureFormatter__ctor_m10855 (RSAPKCS1SignatureFormatter_t2166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t112* RSAPKCS1SignatureFormatter_CreateSignature_m10856 (RSAPKCS1SignatureFormatter_t2166 * __this, ByteU5BU5D_t112* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m10857 (RSAPKCS1SignatureFormatter_t2166 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureFormatter_SetKey_m10858 (RSAPKCS1SignatureFormatter_t2166 * __this, AsymmetricAlgorithm_t1418 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
