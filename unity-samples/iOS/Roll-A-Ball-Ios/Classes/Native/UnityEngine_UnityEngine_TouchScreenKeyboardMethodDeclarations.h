#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t611;
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"

// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 void TouchScreenKeyboard__ctor_m4356 (TouchScreenKeyboard_t611 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
 void TouchScreenKeyboard_Destroy_m4357 (TouchScreenKeyboard_t611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
 void TouchScreenKeyboard_Finalize_m4358 (TouchScreenKeyboard_t611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
 void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m4359 (TouchScreenKeyboard_t611 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t871 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
 bool TouchScreenKeyboard_get_isSupported_m3681 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t611 * TouchScreenKeyboard_Open_m3741 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t611 * TouchScreenKeyboard_Open_m3742 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 TouchScreenKeyboard_t611 * TouchScreenKeyboard_Open_m4360 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
 String_t* TouchScreenKeyboard_get_text_m3657 (TouchScreenKeyboard_t611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
 void TouchScreenKeyboard_set_text_m3658 (TouchScreenKeyboard_t611 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
 void TouchScreenKeyboard_set_hideInput_m3740 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
 bool TouchScreenKeyboard_get_active_m3656 (TouchScreenKeyboard_t611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
 void TouchScreenKeyboard_set_active_m3739 (TouchScreenKeyboard_t611 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
 bool TouchScreenKeyboard_get_done_m3683 (TouchScreenKeyboard_t611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
 bool TouchScreenKeyboard_get_wasCanceled_m3682 (TouchScreenKeyboard_t611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
