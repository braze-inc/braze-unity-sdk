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

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t969036148;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2902591373;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData4287420181.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Cryptography_X509Certificat2902591373.h"
#include "System_System_Security_Cryptography_X509Certificat2042366262.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu3002376501.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3478259430 (X509SubjectKeyIdentifierExtension_t969036148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m804319328 (X509SubjectKeyIdentifierExtension_t969036148 * __this, AsnEncodedData_t4287420181 * ___encodedSubjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m2338585210 (X509SubjectKeyIdentifierExtension_t969036148 * __this, ByteU5BU5D_t58506160* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1613029921 (X509SubjectKeyIdentifierExtension_t969036148 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1879279918 (X509SubjectKeyIdentifierExtension_t969036148 * __this, PublicKey_t2902591373 * ___key, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m891295656 (X509SubjectKeyIdentifierExtension_t969036148 * __this, PublicKey_t2902591373 * ___key, int32_t ___algorithm, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C"  String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m2494939520 (X509SubjectKeyIdentifierExtension_t969036148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509SubjectKeyIdentifierExtension_CopyFrom_m3398288358 (X509SubjectKeyIdentifierExtension_t969036148 * __this, AsnEncodedData_t4287420181 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m751746662 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m3730448342 (Il2CppObject * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C"  ByteU5BU5D_t58506160* X509SubjectKeyIdentifierExtension_FromHex_m3994967203 (Il2CppObject * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C"  int32_t X509SubjectKeyIdentifierExtension_Decode_m3290786035 (X509SubjectKeyIdentifierExtension_t969036148 * __this, ByteU5BU5D_t58506160* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C"  ByteU5BU5D_t58506160* X509SubjectKeyIdentifierExtension_Encode_m852919050 (X509SubjectKeyIdentifierExtension_t969036148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C"  String_t* X509SubjectKeyIdentifierExtension_ToString_m2596463486 (X509SubjectKeyIdentifierExtension_t969036148 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
