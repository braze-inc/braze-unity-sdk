#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1476;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1418;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter__ctor_m6199 (RSASslSignatureDeformatter_t1476 * __this, AsymmetricAlgorithm_t1418 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSASslSignatureDeformatter_VerifySignature_m6200 (RSASslSignatureDeformatter_t1476 * __this, ByteU5BU5D_t112* ___rgbHash, ByteU5BU5D_t112* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
 void RSASslSignatureDeformatter_SetHashAlgorithm_m6201 (RSASslSignatureDeformatter_t1476 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter_SetKey_m6202 (RSASslSignatureDeformatter_t1476 * __this, AsymmetricAlgorithm_t1418 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
