#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t902;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
 void PCMSetPositionCallback__ctor_m4632 (PCMSetPositionCallback_t902 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
 void PCMSetPositionCallback_Invoke_m4633 (PCMSetPositionCallback_t902 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * PCMSetPositionCallback_BeginInvoke_m4634 (PCMSetPositionCallback_t902 * __this, int32_t ___position, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
 void PCMSetPositionCallback_EndInvoke_m4635 (PCMSetPositionCallback_t902 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
