#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t1832;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1406;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
 void SymmetricTransform__ctor_m8889 (SymmetricTransform_t1832 * __this, SymmetricAlgorithm_t1406 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t112* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
 void SymmetricTransform_System_IDisposable_Dispose_m8890 (SymmetricTransform_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
 void SymmetricTransform_Finalize_m8891 (SymmetricTransform_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
 void SymmetricTransform_Dispose_m8892 (SymmetricTransform_t1832 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
 bool SymmetricTransform_get_CanReuseTransform_m8893 (SymmetricTransform_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
 void SymmetricTransform_Transform_m8894 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[])
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
 void SymmetricTransform_CBC_m8895 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
 void SymmetricTransform_CFB_m8896 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
 void SymmetricTransform_OFB_m8897 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
 void SymmetricTransform_CTS_m8898 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_CheckInput_m8899 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_TransformBlock_m8900 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t112* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
 bool SymmetricTransform_get_KeepLastBlock_m8901 (SymmetricTransform_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_InternalTransformBlock_m8902 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t112* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_Random_m8903 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___buffer, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
 void SymmetricTransform_ThrowBadPaddingException_m8904 (SymmetricTransform_t1832 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t112* SymmetricTransform_FinalEncrypt_m8905 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t112* SymmetricTransform_FinalDecrypt_m8906 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t112* SymmetricTransform_TransformFinalBlock_m8907 (SymmetricTransform_t1832 * __this, ByteU5BU5D_t112* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
