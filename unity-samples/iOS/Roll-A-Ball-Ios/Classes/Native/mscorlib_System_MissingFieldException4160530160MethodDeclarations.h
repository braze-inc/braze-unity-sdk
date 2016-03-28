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

// System.MissingFieldException
struct MissingFieldException_t4160530160;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.MissingFieldException::.ctor()
extern "C"  void MissingFieldException__ctor_m1256695606 (MissingFieldException_t4160530160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.String)
extern "C"  void MissingFieldException__ctor_m237625228 (MissingFieldException_t4160530160 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingFieldException__ctor_m3823922039 (MissingFieldException_t4160530160 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingFieldException::get_Message()
extern "C"  String_t* MissingFieldException_get_Message_m1733981935 (MissingFieldException_t4160530160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
