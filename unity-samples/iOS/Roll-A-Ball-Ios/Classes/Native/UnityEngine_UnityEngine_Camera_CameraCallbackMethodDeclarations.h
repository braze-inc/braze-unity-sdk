#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t878;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t172;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
 void CameraCallback__ctor_m4474 (CameraCallback_t878 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
 void CameraCallback_Invoke_m4475 (CameraCallback_t878 * __this, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
 Object_t * CameraCallback_BeginInvoke_m4476 (CameraCallback_t878 * __this, Camera_t172 * ___cam, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
 void CameraCallback_EndInvoke_m4477 (CameraCallback_t878 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
