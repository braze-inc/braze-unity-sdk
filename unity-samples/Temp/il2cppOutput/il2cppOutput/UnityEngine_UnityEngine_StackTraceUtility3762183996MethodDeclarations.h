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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Diagnostics.StackTrace
struct StackTrace_t2873626364;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Diagnostics_StackTrace2873626364.h"

// System.Void UnityEngine.StackTraceUtility::.cctor()
extern "C"  void StackTraceUtility__cctor_m1486031939 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern "C"  void StackTraceUtility_SetProjectFolder_m3541316899 (Il2CppObject * __this /* static, unused */, String_t* ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C"  String_t* StackTraceUtility_ExtractStackTrace_m235366505 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C"  bool StackTraceUtility_IsSystemStacktraceType_m295158192 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C"  void StackTraceUtility_ExtractStringFromExceptionInternal_m803331050 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___exceptiono0, String_t** ___message1, String_t** ___stackTrace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern "C"  String_t* StackTraceUtility_PostprocessStacktrace_m556856210 (Il2CppObject * __this /* static, unused */, String_t* ___oldString0, bool ___stripEngineInternalInformation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C"  String_t* StackTraceUtility_ExtractFormattedStackTrace_m3996939365 (Il2CppObject * __this /* static, unused */, StackTrace_t2873626364 * ___stackTrace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
