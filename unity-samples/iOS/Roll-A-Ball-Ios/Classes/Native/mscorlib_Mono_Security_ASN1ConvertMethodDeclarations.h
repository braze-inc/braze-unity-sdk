#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t1832;
// Mono.Security.ASN1
struct ASN1_t1821;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
 int32_t ASN1Convert_ToInt32_m8901 (Object_t * __this/* static, unused */, ASN1_t1821 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
 String_t* ASN1Convert_ToOid_m8902 (Object_t * __this/* static, unused */, ASN1_t1821 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
 DateTime_t837  ASN1Convert_ToDateTime_m8903 (Object_t * __this/* static, unused */, ASN1_t1821 * ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
