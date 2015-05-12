#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1998;
// System.Exception
struct Exception_t71;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
 void TargetInvocationException__ctor_m10138 (TargetInvocationException_t1998 * __this, Exception_t71 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TargetInvocationException__ctor_m10139 (TargetInvocationException_t1998 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
