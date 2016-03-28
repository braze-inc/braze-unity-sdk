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

// System.ArgumentException
struct ArgumentException_t124305799;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m571182463 (ArgumentException_t124305799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m3544856547 (ArgumentException_t124305799 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m2711220147 (ArgumentException_t124305799 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m732321503 (ArgumentException_t124305799 * __this, String_t* ___message, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m618145847 (ArgumentException_t124305799 * __this, String_t* ___message, String_t* ___paramName, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ArgumentException__ctor_m1401467456 (ArgumentException_t124305799 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
extern "C"  String_t* ArgumentException_get_ParamName_m1483230569 (ArgumentException_t124305799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
extern "C"  String_t* ArgumentException_get_Message_m2632345848 (ArgumentException_t124305799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ArgumentException_GetObjectData_m1913895325 (ArgumentException_t124305799 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
