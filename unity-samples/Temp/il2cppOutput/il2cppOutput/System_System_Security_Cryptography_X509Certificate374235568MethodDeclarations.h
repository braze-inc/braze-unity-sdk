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

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t374235568;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Cryptography_AsnEncodedData4287420181.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C"  void X509Extension__ctor_m1164925482 (X509Extension_t374235568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C"  void X509Extension__ctor_m2269929986 (X509Extension_t374235568 * __this, String_t* ___oid0, ByteU5BU5D_t58506160* ___rawData1, bool ___critical2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C"  bool X509Extension_get_Critical_m1925069548 (X509Extension_t374235568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C"  void X509Extension_set_Critical_m717701037 (X509Extension_t374235568 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509Extension_CopyFrom_m3838050346 (X509Extension_t374235568 * __this, AsnEncodedData_t4287420181 * ___asnEncodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C"  String_t* X509Extension_FormatUnkownData_m4234400381 (X509Extension_t374235568 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
