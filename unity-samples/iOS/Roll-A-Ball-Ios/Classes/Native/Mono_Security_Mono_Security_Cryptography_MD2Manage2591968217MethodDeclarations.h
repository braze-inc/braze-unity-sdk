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

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t2591968217;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
extern "C"  void MD2Managed__ctor_m2257535371 (MD2Managed_t2591968217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
extern "C"  void MD2Managed__cctor_m782023554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
extern "C"  ByteU5BU5D_t58506160* MD2Managed_Padding_m3531272693 (MD2Managed_t2591968217 * __this, int32_t ___nLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
extern "C"  void MD2Managed_Initialize_m1198478313 (MD2Managed_t2591968217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD2Managed_HashCore_m848434243 (MD2Managed_t2591968217 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
extern "C"  ByteU5BU5D_t58506160* MD2Managed_HashFinal_m3903508827 (MD2Managed_t2591968217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
extern "C"  void MD2Managed_MD2Transform_m1178472146 (MD2Managed_t2591968217 * __this, ByteU5BU5D_t58506160* ___state, ByteU5BU5D_t58506160* ___checksum, ByteU5BU5D_t58506160* ___block, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
