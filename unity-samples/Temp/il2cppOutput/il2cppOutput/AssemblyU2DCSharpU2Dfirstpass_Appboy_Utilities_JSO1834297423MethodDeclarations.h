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

// Appboy.Utilities.JSONData
struct JSONData_t1834297423;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"

// System.Void Appboy.Utilities.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m1999390788 (JSONData_t1834297423 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m1680714477 (JSONData_t1834297423 * __this, float ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m1431151748 (JSONData_t1834297423 * __this, double ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m2062627957 (JSONData_t1834297423 * __this, bool ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m1158142927 (JSONData_t1834297423 * __this, int32_t ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::get_Value()
extern "C"  String_t* JSONData_get_Value_m3989029191 (JSONData_t1834297423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::set_Value(System.String)
extern "C"  void JSONData_set_Value_m83400594 (JSONData_t1834297423 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::ToString()
extern "C"  String_t* JSONData_ToString_m1755234735 (JSONData_t1834297423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::ToString(System.String)
extern "C"  String_t* JSONData_ToString_m2049003955 (JSONData_t1834297423 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONData_Serialize_m1904999231 (JSONData_t1834297423 * __this, BinaryWriter_t2314211483 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
