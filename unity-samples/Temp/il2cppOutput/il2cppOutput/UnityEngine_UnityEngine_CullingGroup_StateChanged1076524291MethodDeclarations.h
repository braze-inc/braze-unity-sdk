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

// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t1076524291;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_CullingGroupEvent2364738776.h"
#include "UnityEngine_UnityEngine_CullingGroupEvent2364738776MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void StateChanged__ctor_m3267025420 (StateChanged_t1076524291 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
extern "C"  void StateChanged_Invoke_m3174530616 (StateChanged_t1076524291 * __this, CullingGroupEvent_t2364738776  ___sphere0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StateChanged_t1076524291(Il2CppObject* delegate, CullingGroupEvent_t2364738776  ___sphere0);
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateChanged_BeginInvoke_m163021837 (StateChanged_t1076524291 * __this, CullingGroupEvent_t2364738776  ___sphere0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C"  void StateChanged_EndInvoke_m4182061596 (StateChanged_t1076524291 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
