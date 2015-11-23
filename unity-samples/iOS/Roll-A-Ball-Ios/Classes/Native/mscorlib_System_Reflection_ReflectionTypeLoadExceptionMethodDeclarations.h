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
struct ReflectionTypeLoadException_t217;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Exception[]
struct ExceptionU5BU5D_t218;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.ReflectionTypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ReflectionTypeLoadException__ctor_m10077 (ReflectionTypeLoadException_t217 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception[] System.Reflection.ReflectionTypeLoadException::get_LoaderExceptions()
extern "C" ExceptionU5BU5D_t218* ReflectionTypeLoadException_get_LoaderExceptions_m1183 (ReflectionTypeLoadException_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ReflectionTypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ReflectionTypeLoadException_GetObjectData_m10078 (ReflectionTypeLoadException_t217 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
