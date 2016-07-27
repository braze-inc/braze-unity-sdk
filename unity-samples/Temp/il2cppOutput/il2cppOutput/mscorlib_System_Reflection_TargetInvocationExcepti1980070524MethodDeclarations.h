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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1980070524;
// System.Exception
struct Exception_t1967233988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C"  void TargetInvocationException__ctor_m2876037082 (TargetInvocationException_t1980070524 * __this, Exception_t1967233988 * ___inner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TargetInvocationException__ctor_m706824555 (TargetInvocationException_t1980070524 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
