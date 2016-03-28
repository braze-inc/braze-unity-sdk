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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_NumberStyles3988678145.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Object System.Double::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * Double_System_IConvertible_ToType_m3081766574 (double* __this, Type_t * ___targetType, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Double_System_IConvertible_ToBoolean_m1420114956 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Double::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Double_System_IConvertible_ToByte_m3166411992 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Double::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t Double_System_IConvertible_ToChar_m832351220 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Double::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t339033936  Double_System_IConvertible_ToDateTime_m2501791934 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Double::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1688557254  Double_System_IConvertible_ToDecimal_m87321260 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Double_System_IConvertible_ToDouble_m233905130 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Double::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Double_System_IConvertible_ToInt16_m3883955340 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Double_System_IConvertible_ToInt32_m1264391244 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Double::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Double_System_IConvertible_ToInt64_m1713000172 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Double::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Double_System_IConvertible_ToSByte_m140140076 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Double::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Double_System_IConvertible_ToSingle_m1798614104 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Double::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Double_System_IConvertible_ToUInt16_m3970470150 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Double::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Double_System_IConvertible_ToUInt32_m2350155386 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Double::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Double_System_IConvertible_ToUInt64_m658856632 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Object)
extern "C"  int32_t Double_CompareTo_m2864423062 (double* __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Object)
extern "C"  bool Double_Equals_m1597124279 (double* __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Double)
extern "C"  int32_t Double_CompareTo_m2074073668 (double* __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Double)
extern "C"  bool Double_Equals_m806774885 (double* __this, double ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::GetHashCode()
extern "C"  int32_t Double_GetHashCode_m2106126735 (double* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsInfinity(System.Double)
extern "C"  bool Double_IsInfinity_m3094155474 (Il2CppObject * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
extern "C"  bool Double_IsNaN_m506471885 (Il2CppObject * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
extern "C"  bool Double_IsNegativeInfinity_m553043933 (Il2CppObject * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
extern "C"  bool Double_IsPositiveInfinity_m3352165785 (Il2CppObject * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String)
extern "C"  double Double_Parse_m3110783306 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
extern "C"  double Double_Parse_m2930245738 (Il2CppObject * __this /* static, unused */, String_t* ___s, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  double Double_Parse_m3249074997 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___style, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Double&,System.Exception&)
extern "C"  bool Double_Parse_m1451965917 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___style, Il2CppObject * ___provider, bool ___tryParse, double* ___result, Exception_t1967233988 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool Double_TryParseStringConstant_m2653461779 (Il2CppObject * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::ParseImpl(System.Byte*,System.Double&)
extern "C"  bool Double_ParseImpl_m1244982012 (Il2CppObject * __this /* static, unused */, uint8_t* ___byte_ptr, double* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m707798013 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___style, Il2CppObject * ___provider, double* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C"  bool Double_TryParse_m2709942532 (Il2CppObject * __this /* static, unused */, String_t* ___s, double* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString()
extern "C"  String_t* Double_ToString_m3380246633 (double* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.IFormatProvider)
extern "C"  String_t* Double_ToString_m937670807 (double* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String)
extern "C"  String_t* Double_ToString_m1570887993 (double* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m2573497243 (double* __this, String_t* ___format, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
