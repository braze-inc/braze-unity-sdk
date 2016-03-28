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

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.Oid
struct Oid_t1557563107;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Cryptography_Oid1557563107.h"
#include "System_System_Security_Cryptography_AsnEncodedData4287420181.h"

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C"  void AsnEncodedData__ctor_m4216053755 (AsnEncodedData_t4287420181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C"  void AsnEncodedData__ctor_m2841294762 (AsnEncodedData_t4287420181 * __this, String_t* ___oid, ByteU5BU5D_t58506160* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C"  void AsnEncodedData__ctor_m299043111 (AsnEncodedData_t4287420181 * __this, Oid_t1557563107 * ___oid, ByteU5BU5D_t58506160* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C"  Oid_t1557563107 * AsnEncodedData_get_Oid_m2261116610 (AsnEncodedData_t4287420181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C"  void AsnEncodedData_set_Oid_m865125231 (AsnEncodedData_t4287420181 * __this, Oid_t1557563107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C"  ByteU5BU5D_t58506160* AsnEncodedData_get_RawData_m334685068 (AsnEncodedData_t4287420181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C"  void AsnEncodedData_set_RawData_m839792539 (AsnEncodedData_t4287420181 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void AsnEncodedData_CopyFrom_m406388795 (AsnEncodedData_t4287420181 * __this, AsnEncodedData_t4287420181 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C"  String_t* AsnEncodedData_ToString_m2998858121 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C"  String_t* AsnEncodedData_Default_m2182260212 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_BasicConstraintsExtension_m1615975146 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_EnhancedKeyUsageExtension_m45972986 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_KeyUsageExtension_m3060938192 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3725367926 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C"  String_t* AsnEncodedData_SubjectAltName_m1574931557 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C"  String_t* AsnEncodedData_NetscapeCertType_m2447693060 (AsnEncodedData_t4287420181 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
