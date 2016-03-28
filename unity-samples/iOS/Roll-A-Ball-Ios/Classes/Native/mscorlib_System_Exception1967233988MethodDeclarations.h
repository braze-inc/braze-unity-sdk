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

// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"

// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m3223090658 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m3870771296 (Exception_t1967233988 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception__ctor_m3602014243 (Exception_t1967233988 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C"  void Exception__ctor_m1328171222 (Exception_t1967233988 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t1967233988 * Exception_get_InnerException_m1427945535 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m3566571225 (Exception_t1967233988 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C"  String_t* Exception_get_ClassName_m2925782135 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C"  String_t* Exception_get_Message_m1013139483 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C"  String_t* Exception_get_Source_m2795291433 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C"  String_t* Exception_get_StackTrace_m382134187 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception_GetObjectData_m1945031808 (Exception_t1967233988 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C"  String_t* Exception_ToString_m1076460401 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C"  void Exception_GetFullNameForStackTrace_m130874526 (Exception_t1967233988 * __this, StringBuilder_t3822575854 * ___sb, MethodBase_t3461000640 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C"  Type_t * Exception_GetType_m913902486 (Exception_t1967233988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
