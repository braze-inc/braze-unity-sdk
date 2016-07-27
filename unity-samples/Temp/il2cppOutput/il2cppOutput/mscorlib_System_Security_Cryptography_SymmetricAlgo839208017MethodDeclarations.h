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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t839208017;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1304982661;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4226691419;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CipherMode3203384231.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode1724215917.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C"  void SymmetricAlgorithm__ctor_m3015042793 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C"  void SymmetricAlgorithm_System_IDisposable_Dispose_m1612088406 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C"  void SymmetricAlgorithm_Finalize_m591291609 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C"  void SymmetricAlgorithm_Clear_m421176084 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C"  void SymmetricAlgorithm_Dispose_m3474384861 (SymmetricAlgorithm_t839208017 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C"  int32_t SymmetricAlgorithm_get_BlockSize_m4098581864 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_BlockSize_m2273875369 (SymmetricAlgorithm_t839208017 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C"  int32_t SymmetricAlgorithm_get_FeedbackSize_m4247492686 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C"  ByteU5BU5D_t58506160* SymmetricAlgorithm_get_IV_m2399566439 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_IV_m870580644 (SymmetricAlgorithm_t839208017 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C"  ByteU5BU5D_t58506160* SymmetricAlgorithm_get_Key_m1374487335 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_Key_m4256764768 (SymmetricAlgorithm_t839208017 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C"  int32_t SymmetricAlgorithm_get_KeySize_m3649844218 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_KeySize_m1757877563 (SymmetricAlgorithm_t839208017 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C"  KeySizesU5BU5D_t1304982661* SymmetricAlgorithm_get_LegalKeySizes_m472333301 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C"  int32_t SymmetricAlgorithm_get_Mode_m595116277 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C"  void SymmetricAlgorithm_set_Mode_m3645569238 (SymmetricAlgorithm_t839208017 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C"  int32_t SymmetricAlgorithm_get_Padding_m3269163097 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C"  void SymmetricAlgorithm_set_Padding_m2651553690 (SymmetricAlgorithm_t839208017 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C"  Il2CppObject * SymmetricAlgorithm_CreateDecryptor_m861706393 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C"  Il2CppObject * SymmetricAlgorithm_CreateEncryptor_m1591100785 (SymmetricAlgorithm_t839208017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C"  SymmetricAlgorithm_t839208017 * SymmetricAlgorithm_Create_m1327881011 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
