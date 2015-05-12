#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Utilities.JSONData
struct JSONData_t39;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t26;

// System.Void Appboy.Utilities.JSONData::.ctor(System.String)
 void JSONData__ctor_m226 (JSONData_t39 * __this, String_t* ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Single)
 void JSONData__ctor_m227 (JSONData_t39 * __this, float ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Double)
 void JSONData__ctor_m228 (JSONData_t39 * __this, double ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Boolean)
 void JSONData__ctor_m229 (JSONData_t39 * __this, bool ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::.ctor(System.Int32)
 void JSONData__ctor_m230 (JSONData_t39 * __this, int32_t ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::get_Value()
 String_t* JSONData_get_Value_m231 (JSONData_t39 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::set_Value(System.String)
 void JSONData_set_Value_m232 (JSONData_t39 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::ToString()
 String_t* JSONData_ToString_m233 (JSONData_t39 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONData::ToString(System.String)
 String_t* JSONData_ToString_m234 (JSONData_t39 * __this, String_t* ___aPrefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONData::Serialize(System.IO.BinaryWriter)
 void JSONData_Serialize_m235 (JSONData_t39 * __this, BinaryWriter_t26 * ___aWriter, MethodInfo* method) IL2CPP_METHOD_ATTR;
