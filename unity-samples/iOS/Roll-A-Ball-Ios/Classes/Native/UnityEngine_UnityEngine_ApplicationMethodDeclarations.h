#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t877;
// System.String
struct String_t;
// UnityEngine.Application/LogCallback
struct LogCallback_t346;
// UnityEngine.AsyncOperation
struct AsyncOperation_t794;
struct AsyncOperation_t794_marshaled;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
 void Application_add_logMessageReceived_m1511 (Object_t * __this/* static, unused */, LogCallback_t346 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
 void Application_remove_logMessageReceived_m1533 (Object_t * __this/* static, unused */, LogCallback_t346 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
 void Application_Quit_m1497 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::get_loadedLevel()
 int32_t Application_get_loadedLevel_m1403 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_loadedLevelName()
 String_t* Application_get_loadedLevelName_m1404 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
 void Application_LoadLevel_m1541 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
 void Application_LoadLevel_m1068 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
 AsyncOperation_t794 * Application_LoadLevelAsync_m4469 (Object_t * __this/* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::get_levelCount()
 int32_t Application_get_levelCount_m1402 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
 bool Application_get_isPlaying_m3641 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
 bool Application_get_isEditor_m1086 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
 int32_t Application_get_platform_m1454 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
 String_t* Application_get_dataPath_m4470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
 void Application_CallLogCallback_m4471 (Object_t * __this/* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)
 void Application_SetLogCallbackDefined_m4472 (Object_t * __this/* static, unused */, bool ___defined, bool ___threaded, MethodInfo* method) IL2CPP_METHOD_ATTR;
