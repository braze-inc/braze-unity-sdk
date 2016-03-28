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

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t426713980;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C"  void DSASignatureDeformatter__ctor_m611619298 (DSASignatureDeformatter_t426713980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter__ctor_m1067293596 (DSASignatureDeformatter_t426713980 * __this, AsymmetricAlgorithm_t4236534322 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureDeformatter_SetHashAlgorithm_m30772481 (DSASignatureDeformatter_t426713980 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter_SetKey_m2248380921 (DSASignatureDeformatter_t426713980 * __this, AsymmetricAlgorithm_t4236534322 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSASignatureDeformatter_VerifySignature_m909896559 (DSASignatureDeformatter_t426713980 * __this, ByteU5BU5D_t58506160* ___rgbHash, ByteU5BU5D_t58506160* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
