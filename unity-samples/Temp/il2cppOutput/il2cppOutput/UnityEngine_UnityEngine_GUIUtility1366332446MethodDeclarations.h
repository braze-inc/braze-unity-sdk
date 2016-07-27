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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FocusType860532831.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.GUIUtility::.cctor()
extern "C"  void GUIUtility__cctor_m2712534225 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C"  float GUIUtility_get_pixelsPerPoint_m2351352349 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(UnityEngine.FocusType)
extern "C"  int32_t GUIUtility_GetControlID_m3125414029 (Il2CppObject * __this /* static, unused */, int32_t ___focus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C"  int32_t GUIUtility_GetControlID_m1406053471 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focus1, Rect_t1525428817  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
extern "C"  Il2CppObject * GUIUtility_GetStateObject_m2379308309 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, int32_t ___controlID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
extern "C"  int32_t GUIUtility_get_hotControl_m4135893409 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
extern "C"  void GUIUtility_set_hotControl_m300477798 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C"  GUISkin_t2614611333 * GUIUtility_GetDefaultSkin_m3151786562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C"  void GUIUtility_BeginGUI_m1799121707 (Il2CppObject * __this /* static, unused */, int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C"  void GUIUtility_EndGUI_m1069008217 (Il2CppObject * __this /* static, unused */, int32_t ___layoutType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C"  bool GUIUtility_EndGUIFromException_m1739426121 (Il2CppObject * __this /* static, unused */, Exception_t1967233988 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C"  void GUIUtility_CheckOnGUI_m640002012 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
extern "C"  float GUIUtility_Internal_GetPixelsPerPoint_m4247925832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
extern "C"  int32_t GUIUtility_GetControlID_m1281213292 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C"  int32_t GUIUtility_Internal_GetNextControlID2_m1006075744 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focusType1, Rect_t1525428817  ___rect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::INTERNAL_CALL_Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
extern "C"  int32_t GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m3119525867 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focusType1, Rect_t1525428817 * ___rect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
extern "C"  int32_t GUIUtility_Internal_GetHotControl_m1758149964 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
extern "C"  void GUIUtility_Internal_SetHotControl_m2067872041 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C"  int32_t GUIUtility_get_keyboardControl_m1277835431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_keyboardControl(System.Int32)
extern "C"  void GUIUtility_set_keyboardControl_m3744930820 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C"  String_t* GUIUtility_get_systemCopyBuffer_m1467578008 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C"  void GUIUtility_set_systemCopyBuffer_m2088074937 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C"  GUISkin_t2614611333 * GUIUtility_Internal_GetDefaultSkin_m1795114979 (Il2CppObject * __this /* static, unused */, int32_t ___skinMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C"  void GUIUtility_Internal_ExitGUI_m725832131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C"  int32_t GUIUtility_Internal_GetGUIDepth_m2619692036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_textFieldInput(System.Boolean)
extern "C"  void GUIUtility_set_textFieldInput_m747124729 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
