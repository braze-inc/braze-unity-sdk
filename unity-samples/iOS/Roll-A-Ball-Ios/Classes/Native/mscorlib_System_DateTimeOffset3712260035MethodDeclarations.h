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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t3436592966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m206991153 (DateTimeOffset_t3712260035 * __this, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2612619655 (DateTimeOffset_t3712260035 * __this, DateTime_t339033936  ___dateTime, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2468003023 (DateTimeOffset_t3712260035 * __this, int64_t ___ticks, TimeSpan_t763862892  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m846097640 (DateTimeOffset_t3712260035 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m2485435494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1459743069 (DateTimeOffset_t3712260035 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m2682194308 (DateTimeOffset_t3712260035 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3161484655 (DateTimeOffset_t3712260035 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m1122350244 (DateTimeOffset_t3712260035 * __this, DateTimeOffset_t3712260035  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m4108087019 (DateTimeOffset_t3712260035 * __this, DateTimeOffset_t3712260035  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m1431331290 (DateTimeOffset_t3712260035 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m1972583858 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m983707174 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m4001156824 (DateTimeOffset_t3712260035 * __this, String_t* ___format, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t339033936  DateTimeOffset_get_DateTime_m2501837032 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t763862892  DateTimeOffset_get_Offset_m3938299132 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t339033936  DateTimeOffset_get_UtcDateTime_m2831969300 (DateTimeOffset_t3712260035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
