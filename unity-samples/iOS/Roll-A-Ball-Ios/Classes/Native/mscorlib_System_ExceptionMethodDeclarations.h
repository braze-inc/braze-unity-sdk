#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Exception
struct Exception_t71;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Text.StringBuilder
struct StringBuilder_t80;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
 void Exception__ctor_m1167 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
 void Exception__ctor_m513 (Exception_t71 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception__ctor_m5095 (Exception_t71 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
 void Exception__ctor_m5094 (Exception_t71 * __this, String_t* ___message, Exception_t71 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
 Exception_t71 * Exception_get_InnerException_m1125 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
 void Exception_set_HResult_m5093 (Exception_t71 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
 String_t* Exception_get_ClassName_m8449 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
 String_t* Exception_get_Message_m1126 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
 String_t* Exception_get_Source_m1127 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
 String_t* Exception_get_StackTrace_m1278 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception_GetObjectData_m1124 (Exception_t71 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
 String_t* Exception_ToString_m1123 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
 void Exception_GetFullNameForStackTrace_m8450 (Exception_t71 * __this, StringBuilder_t80 * ___sb, MethodBase_t307 * ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
 Type_t * Exception_GetType_m1128 (Exception_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
