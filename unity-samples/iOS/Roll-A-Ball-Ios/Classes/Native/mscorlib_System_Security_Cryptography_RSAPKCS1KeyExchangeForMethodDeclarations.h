#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1546;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter__ctor_m6645 (RSAPKCS1KeyExchangeFormatter_t1546 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
 ByteU5BU5D_t97* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m6646 (RSAPKCS1KeyExchangeFormatter_t1546 * __this, ByteU5BU5D_t97* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m10757 (RSAPKCS1KeyExchangeFormatter_t1546 * __this, AsymmetricAlgorithm_t1407 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
