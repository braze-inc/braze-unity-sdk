#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t2243;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
 void DateTimeOffset__ctor_m11592 (DateTimeOffset_t2243 * __this, DateTime_t837  ___dateTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
 void DateTimeOffset__ctor_m11593 (DateTimeOffset_t2243 * __this, DateTime_t837  ___dateTime, TimeSpan_t1620  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
 void DateTimeOffset__ctor_m11594 (DateTimeOffset_t2243 * __this, int64_t ___ticks, TimeSpan_t1620  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset__ctor_m11595 (DateTimeOffset_t2243 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
 void DateTimeOffset__cctor_m11596 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
 int32_t DateTimeOffset_System_IComparable_CompareTo_m11597 (DateTimeOffset_t2243 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m11598 (DateTimeOffset_t2243 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11599 (DateTimeOffset_t2243 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
 int32_t DateTimeOffset_CompareTo_m11600 (DateTimeOffset_t2243 * __this, DateTimeOffset_t2243  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
 bool DateTimeOffset_Equals_m11601 (DateTimeOffset_t2243 * __this, DateTimeOffset_t2243  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
 bool DateTimeOffset_Equals_m11602 (DateTimeOffset_t2243 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
 int32_t DateTimeOffset_GetHashCode_m11603 (DateTimeOffset_t2243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
 String_t* DateTimeOffset_ToString_m11604 (DateTimeOffset_t2243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
 String_t* DateTimeOffset_ToString_m11605 (DateTimeOffset_t2243 * __this, String_t* ___format, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
 DateTime_t837  DateTimeOffset_get_DateTime_m11606 (DateTimeOffset_t2243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
 TimeSpan_t1620  DateTimeOffset_get_Offset_m11607 (DateTimeOffset_t2243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
 DateTime_t837  DateTimeOffset_get_UtcDateTime_m11608 (DateTimeOffset_t2243 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
