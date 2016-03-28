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

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3303221397;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValidateInput__ctor_m318825293 (OnValidateInput_t3303221397 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
extern "C"  uint16_t OnValidateInput_Invoke_m1377115157 (OnValidateInput_t3303221397 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" uint16_t pinvoke_delegate_wrapper_OnValidateInput_t3303221397(Il2CppObject* delegate, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar);
// System.IAsyncResult UnityEngine.UI.InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnValidateInput_BeginInvoke_m2130883566 (OnValidateInput_t3303221397 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
extern "C"  uint16_t OnValidateInput_EndInvoke_m1254779679 (OnValidateInput_t3303221397 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
