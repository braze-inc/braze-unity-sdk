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

// System.FieldAccessException
struct FieldAccessException_t1996;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FieldAccessException::.ctor()
extern "C" void FieldAccessException__ctor_m11987 (FieldAccessException_t1996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.String)
extern "C" void FieldAccessException__ctor_m11988 (FieldAccessException_t1996 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FieldAccessException__ctor_m11989 (FieldAccessException_t1996 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
