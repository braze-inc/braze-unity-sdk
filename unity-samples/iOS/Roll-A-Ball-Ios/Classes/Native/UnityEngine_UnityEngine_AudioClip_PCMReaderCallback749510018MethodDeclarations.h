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

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t749510018;
// System.Object
struct Il2CppObject;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void PCMReaderCallback__ctor_m2350128290 (PCMReaderCallback_t749510018 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C"  void PCMReaderCallback_Invoke_m2982892301 (PCMReaderCallback_t749510018 * __this, SingleU5BU5D_t1219431280* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t749510018(Il2CppObject* delegate, SingleU5BU5D_t1219431280* ___data);
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PCMReaderCallback_BeginInvoke_m3711541228 (PCMReaderCallback_t749510018 * __this, SingleU5BU5D_t1219431280* ___data, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C"  void PCMReaderCallback_EndInvoke_m1134768050 (PCMReaderCallback_t749510018 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
