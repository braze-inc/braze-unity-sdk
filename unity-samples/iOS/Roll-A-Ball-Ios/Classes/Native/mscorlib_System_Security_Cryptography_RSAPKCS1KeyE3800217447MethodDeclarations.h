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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t3800217447;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m2849280717 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, AsymmetricAlgorithm_t4236534322 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m473400456 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, ByteU5BU5D_t58506160* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m2782488748 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, AsymmetricAlgorithm_t4236534322 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
