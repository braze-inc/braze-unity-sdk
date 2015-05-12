#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1825;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1406;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
 void MACAlgorithm__ctor_m8839 (MACAlgorithm_t1825 * __this, SymmetricAlgorithm_t1406 * ___algorithm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
 void MACAlgorithm_Initialize_m8840 (MACAlgorithm_t1825 * __this, ByteU5BU5D_t112* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
 void MACAlgorithm_Core_m8841 (MACAlgorithm_t1825 * __this, ByteU5BU5D_t112* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
 ByteU5BU5D_t112* MACAlgorithm_Final_m8842 (MACAlgorithm_t1825 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
