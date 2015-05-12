#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t597;
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"

// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 void TouchScreenKeyboard__ctor_m4266 (TouchScreenKeyboard_t597 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
 void TouchScreenKeyboard_Destroy_m4267 (TouchScreenKeyboard_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
 void TouchScreenKeyboard_Finalize_m4268 (TouchScreenKeyboard_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
 void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4269 (TouchScreenKeyboard_t597 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t860 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
 bool TouchScreenKeyboard_get_isSupported_m3577 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t597 * TouchScreenKeyboard_Open_m3637 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t597 * TouchScreenKeyboard_Open_m3638 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 TouchScreenKeyboard_t597 * TouchScreenKeyboard_Open_m4270 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
 String_t* TouchScreenKeyboard_get_text_m3552 (TouchScreenKeyboard_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
 void TouchScreenKeyboard_set_text_m3553 (TouchScreenKeyboard_t597 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
 void TouchScreenKeyboard_set_hideInput_m3636 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
 bool TouchScreenKeyboard_get_active_m3551 (TouchScreenKeyboard_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
 void TouchScreenKeyboard_set_active_m3635 (TouchScreenKeyboard_t597 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
 bool TouchScreenKeyboard_get_done_m3579 (TouchScreenKeyboard_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
 bool TouchScreenKeyboard_get_wasCanceled_m3578 (TouchScreenKeyboard_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
