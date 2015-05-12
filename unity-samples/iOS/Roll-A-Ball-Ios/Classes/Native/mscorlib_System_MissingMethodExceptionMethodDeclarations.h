#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingMethodException
struct MissingMethodException_t2272;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMethodException::.ctor()
 void MissingMethodException__ctor_m11709 (MissingMethodException_t2272 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
 void MissingMethodException__ctor_m11710 (MissingMethodException_t2272 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MissingMethodException__ctor_m11711 (MissingMethodException_t2272 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
 void MissingMethodException__ctor_m11712 (MissingMethodException_t2272 * __this, String_t* ___className, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
 String_t* MissingMethodException_get_Message_m11713 (MissingMethodException_t2272 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
