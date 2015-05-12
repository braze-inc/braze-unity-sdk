#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1608;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1600;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
 void X509Extension__ctor_m6995 (X509Extension_t1608 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
 void X509Extension__ctor_m6996 (X509Extension_t1608 * __this, String_t* ___oid, ByteU5BU5D_t97* ___rawData, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
 bool X509Extension_get_Critical_m6997 (X509Extension_t1608 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
 void X509Extension_set_Critical_m6998 (X509Extension_t1608 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509Extension_CopyFrom_m6999 (X509Extension_t1608 * __this, AsnEncodedData_t1600 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
 String_t* X509Extension_FormatUnkownData_m7000 (X509Extension_t1608 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
