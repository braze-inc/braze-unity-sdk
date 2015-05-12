#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1617;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
#include "System_System_Security_Cryptography_X509Certificates_X500Dis_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
 void X500DistinguishedName__ctor_m6966 (X500DistinguishedName_t1617 * __this, ByteU5BU5D_t112* ___encodedDistinguishedName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
 String_t* X500DistinguishedName_Decode_m6967 (X500DistinguishedName_t1617 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
 String_t* X500DistinguishedName_GetSeparator_m6968 (Object_t * __this/* static, unused */, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
 void X500DistinguishedName_DecodeRawData_m6969 (X500DistinguishedName_t1617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
 String_t* X500DistinguishedName_Canonize_m6970 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
 bool X500DistinguishedName_AreEqual_m6971 (Object_t * __this/* static, unused */, X500DistinguishedName_t1617 * ___name1, X500DistinguishedName_t1617 * ___name2, MethodInfo* method) IL2CPP_METHOD_ATTR;
