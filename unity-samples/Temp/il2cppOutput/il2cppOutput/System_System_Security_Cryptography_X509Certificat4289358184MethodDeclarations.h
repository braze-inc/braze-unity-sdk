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

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t4289358184;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData4287420181.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu3002376501.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C"  void X509BasicConstraintsExtension__ctor_m4274454898 (X509BasicConstraintsExtension_t4289358184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509BasicConstraintsExtension__ctor_m331703276 (X509BasicConstraintsExtension_t4289358184 * __this, AsnEncodedData_t4287420181 * ___encodedBasicConstraints0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C"  void X509BasicConstraintsExtension__ctor_m2615084218 (X509BasicConstraintsExtension_t4289358184 * __this, bool ___certificateAuthority0, bool ___hasPathLengthConstraint1, int32_t ___pathLengthConstraint2, bool ___critical3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C"  bool X509BasicConstraintsExtension_get_CertificateAuthority_m2798502193 (X509BasicConstraintsExtension_t4289358184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C"  bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m2782347167 (X509BasicConstraintsExtension_t4289358184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C"  int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m482430355 (X509BasicConstraintsExtension_t4289358184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509BasicConstraintsExtension_CopyFrom_m2536122738 (X509BasicConstraintsExtension_t4289358184 * __this, AsnEncodedData_t4287420181 * ___asnEncodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C"  int32_t X509BasicConstraintsExtension_Decode_m587114879 (X509BasicConstraintsExtension_t4289358184 * __this, ByteU5BU5D_t58506160* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C"  ByteU5BU5D_t58506160* X509BasicConstraintsExtension_Encode_m1897551102 (X509BasicConstraintsExtension_t4289358184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C"  String_t* X509BasicConstraintsExtension_ToString_m917821682 (X509BasicConstraintsExtension_t4289358184 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
