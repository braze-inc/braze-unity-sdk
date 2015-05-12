#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1386;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
 void MD2Managed__ctor_m5647 (MD2Managed_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
 void MD2Managed__cctor_m5648 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
 ByteU5BU5D_t97* MD2Managed_Padding_m5649 (MD2Managed_t1386 * __this, int32_t ___nLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
 void MD2Managed_Initialize_m5650 (MD2Managed_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD2Managed_HashCore_m5651 (MD2Managed_t1386 * __this, ByteU5BU5D_t97* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
 ByteU5BU5D_t97* MD2Managed_HashFinal_m5652 (MD2Managed_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
 void MD2Managed_MD2Transform_m5653 (MD2Managed_t1386 * __this, ByteU5BU5D_t97* ___state, ByteU5BU5D_t97* ___checksum, ByteU5BU5D_t97* ___block, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
