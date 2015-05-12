#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t1476;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.RSA
struct RSA_t1388;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m6165 (SslHandshakeHash_t1476 * __this, ByteU5BU5D_t97* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m6166 (SslHandshakeHash_t1476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t97* SslHandshakeHash_HashFinal_m6167 (SslHandshakeHash_t1476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m6168 (SslHandshakeHash_t1476 * __this, ByteU5BU5D_t97* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t97* SslHandshakeHash_CreateSignature_m6169 (SslHandshakeHash_t1476 * __this, RSA_t1388 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m6170 (SslHandshakeHash_t1476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
