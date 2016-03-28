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

// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t69910023;
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

// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerWasLoadedDelegate__ctor_m74826402 (BannerWasLoadedDelegate_t69910023 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::Invoke()
extern "C"  void BannerWasLoadedDelegate_Invoke_m3949163900 (BannerWasLoadedDelegate_t69910023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerWasLoadedDelegate_t69910023(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BannerWasLoadedDelegate_BeginInvoke_m2489699591 (BannerWasLoadedDelegate_t69910023 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerWasLoadedDelegate_EndInvoke_m3402094002 (BannerWasLoadedDelegate_t69910023 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
