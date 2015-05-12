#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FieldAccessException
struct FieldAccessException_t2263;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FieldAccessException::.ctor()
 void FieldAccessException__ctor_m11659 (FieldAccessException_t2263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.String)
 void FieldAccessException__ctor_m11660 (FieldAccessException_t2263 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FieldAccessException__ctor_m11661 (FieldAccessException_t2263 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
