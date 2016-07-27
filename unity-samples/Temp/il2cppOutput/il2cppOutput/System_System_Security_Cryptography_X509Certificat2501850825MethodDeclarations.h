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

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t2501850825;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificate504749004.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Cryptography_X509Certificat2501850825.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
extern "C"  void X500DistinguishedName__ctor_m1884931640 (X500DistinguishedName_t2501850825 * __this, ByteU5BU5D_t58506160* ___encodedDistinguishedName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C"  String_t* X500DistinguishedName_Decode_m1854433232 (X500DistinguishedName_t2501850825 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C"  String_t* X500DistinguishedName_GetSeparator_m1820431761 (Il2CppObject * __this /* static, unused */, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
extern "C"  void X500DistinguishedName_DecodeRawData_m2106660211 (X500DistinguishedName_t2501850825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
extern "C"  String_t* X500DistinguishedName_Canonize_m3238640877 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C"  bool X500DistinguishedName_AreEqual_m3926647407 (Il2CppObject * __this /* static, unused */, X500DistinguishedName_t2501850825 * ___name10, X500DistinguishedName_t2501850825 * ___name21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
