#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t1504;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentOutOfRangeException::.ctor()
 void ArgumentOutOfRangeException__ctor_m7619 (ArgumentOutOfRangeException_t1504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
 void ArgumentOutOfRangeException__ctor_m6389 (ArgumentOutOfRangeException_t1504 * __this, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
 void ArgumentOutOfRangeException__ctor_m6413 (ArgumentOutOfRangeException_t1504 * __this, String_t* ___paramName, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
 void ArgumentOutOfRangeException__ctor_m11272 (ArgumentOutOfRangeException_t1504 * __this, String_t* ___paramName, Object_t * ___actualValue, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentOutOfRangeException__ctor_m11273 (ArgumentOutOfRangeException_t1504 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentOutOfRangeException::get_Message()
 String_t* ArgumentOutOfRangeException_get_Message_m11274 (ArgumentOutOfRangeException_t1504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentOutOfRangeException_GetObjectData_m11275 (ArgumentOutOfRangeException_t1504 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
