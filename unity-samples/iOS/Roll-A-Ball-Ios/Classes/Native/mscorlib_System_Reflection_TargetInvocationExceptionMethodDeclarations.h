#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t2010;
// System.Exception
struct Exception_t82;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
 void TargetInvocationException__ctor_m10233 (TargetInvocationException_t2010 * __this, Exception_t82 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TargetInvocationException__ctor_m10234 (TargetInvocationException_t2010 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
