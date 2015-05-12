#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Convert
struct Convert_t99;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Convert::.cctor()
 void Convert__cctor_m11304 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::InternalFromBase64String(System.String,System.Boolean)
 ByteU5BU5D_t97* Convert_InternalFromBase64String_m11305 (Object_t * __this/* static, unused */, String_t* ___str, bool ___allowWhitespaceOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
 ByteU5BU5D_t97* Convert_FromBase64String_m535 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
 String_t* Convert_ToBase64String_m526 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___inArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[],System.Int32,System.Int32)
 String_t* Convert_ToBase64String_m11306 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___inArray, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Byte)
 bool Convert_ToBoolean_m11307 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Decimal)
 bool Convert_ToBoolean_m11308 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Double)
 bool Convert_ToBoolean_m11309 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Single)
 bool Convert_ToBoolean_m11310 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int32)
 bool Convert_ToBoolean_m11311 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int64)
 bool Convert_ToBoolean_m11312 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.SByte)
 bool Convert_ToBoolean_m11313 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int16)
 bool Convert_ToBoolean_m11314 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.String,System.IFormatProvider)
 bool Convert_ToBoolean_m11315 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
 bool Convert_ToBoolean_m11316 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
 bool Convert_ToBoolean_m11317 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
 bool Convert_ToBoolean_m11318 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
 bool Convert_ToBoolean_m11319 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
 bool Convert_ToBoolean_m11320 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Boolean)
 uint8_t Convert_ToByte_m11321 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Char)
 uint8_t Convert_ToByte_m11322 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Decimal)
 uint8_t Convert_ToByte_m11323 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Double)
 uint8_t Convert_ToByte_m11324 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Single)
 uint8_t Convert_ToByte_m11325 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
 uint8_t Convert_ToByte_m11326 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int64)
 uint8_t Convert_ToByte_m11327 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.SByte)
 uint8_t Convert_ToByte_m11328 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int16)
 uint8_t Convert_ToByte_m11329 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String)
 uint8_t Convert_ToByte_m11330 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String,System.IFormatProvider)
 uint8_t Convert_ToByte_m11331 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
 uint8_t Convert_ToByte_m11332 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
 uint8_t Convert_ToByte_m11333 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
 uint8_t Convert_ToByte_m11334 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Object,System.IFormatProvider)
 uint8_t Convert_ToByte_m11335 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Byte)
 uint16_t Convert_ToChar_m6523 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
 uint16_t Convert_ToChar_m11336 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int64)
 uint16_t Convert_ToChar_m11337 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Single)
 uint16_t Convert_ToChar_m11338 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.SByte)
 uint16_t Convert_ToChar_m11339 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int16)
 uint16_t Convert_ToChar_m11340 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String,System.IFormatProvider)
 uint16_t Convert_ToChar_m11341 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
 uint16_t Convert_ToChar_m11342 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
 uint16_t Convert_ToChar_m11343 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
 uint16_t Convert_ToChar_m11344 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
 uint16_t Convert_ToChar_m11345 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
 DateTime_t837  Convert_ToDateTime_m11346 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int16)
 DateTime_t837  Convert_ToDateTime_m11347 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int32)
 DateTime_t837  Convert_ToDateTime_m11348 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int64)
 DateTime_t837  Convert_ToDateTime_m11349 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Single)
 DateTime_t837  Convert_ToDateTime_m11350 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
 DateTime_t837  Convert_ToDateTime_m11351 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.SByte)
 DateTime_t837  Convert_ToDateTime_m11352 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
 DateTime_t837  Convert_ToDateTime_m11353 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
 DateTime_t837  Convert_ToDateTime_m11354 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
 DateTime_t837  Convert_ToDateTime_m11355 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Boolean)
 Decimal_t5  Convert_ToDecimal_m11356 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Byte)
 Decimal_t5  Convert_ToDecimal_m11357 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
 Decimal_t5  Convert_ToDecimal_m11358 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
 Decimal_t5  Convert_ToDecimal_m11359 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int32)
 Decimal_t5  Convert_ToDecimal_m11360 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int64)
 Decimal_t5  Convert_ToDecimal_m11361 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.SByte)
 Decimal_t5  Convert_ToDecimal_m11362 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int16)
 Decimal_t5  Convert_ToDecimal_m11363 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String)
 Decimal_t5  Convert_ToDecimal_m1079 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String,System.IFormatProvider)
 Decimal_t5  Convert_ToDecimal_m11364 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
 Decimal_t5  Convert_ToDecimal_m11365 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
 Decimal_t5  Convert_ToDecimal_m11366 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
 Decimal_t5  Convert_ToDecimal_m11367 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
 Decimal_t5  Convert_ToDecimal_m11368 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
 double Convert_ToDouble_m11369 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Byte)
 double Convert_ToDouble_m11370 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Decimal)
 double Convert_ToDouble_m11371 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Double)
 double Convert_ToDouble_m11372 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Single)
 double Convert_ToDouble_m11373 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
 double Convert_ToDouble_m11374 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int64)
 double Convert_ToDouble_m11375 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.SByte)
 double Convert_ToDouble_m11376 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int16)
 double Convert_ToDouble_m11377 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
 double Convert_ToDouble_m11378 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
 double Convert_ToDouble_m11379 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
 double Convert_ToDouble_m11380 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
 double Convert_ToDouble_m11381 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
 double Convert_ToDouble_m11382 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Boolean)
 int16_t Convert_ToInt16_m11383 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Byte)
 int16_t Convert_ToInt16_m11384 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Char)
 int16_t Convert_ToInt16_m11385 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Decimal)
 int16_t Convert_ToInt16_m11386 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Double)
 int16_t Convert_ToInt16_m11387 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Single)
 int16_t Convert_ToInt16_m11388 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
 int16_t Convert_ToInt16_m11389 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int64)
 int16_t Convert_ToInt16_m11390 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.SByte)
 int16_t Convert_ToInt16_m11391 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int16)
 int16_t Convert_ToInt16_m11392 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.String,System.IFormatProvider)
 int16_t Convert_ToInt16_m6407 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
 int16_t Convert_ToInt16_m11393 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
 int16_t Convert_ToInt16_m11394 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
 int16_t Convert_ToInt16_m11395 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object)
 int16_t Convert_ToInt16_m11396 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
 int16_t Convert_ToInt16_m11397 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Boolean)
 int32_t Convert_ToInt32_m11398 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
 int32_t Convert_ToInt32_m11399 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
 int32_t Convert_ToInt32_m11400 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Decimal)
 int32_t Convert_ToInt32_m11401 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Double)
 int32_t Convert_ToInt32_m11402 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
 int32_t Convert_ToInt32_m11403 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int64)
 int32_t Convert_ToInt32_m11404 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
 int32_t Convert_ToInt32_m11405 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
 int32_t Convert_ToInt32_m11406 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String)
 int32_t Convert_ToInt32_m1078 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
 int32_t Convert_ToInt32_m11407 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
 int32_t Convert_ToInt32_m11408 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
 int32_t Convert_ToInt32_m11409 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
 int32_t Convert_ToInt32_m11410 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
 int32_t Convert_ToInt32_m11411 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
 int32_t Convert_ToInt32_m6534 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Boolean)
 int64_t Convert_ToInt64_m11412 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Byte)
 int64_t Convert_ToInt64_m11413 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Char)
 int64_t Convert_ToInt64_m11414 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Decimal)
 int64_t Convert_ToInt64_m11415 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Double)
 int64_t Convert_ToInt64_m11416 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Single)
 int64_t Convert_ToInt64_m11417 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int32)
 int64_t Convert_ToInt64_m11418 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int64)
 int64_t Convert_ToInt64_m11419 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.SByte)
 int64_t Convert_ToInt64_m11420 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int16)
 int64_t Convert_ToInt64_m11421 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String)
 int64_t Convert_ToInt64_m1071 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
 int64_t Convert_ToInt64_m11422 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
 int64_t Convert_ToInt64_m11423 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
 int64_t Convert_ToInt64_m11424 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
 int64_t Convert_ToInt64_m11425 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object)
 int64_t Convert_ToInt64_m11426 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
 int64_t Convert_ToInt64_m11427 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Boolean)
 int8_t Convert_ToSByte_m11428 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Byte)
 int8_t Convert_ToSByte_m11429 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Char)
 int8_t Convert_ToSByte_m11430 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Decimal)
 int8_t Convert_ToSByte_m11431 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Double)
 int8_t Convert_ToSByte_m11432 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Single)
 int8_t Convert_ToSByte_m11433 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
 int8_t Convert_ToSByte_m11434 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int64)
 int8_t Convert_ToSByte_m11435 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int16)
 int8_t Convert_ToSByte_m11436 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.String,System.IFormatProvider)
 int8_t Convert_ToSByte_m11437 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
 int8_t Convert_ToSByte_m11438 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
 int8_t Convert_ToSByte_m11439 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
 int8_t Convert_ToSByte_m11440 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
 int8_t Convert_ToSByte_m11441 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Boolean)
 float Convert_ToSingle_m11442 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Byte)
 float Convert_ToSingle_m11443 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Decimal)
 float Convert_ToSingle_m11444 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Double)
 float Convert_ToSingle_m11445 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
 float Convert_ToSingle_m11446 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
 float Convert_ToSingle_m11447 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int64)
 float Convert_ToSingle_m11448 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.SByte)
 float Convert_ToSingle_m11449 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int16)
 float Convert_ToSingle_m11450 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
 float Convert_ToSingle_m11451 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
 float Convert_ToSingle_m11452 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
 float Convert_ToSingle_m11453 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
 float Convert_ToSingle_m11454 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
 float Convert_ToSingle_m11455 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
 String_t* Convert_ToString_m11456 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
 String_t* Convert_ToString_m11457 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Boolean)
 uint16_t Convert_ToUInt16_m11458 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Byte)
 uint16_t Convert_ToUInt16_m11459 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Char)
 uint16_t Convert_ToUInt16_m11460 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Decimal)
 uint16_t Convert_ToUInt16_m11461 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Double)
 uint16_t Convert_ToUInt16_m11462 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Single)
 uint16_t Convert_ToUInt16_m11463 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
 uint16_t Convert_ToUInt16_m11464 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int64)
 uint16_t Convert_ToUInt16_m11465 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.SByte)
 uint16_t Convert_ToUInt16_m11466 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int16)
 uint16_t Convert_ToUInt16_m11467 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.String,System.IFormatProvider)
 uint16_t Convert_ToUInt16_m11468 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
 uint16_t Convert_ToUInt16_m11469 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
 uint16_t Convert_ToUInt16_m11470 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object,System.IFormatProvider)
 uint16_t Convert_ToUInt16_m11471 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
 uint32_t Convert_ToUInt32_m5016 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Byte)
 uint32_t Convert_ToUInt32_m11472 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Char)
 uint32_t Convert_ToUInt32_m11473 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
 uint32_t Convert_ToUInt32_m11474 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Double)
 uint32_t Convert_ToUInt32_m11475 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Single)
 uint32_t Convert_ToUInt32_m11476 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
 uint32_t Convert_ToUInt32_m11477 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
 uint32_t Convert_ToUInt32_m11478 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.SByte)
 uint32_t Convert_ToUInt32_m11479 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int16)
 uint32_t Convert_ToUInt32_m11480 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.String,System.IFormatProvider)
 uint32_t Convert_ToUInt32_m11481 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
 uint32_t Convert_ToUInt32_m11482 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
 uint32_t Convert_ToUInt32_m11483 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object)
 uint32_t Convert_ToUInt32_m5015 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
 uint32_t Convert_ToUInt32_m11484 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Boolean)
 uint64_t Convert_ToUInt64_m11485 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Byte)
 uint64_t Convert_ToUInt64_m11486 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Char)
 uint64_t Convert_ToUInt64_m11487 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
 uint64_t Convert_ToUInt64_m11488 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Double)
 uint64_t Convert_ToUInt64_m11489 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Single)
 uint64_t Convert_ToUInt64_m11490 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
 uint64_t Convert_ToUInt64_m11491 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int64)
 uint64_t Convert_ToUInt64_m11492 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.SByte)
 uint64_t Convert_ToUInt64_m11493 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int16)
 uint64_t Convert_ToUInt64_m11494 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.String,System.IFormatProvider)
 uint64_t Convert_ToUInt64_m11495 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
 uint64_t Convert_ToUInt64_m11496 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
 uint64_t Convert_ToUInt64_m11497 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
 uint64_t Convert_ToUInt64_m11498 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
 uint64_t Convert_ToUInt64_m11499 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
 Object_t * Convert_ChangeType_m11500 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___conversionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
 Object_t * Convert_ToType_m11501 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___conversionType, Object_t * ___provider, bool ___try_target_to_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
