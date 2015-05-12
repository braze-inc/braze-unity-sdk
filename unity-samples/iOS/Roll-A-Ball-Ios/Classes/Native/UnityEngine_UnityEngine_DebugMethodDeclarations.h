#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t880;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t70;
struct Object_t70_marshaled;
// System.Exception
struct Exception_t71;
// System.Object
struct Object_t;

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
 void Debug_Internal_Log_m4499 (Object_t * __this/* static, unused */, int32_t ___level, String_t* ___msg, Object_t70 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
 void Debug_Internal_LogException_m4500 (Object_t * __this/* static, unused */, Exception_t71 * ___exception, Object_t70 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
 void Debug_Log_m412 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
 void Debug_Log_m1368 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t70 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
 void Debug_LogError_m3203 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
 void Debug_LogError_m1823 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t70 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
 void Debug_LogException_m1387 (Object_t * __this/* static, unused */, Exception_t71 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
 void Debug_LogException_m1146 (Object_t * __this/* static, unused */, Exception_t71 * ___exception, Object_t70 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
 void Debug_LogWarning_m1093 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
 void Debug_LogWarning_m1936 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t70 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
 bool Debug_get_isDebugBuild_m1084 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
