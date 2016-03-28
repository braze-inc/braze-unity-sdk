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

// UnityEngine.DebugLogHandler
struct DebugLogHandler_t931256902;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.Exception
struct Exception_t1967233988;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType3529269451.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m1521597024 (DebugLogHandler_t931256902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m3731237167 (Il2CppObject * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_LogException_m1007136309 (Il2CppObject * __this /* static, unused */, Exception_t1967233988 * ___exception, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void DebugLogHandler_LogFormat_m1190453926 (DebugLogHandler_t931256902 * __this, int32_t ___logType, Object_t3878351788 * ___context, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogException(System.Exception,UnityEngine.Object)
extern "C"  void DebugLogHandler_LogException_m3623531313 (DebugLogHandler_t931256902 * __this, Exception_t1967233988 * ___exception, Object_t3878351788 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
