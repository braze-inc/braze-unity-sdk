#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t2148;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
 void MD5CryptoServiceProvider__ctor_m10684 (MD5CryptoServiceProvider_t2148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.cctor()
 void MD5CryptoServiceProvider__cctor_m10685 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Finalize()
 void MD5CryptoServiceProvider_Finalize_m10686 (MD5CryptoServiceProvider_t2148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Dispose(System.Boolean)
 void MD5CryptoServiceProvider_Dispose_m10687 (MD5CryptoServiceProvider_t2148 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5CryptoServiceProvider_HashCore_m10688 (MD5CryptoServiceProvider_t2148 * __this, ByteU5BU5D_t97* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::HashFinal()
 ByteU5BU5D_t97* MD5CryptoServiceProvider_HashFinal_m10689 (MD5CryptoServiceProvider_t2148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Initialize()
 void MD5CryptoServiceProvider_Initialize_m10690 (MD5CryptoServiceProvider_t2148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessBlock(System.Byte[],System.Int32)
 void MD5CryptoServiceProvider_ProcessBlock_m10691 (MD5CryptoServiceProvider_t2148 * __this, ByteU5BU5D_t97* ___inputBuffer, int32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
 void MD5CryptoServiceProvider_ProcessFinalBlock_m10692 (MD5CryptoServiceProvider_t2148 * __this, ByteU5BU5D_t97* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::AddLength(System.UInt64,System.Byte[],System.Int32)
 void MD5CryptoServiceProvider_AddLength_m10693 (MD5CryptoServiceProvider_t2148 * __this, uint64_t ___length, ByteU5BU5D_t97* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
