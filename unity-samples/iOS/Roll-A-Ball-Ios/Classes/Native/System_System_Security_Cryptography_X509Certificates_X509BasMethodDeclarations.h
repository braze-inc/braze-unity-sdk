#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t1619;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1612;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
 void X509BasicConstraintsExtension__ctor_m6972 (X509BasicConstraintsExtension_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m6973 (X509BasicConstraintsExtension_t1619 * __this, AsnEncodedData_t1612 * ___encodedBasicConstraints, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m6974 (X509BasicConstraintsExtension_t1619 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
 bool X509BasicConstraintsExtension_get_CertificateAuthority_m6975 (X509BasicConstraintsExtension_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
 bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m6976 (X509BasicConstraintsExtension_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
 int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m6977 (X509BasicConstraintsExtension_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509BasicConstraintsExtension_CopyFrom_m6978 (X509BasicConstraintsExtension_t1619 * __this, AsnEncodedData_t1612 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
 int32_t X509BasicConstraintsExtension_Decode_m6979 (X509BasicConstraintsExtension_t1619 * __this, ByteU5BU5D_t112* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
 ByteU5BU5D_t112* X509BasicConstraintsExtension_Encode_m6980 (X509BasicConstraintsExtension_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
 String_t* X509BasicConstraintsExtension_ToString_m6981 (X509BasicConstraintsExtension_t1619 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
