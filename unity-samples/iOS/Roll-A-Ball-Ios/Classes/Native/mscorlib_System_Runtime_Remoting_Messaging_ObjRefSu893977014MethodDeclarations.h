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

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t893977014;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C"  void ObjRefSurrogate__ctor_m2681375704 (ObjRefSurrogate_t893977014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C"  Il2CppObject * ObjRefSurrogate_SetObjectData_m1124693972 (ObjRefSurrogate_t893977014 * __this, Il2CppObject * ___obj, SerializationInfo_t2995724695 * ___si, StreamingContext_t986364934  ___sc, Il2CppObject * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
