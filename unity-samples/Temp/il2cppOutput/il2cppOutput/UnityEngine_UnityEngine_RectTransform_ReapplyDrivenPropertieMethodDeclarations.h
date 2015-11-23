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

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t724;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t504;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern "C" void ReapplyDrivenProperties__ctor_m3641 (ReapplyDrivenProperties_t724 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C" void ReapplyDrivenProperties_Invoke_m3987 (ReapplyDrivenProperties_t724 * __this, RectTransform_t504 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t724(Il2CppObject* delegate, RectTransform_t504 * ___driven);
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m3988 (ReapplyDrivenProperties_t724 * __this, RectTransform_t504 * ___driven, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m3989 (ReapplyDrivenProperties_t724 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
