#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IOException
struct IOException_t1543;
// System.String
struct String_t;
// System.Exception
struct Exception_t71;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IOException::.ctor()
 void IOException__ctor_m9485 (IOException_t1543 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
 void IOException__ctor_m9486 (IOException_t1543 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
 void IOException__ctor_m6610 (IOException_t1543 * __this, String_t* ___message, Exception_t71 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IOException__ctor_m9487 (IOException_t1543 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
 void IOException__ctor_m9488 (IOException_t1543 * __this, String_t* ___message, int32_t ___hresult, MethodInfo* method) IL2CPP_METHOD_ATTR;
