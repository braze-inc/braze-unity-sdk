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

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.AsymmetricAlgorithm::.ctor()
extern "C"  void AsymmetricAlgorithm__ctor_m1763307756 (AsymmetricAlgorithm_t4236534322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::System.IDisposable.Dispose()
extern "C"  void AsymmetricAlgorithm_System_IDisposable_Dispose_m2114841139 (AsymmetricAlgorithm_t4236534322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize()
extern "C"  int32_t AsymmetricAlgorithm_get_KeySize_m3282676997 (AsymmetricAlgorithm_t4236534322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::set_KeySize(System.Int32)
extern "C"  void AsymmetricAlgorithm_set_KeySize_m503039102 (AsymmetricAlgorithm_t4236534322 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::Clear()
extern "C"  void AsymmetricAlgorithm_Clear_m3464408343 (AsymmetricAlgorithm_t4236534322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsymmetricAlgorithm::GetNamedParam(System.String,System.String)
extern "C"  ByteU5BU5D_t58506160* AsymmetricAlgorithm_GetNamedParam_m3241367956 (Il2CppObject * __this /* static, unused */, String_t* ___xml, String_t* ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
