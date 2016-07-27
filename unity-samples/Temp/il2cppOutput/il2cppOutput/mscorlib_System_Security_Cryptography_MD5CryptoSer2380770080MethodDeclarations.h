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

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t2380770080;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
extern "C"  void MD5CryptoServiceProvider__ctor_m2509400698 (MD5CryptoServiceProvider_t2380770080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.cctor()
extern "C"  void MD5CryptoServiceProvider__cctor_m4294881395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Finalize()
extern "C"  void MD5CryptoServiceProvider_Finalize_m3752913832 (MD5CryptoServiceProvider_t2380770080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void MD5CryptoServiceProvider_Dispose_m365177198 (MD5CryptoServiceProvider_t2380770080 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD5CryptoServiceProvider_HashCore_m255435378 (MD5CryptoServiceProvider_t2380770080 * __this, ByteU5BU5D_t58506160* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::HashFinal()
extern "C"  ByteU5BU5D_t58506160* MD5CryptoServiceProvider_HashFinal_m430218570 (MD5CryptoServiceProvider_t2380770080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Initialize()
extern "C"  void MD5CryptoServiceProvider_Initialize_m4227557466 (MD5CryptoServiceProvider_t2380770080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessBlock(System.Byte[],System.Int32)
extern "C"  void MD5CryptoServiceProvider_ProcessBlock_m1355255830 (MD5CryptoServiceProvider_t2380770080 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD5CryptoServiceProvider_ProcessFinalBlock_m2458243595 (MD5CryptoServiceProvider_t2380770080 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C"  void MD5CryptoServiceProvider_AddLength_m3224905112 (MD5CryptoServiceProvider_t2380770080 * __this, uint64_t ___length0, ByteU5BU5D_t58506160* ___buffer1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
