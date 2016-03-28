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

// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_t2297532978;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Exception[]
struct ExceptionU5BU5D_t1629112493;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Reflection.ReflectionTypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ReflectionTypeLoadException__ctor_m2363984437 (ReflectionTypeLoadException_t2297532978 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception[] System.Reflection.ReflectionTypeLoadException::get_LoaderExceptions()
extern "C"  ExceptionU5BU5D_t1629112493* ReflectionTypeLoadException_get_LoaderExceptions_m1160393431 (ReflectionTypeLoadException_t2297532978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ReflectionTypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ReflectionTypeLoadException_GetObjectData_m3425291410 (ReflectionTypeLoadException_t2297532978 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
