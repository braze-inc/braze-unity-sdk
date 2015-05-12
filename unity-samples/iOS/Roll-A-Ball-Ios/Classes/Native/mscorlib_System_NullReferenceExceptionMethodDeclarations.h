#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NullReferenceException
struct NullReferenceException_t998;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NullReferenceException::.ctor()
 void NullReferenceException__ctor_m11788 (NullReferenceException_t998 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.String)
 void NullReferenceException__ctor_m4968 (NullReferenceException_t998 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NullReferenceException__ctor_m11789 (NullReferenceException_t998 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
