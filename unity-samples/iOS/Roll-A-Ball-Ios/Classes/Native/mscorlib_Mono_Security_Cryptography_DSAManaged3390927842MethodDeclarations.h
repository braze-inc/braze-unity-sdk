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

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3390927842;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1233396096;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_Cryptography_DSAManaged_Key1233396096.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter2524359253.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C"  void DSAManaged__ctor_m1342239545 (DSAManaged_t3390927842 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C"  void DSAManaged_add_KeyGenerated_m1677002343 (DSAManaged_t3390927842 * __this, KeyGeneratedEventHandler_t1233396096 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C"  void DSAManaged_remove_KeyGenerated_m3864760974 (DSAManaged_t3390927842 * __this, KeyGeneratedEventHandler_t1233396096 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C"  void DSAManaged_Finalize_m3333954938 (DSAManaged_t3390927842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C"  void DSAManaged_Generate_m1196580113 (DSAManaged_t3390927842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C"  void DSAManaged_GenerateKeyPair_m414103146 (DSAManaged_t3390927842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C"  void DSAManaged_add_m3640666386 (DSAManaged_t3390927842 * __this, ByteU5BU5D_t58506160* ___a, ByteU5BU5D_t58506160* ___b, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C"  void DSAManaged_GenerateParams_m2842017800 (DSAManaged_t3390927842 * __this, int32_t ___keyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C"  RandomNumberGenerator_t2174318432 * DSAManaged_get_Random_m1436172465 (DSAManaged_t3390927842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C"  int32_t DSAManaged_get_KeySize_m3299647161 (DSAManaged_t3390927842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C"  bool DSAManaged_get_PublicOnly_m2380856856 (DSAManaged_t3390927842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* DSAManaged_NormalizeArray_m2316124043 (DSAManaged_t3390927842 * __this, ByteU5BU5D_t58506160* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t2524359253  DSAManaged_ExportParameters_m4217036623 (DSAManaged_t3390927842 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSAManaged_ImportParameters_m3610982722 (DSAManaged_t3390927842 * __this, DSAParameters_t2524359253  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* DSAManaged_CreateSignature_m2835018685 (DSAManaged_t3390927842 * __this, ByteU5BU5D_t58506160* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSAManaged_VerifySignature_m2521906789 (DSAManaged_t3390927842 * __this, ByteU5BU5D_t58506160* ___rgbHash, ByteU5BU5D_t58506160* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C"  void DSAManaged_Dispose_m3450076380 (DSAManaged_t3390927842 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
