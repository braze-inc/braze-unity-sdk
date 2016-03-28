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

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t1066895182;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData4287420181.h"
#include "System_System_Security_Cryptography_X509Certificat3329975702.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu3002376501.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern "C"  void X509KeyUsageExtension__ctor_m3787253324 (X509KeyUsageExtension_t1066895182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509KeyUsageExtension__ctor_m2410062918 (X509KeyUsageExtension_t1066895182 * __this, AsnEncodedData_t4287420181 * ___encodedKeyUsage, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern "C"  void X509KeyUsageExtension__ctor_m3332265501 (X509KeyUsageExtension_t1066895182 * __this, int32_t ___keyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern "C"  int32_t X509KeyUsageExtension_get_KeyUsages_m3177031359 (X509KeyUsageExtension_t1066895182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509KeyUsageExtension_CopyFrom_m1769316556 (X509KeyUsageExtension_t1066895182 * __this, AsnEncodedData_t4287420181 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern "C"  int32_t X509KeyUsageExtension_GetValidFlags_m1081049684 (X509KeyUsageExtension_t1066895182 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern "C"  int32_t X509KeyUsageExtension_Decode_m811458265 (X509KeyUsageExtension_t1066895182 * __this, ByteU5BU5D_t58506160* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern "C"  ByteU5BU5D_t58506160* X509KeyUsageExtension_Encode_m1941209444 (X509KeyUsageExtension_t1066895182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern "C"  String_t* X509KeyUsageExtension_ToString_m1884016728 (X509KeyUsageExtension_t1066895182 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
