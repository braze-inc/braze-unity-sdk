#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1809;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
 void BlockProcessor__ctor_m8689 (BlockProcessor_t1809 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
 void BlockProcessor_Finalize_m8690 (BlockProcessor_t1809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
 void BlockProcessor_Initialize_m8691 (BlockProcessor_t1809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
 void BlockProcessor_Core_m8692 (BlockProcessor_t1809 * __this, ByteU5BU5D_t97* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
 void BlockProcessor_Core_m8693 (BlockProcessor_t1809 * __this, ByteU5BU5D_t97* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
 ByteU5BU5D_t97* BlockProcessor_Final_m8694 (BlockProcessor_t1809 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
