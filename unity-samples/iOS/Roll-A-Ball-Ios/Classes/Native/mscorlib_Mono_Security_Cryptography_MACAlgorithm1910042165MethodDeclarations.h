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

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1910042165;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t839208017;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlgo839208017.h"

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  void MACAlgorithm__ctor_m1891225170 (MACAlgorithm_t1910042165 * __this, SymmetricAlgorithm_t839208017 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C"  void MACAlgorithm_Initialize_m3361709802 (MACAlgorithm_t1910042165 * __this, ByteU5BU5D_t58506160* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C"  void MACAlgorithm_Core_m3581743643 (MACAlgorithm_t1910042165 * __this, ByteU5BU5D_t58506160* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C"  ByteU5BU5D_t58506160* MACAlgorithm_Final_m1570388531 (MACAlgorithm_t1910042165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
