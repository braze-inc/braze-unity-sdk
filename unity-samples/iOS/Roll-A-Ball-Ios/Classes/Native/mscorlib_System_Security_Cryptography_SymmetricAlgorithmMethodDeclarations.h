#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1406;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1405;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1392;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
 void SymmetricAlgorithm__ctor_m6543 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
 void SymmetricAlgorithm_System_IDisposable_Dispose_m6508 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
 void SymmetricAlgorithm_Finalize_m6503 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
 void SymmetricAlgorithm_Clear_m6565 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
 void SymmetricAlgorithm_Dispose_m6545 (SymmetricAlgorithm_t1406 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
 int32_t SymmetricAlgorithm_get_BlockSize_m6509 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
 void SymmetricAlgorithm_set_BlockSize_m6510 (SymmetricAlgorithm_t1406 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
 int32_t SymmetricAlgorithm_get_FeedbackSize_m6511 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
 ByteU5BU5D_t112* SymmetricAlgorithm_get_IV_m10953 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
 void SymmetricAlgorithm_set_IV_m6563 (SymmetricAlgorithm_t1406 * __this, ByteU5BU5D_t112* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
 ByteU5BU5D_t112* SymmetricAlgorithm_get_Key_m6546 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
 void SymmetricAlgorithm_set_Key_m6547 (SymmetricAlgorithm_t1406 * __this, ByteU5BU5D_t112* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
 int32_t SymmetricAlgorithm_get_KeySize_m6512 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
 void SymmetricAlgorithm_set_KeySize_m6513 (SymmetricAlgorithm_t1406 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
 KeySizesU5BU5D_t1405* SymmetricAlgorithm_get_LegalKeySizes_m6514 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
 int32_t SymmetricAlgorithm_get_Mode_m6515 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
 void SymmetricAlgorithm_set_Mode_m6516 (SymmetricAlgorithm_t1406 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
 int32_t SymmetricAlgorithm_get_Padding_m6517 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
 void SymmetricAlgorithm_set_Padding_m6518 (SymmetricAlgorithm_t1406 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
 Object_t * SymmetricAlgorithm_CreateDecryptor_m6519 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
 Object_t * SymmetricAlgorithm_CreateEncryptor_m6506 (SymmetricAlgorithm_t1406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
 SymmetricAlgorithm_t1406 * SymmetricAlgorithm_Create_m6562 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
