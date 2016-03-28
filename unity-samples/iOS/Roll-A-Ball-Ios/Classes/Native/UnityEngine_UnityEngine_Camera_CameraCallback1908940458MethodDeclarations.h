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

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t1908940458;
// System.Object
struct Il2CppObject;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CameraCallback__ctor_m3976281469 (CameraCallback_t1908940458 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C"  void CameraCallback_Invoke_m3757410555 (CameraCallback_t1908940458 * __this, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t1908940458(Il2CppObject* delegate, Camera_t3533968274 * ___cam);
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CameraCallback_BeginInvoke_m3719545510 (CameraCallback_t1908940458 * __this, Camera_t3533968274 * ___cam, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C"  void CameraCallback_EndInvoke_m534836749 (CameraCallback_t1908940458 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
