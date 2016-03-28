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

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t914030844;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SkinChangedDelegate__ctor_m1472037998 (SkinChangedDelegate_t914030844 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C"  void SkinChangedDelegate_Invoke_m3141787208 (SkinChangedDelegate_t914030844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t914030844(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SkinChangedDelegate_BeginInvoke_m1122457923 (SkinChangedDelegate_t914030844 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SkinChangedDelegate_EndInvoke_m3094371710 (SkinChangedDelegate_t914030844 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
