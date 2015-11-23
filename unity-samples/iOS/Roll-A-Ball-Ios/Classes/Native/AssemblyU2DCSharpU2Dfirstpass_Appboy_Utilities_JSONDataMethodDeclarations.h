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
struct JSONData_t26;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t67;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Utilities.JSONData::.ctor(System.String)
extern "C" void JSONData__ctor_m227 (JSONData_t26 * __this, String_t* ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Single)
extern "C" void JSONData__ctor_m228 (JSONData_t26 * __this, float ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Double)
extern "C" void JSONData__ctor_m229 (JSONData_t26 * __this, double ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Boolean)
extern "C" void JSONData__ctor_m230 (JSONData_t26 * __this, bool ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Int32)
extern "C" void JSONData__ctor_m231 (JSONData_t26 * __this, int32_t ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::get_Value()
extern "C" String_t* JSONData_get_Value_m232 (JSONData_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::set_Value(System.String)
extern "C" void JSONData_set_Value_m233 (JSONData_t26 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::ToString()
extern "C" String_t* JSONData_ToString_m234 (JSONData_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::ToString(System.String)
extern "C" String_t* JSONData_ToString_m235 (JSONData_t26 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::Serialize(System.IO.BinaryWriter)
extern "C" void JSONData_Serialize_m236 (JSONData_t26 * __this, BinaryWriter_t67 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
