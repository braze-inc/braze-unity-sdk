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

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t4111311066;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4226691419;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
extern "C"  void BlockProcessor__ctor_m3353238986 (BlockProcessor_t4111311066 * __this, Il2CppObject * ___transform0, int32_t ___blockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
extern "C"  void BlockProcessor_Finalize_m1137753970 (BlockProcessor_t4111311066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
extern "C"  void BlockProcessor_Initialize_m3614798244 (BlockProcessor_t4111311066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
extern "C"  void BlockProcessor_Core_m2224984694 (BlockProcessor_t4111311066 * __this, ByteU5BU5D_t58506160* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
extern "C"  void BlockProcessor_Core_m1715183702 (BlockProcessor_t4111311066 * __this, ByteU5BU5D_t58506160* ___rgb0, int32_t ___ib1, int32_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
extern "C"  ByteU5BU5D_t58506160* BlockProcessor_Final_m2868771374 (BlockProcessor_t4111311066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
