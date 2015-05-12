#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t2165;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
 void RNGCryptoServiceProvider__ctor_m10828 (RNGCryptoServiceProvider_t2165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
 void RNGCryptoServiceProvider__cctor_m10829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
 void RNGCryptoServiceProvider_Check_m10830 (RNGCryptoServiceProvider_t2165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
 bool RNGCryptoServiceProvider_RngOpen_m10831 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
 IntPtr_t120 RNGCryptoServiceProvider_RngInitialize_m10832 (Object_t * __this/* static, unused */, ByteU5BU5D_t112* ___seed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
 IntPtr_t120 RNGCryptoServiceProvider_RngGetBytes_m10833 (Object_t * __this/* static, unused */, IntPtr_t120 ___handle, ByteU5BU5D_t112* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
 void RNGCryptoServiceProvider_RngClose_m10834 (Object_t * __this/* static, unused */, IntPtr_t120 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetBytes_m10835 (RNGCryptoServiceProvider_t2165 * __this, ByteU5BU5D_t112* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetNonZeroBytes_m10836 (RNGCryptoServiceProvider_t2165 * __this, ByteU5BU5D_t112* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
 void RNGCryptoServiceProvider_Finalize_m10837 (RNGCryptoServiceProvider_t2165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
