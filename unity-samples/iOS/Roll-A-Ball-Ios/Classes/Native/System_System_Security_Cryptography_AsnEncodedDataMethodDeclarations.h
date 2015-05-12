#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1612;
// System.Security.Cryptography.Oid
struct Oid_t1613;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
 void AsnEncodedData__ctor_m7136 (AsnEncodedData_t1612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
 void AsnEncodedData__ctor_m7137 (AsnEncodedData_t1612 * __this, String_t* ___oid, ByteU5BU5D_t112* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
 void AsnEncodedData__ctor_m7138 (AsnEncodedData_t1612 * __this, Oid_t1613 * ___oid, ByteU5BU5D_t112* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
 Oid_t1613 * AsnEncodedData_get_Oid_m7139 (AsnEncodedData_t1612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
 void AsnEncodedData_set_Oid_m7140 (AsnEncodedData_t1612 * __this, Oid_t1613 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
 ByteU5BU5D_t112* AsnEncodedData_get_RawData_m7141 (AsnEncodedData_t1612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
 void AsnEncodedData_set_RawData_m7142 (AsnEncodedData_t1612 * __this, ByteU5BU5D_t112* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void AsnEncodedData_CopyFrom_m7143 (AsnEncodedData_t1612 * __this, AsnEncodedData_t1612 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
 String_t* AsnEncodedData_ToString_m7144 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
 String_t* AsnEncodedData_Default_m7145 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
 String_t* AsnEncodedData_BasicConstraintsExtension_m7146 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_EnhancedKeyUsageExtension_m7147 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_KeyUsageExtension_m7148 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
 String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m7149 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
 String_t* AsnEncodedData_SubjectAltName_m7150 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
 String_t* AsnEncodedData_NetscapeCertType_m7151 (AsnEncodedData_t1612 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
