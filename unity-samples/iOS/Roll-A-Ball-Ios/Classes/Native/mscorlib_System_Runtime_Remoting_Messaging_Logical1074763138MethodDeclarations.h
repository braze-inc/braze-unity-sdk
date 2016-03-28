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

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1074763138;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern "C"  void LogicalCallContext__ctor_m122858570 (LogicalCallContext_t1074763138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LogicalCallContext__ctor_m2483628683 (LogicalCallContext_t1074763138 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void LogicalCallContext_GetObjectData_m3064510184 (LogicalCallContext_t1074763138 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern "C"  void LogicalCallContext_SetData_m91070972 (LogicalCallContext_t1074763138 * __this, String_t* ___name, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.LogicalCallContext::Clone()
extern "C"  Il2CppObject * LogicalCallContext_Clone_m3487936816 (LogicalCallContext_t1074763138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
