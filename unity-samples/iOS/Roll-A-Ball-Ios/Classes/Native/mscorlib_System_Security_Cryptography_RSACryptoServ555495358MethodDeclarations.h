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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t555495358;
// System.Security.Cryptography.CspParameters
struct CspParameters_t4096074019;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t516466188;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameter4096074019.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C"  void RSACryptoServiceProvider__ctor_m8796060 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider__ctor_m32080133 (RSACryptoServiceProvider_t555495358 * __this, CspParameters_t4096074019 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void RSACryptoServiceProvider__ctor_m4233192173 (RSACryptoServiceProvider_t555495358 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C"  void RSACryptoServiceProvider__cctor_m4085548945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider_Common_m3809083019 (RSACryptoServiceProvider_t555495358 * __this, int32_t ___dwKeySize, CspParameters_t4096074019 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C"  void RSACryptoServiceProvider_Finalize_m152924998 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t RSACryptoServiceProvider_get_KeySize_m1022373229 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool RSACryptoServiceProvider_get_PublicOnly_m2755170020 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_DecryptValue_m3565674343 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_EncryptValue_m511499327 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t2711684451  RSACryptoServiceProvider_ExportParameters_m71989545 (RSACryptoServiceProvider_t555495358 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSACryptoServiceProvider_ImportParameters_m3023964864 (RSACryptoServiceProvider_t555495358 * __this, RSAParameters_t2711684451  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void RSACryptoServiceProvider_Dispose_m4161630864 (RSACryptoServiceProvider_t555495358 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void RSACryptoServiceProvider_OnKeyGenerated_m4166429105 (RSACryptoServiceProvider_t555495358 * __this, Il2CppObject * ___sender, EventArgs_t516466188 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
