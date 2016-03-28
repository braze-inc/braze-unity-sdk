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

// Mono.Security.ASN1
struct ASN1_t1254135646;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_DateTime339033936.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C"  ASN1_t1254135646 * ASN1Convert_FromInt32_m571910399 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C"  ASN1_t1254135646 * ASN1Convert_FromOid_m1191866008 (Il2CppObject * __this /* static, unused */, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C"  int32_t ASN1Convert_ToInt32_m3294327310 (Il2CppObject * __this /* static, unused */, ASN1_t1254135646 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C"  String_t* ASN1Convert_ToOid_m1584150353 (Il2CppObject * __this /* static, unused */, ASN1_t1254135646 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C"  DateTime_t339033936  ASN1Convert_ToDateTime_m1541196208 (Il2CppObject * __this /* static, unused */, ASN1_t1254135646 * ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
