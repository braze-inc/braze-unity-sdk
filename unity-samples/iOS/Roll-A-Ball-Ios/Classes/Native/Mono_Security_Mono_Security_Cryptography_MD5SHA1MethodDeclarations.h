#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t1429;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.RSA
struct RSA_t1388;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
 void MD5SHA1__ctor_m5883 (MD5SHA1_t1429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
 void MD5SHA1_Initialize_m5884 (MD5SHA1_t1429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
 ByteU5BU5D_t97* MD5SHA1_HashFinal_m5885 (MD5SHA1_t1429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5SHA1_HashCore_m5886 (MD5SHA1_t1429 * __this, ByteU5BU5D_t97* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t97* MD5SHA1_CreateSignature_m5887 (MD5SHA1_t1429 * __this, RSA_t1388 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
 bool MD5SHA1_VerifySignature_m5888 (MD5SHA1_t1429 * __this, RSA_t1388 * ___rsa, ByteU5BU5D_t97* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
