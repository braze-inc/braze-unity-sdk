#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t1522;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1521;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1407;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
 void RSACryptoServiceProvider__ctor_m10841 (RSACryptoServiceProvider_t1522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider__ctor_m6540 (RSACryptoServiceProvider_t1522 * __this, CspParameters_t1521 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
 void RSACryptoServiceProvider__ctor_m6576 (RSACryptoServiceProvider_t1522 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
 void RSACryptoServiceProvider__cctor_m10842 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider_Common_m10843 (RSACryptoServiceProvider_t1522 * __this, int32_t ___dwKeySize, CspParameters_t1521 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
 void RSACryptoServiceProvider_Finalize_m10844 (RSACryptoServiceProvider_t1522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
 int32_t RSACryptoServiceProvider_get_KeySize_m10845 (RSACryptoServiceProvider_t1522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
 bool RSACryptoServiceProvider_get_PublicOnly_m7684 (RSACryptoServiceProvider_t1522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
 ByteU5BU5D_t112* RSACryptoServiceProvider_DecryptValue_m10846 (RSACryptoServiceProvider_t1522 * __this, ByteU5BU5D_t112* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
 ByteU5BU5D_t112* RSACryptoServiceProvider_EncryptValue_m10847 (RSACryptoServiceProvider_t1522 * __this, ByteU5BU5D_t112* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
 RSAParameters_t1410  RSACryptoServiceProvider_ExportParameters_m10848 (RSACryptoServiceProvider_t1522 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSACryptoServiceProvider_ImportParameters_m10849 (RSACryptoServiceProvider_t1522 * __this, RSAParameters_t1410  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
 void RSACryptoServiceProvider_Dispose_m10850 (RSACryptoServiceProvider_t1522 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void RSACryptoServiceProvider_OnKeyGenerated_m10851 (RSACryptoServiceProvider_t1522 * __this, Object_t * ___sender, EventArgs_t1407 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
