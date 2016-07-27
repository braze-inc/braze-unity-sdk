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

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t521809713;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern "C"  void SslHandshakeHash__ctor_m1720849178 (SslHandshakeHash_t521809713 * __this, ByteU5BU5D_t58506160* ___secret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C"  void SslHandshakeHash_Initialize_m3218164453 (SslHandshakeHash_t521809713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern "C"  ByteU5BU5D_t58506160* SslHandshakeHash_HashFinal_m1716921183 (SslHandshakeHash_t521809713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslHandshakeHash_HashCore_m1118046919 (SslHandshakeHash_t521809713 * __this, ByteU5BU5D_t58506160* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t58506160* SslHandshakeHash_CreateSignature_m1753519462 (SslHandshakeHash_t521809713 * __this, RSA_t1557565273 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern "C"  void SslHandshakeHash_initializePad_m1112962160 (SslHandshakeHash_t521809713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
