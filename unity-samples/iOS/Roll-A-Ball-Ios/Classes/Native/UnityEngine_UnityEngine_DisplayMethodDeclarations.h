#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Display
struct Display_t883;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t881;
// System.IntPtr[]
struct IntPtrU5BU5D_t884;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Display::.ctor()
 void Display__ctor_m4505 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
 void Display__ctor_m4506 (Display_t883 * __this, IntPtr_t107 ___nativeDisplay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
 void Display__cctor_m4507 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
 void Display_add_onDisplaysUpdated_m4508 (Object_t * __this/* static, unused */, DisplaysUpdatedDelegate_t881 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
 void Display_remove_onDisplaysUpdated_m4509 (Object_t * __this/* static, unused */, DisplaysUpdatedDelegate_t881 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
 int32_t Display_get_renderingWidth_m4510 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
 int32_t Display_get_renderingHeight_m4511 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
 int32_t Display_get_systemWidth_m4512 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
 int32_t Display_get_systemHeight_m4513 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
 RenderBuffer_t885  Display_get_colorBuffer_m4514 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
 RenderBuffer_t885  Display_get_depthBuffer_m4515 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate()
 void Display_Activate_m4516 (Display_t883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
 void Display_Activate_m4517 (Display_t883 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
 void Display_SetParams_m4518 (Display_t883 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
 void Display_SetRenderingResolution_m4519 (Display_t883 * __this, int32_t ___w, int32_t ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
 bool Display_MultiDisplayLicense_m4520 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
 Vector3_t188  Display_RelativeMouseAt_m4521 (Object_t * __this/* static, unused */, Vector3_t188  ___inputMouseCoordinates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Display UnityEngine.Display::get_main()
 Display_t883 * Display_get_main_m4522 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
 void Display_RecreateDisplayList_m4523 (Object_t * __this/* static, unused */, IntPtrU5BU5D_t884* ___nativeDisplay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
 void Display_FireDisplaysUpdated_m4524 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
 void Display_GetSystemExtImpl_m4525 (Object_t * __this/* static, unused */, IntPtr_t107 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
 void Display_GetRenderingExtImpl_m4526 (Object_t * __this/* static, unused */, IntPtr_t107 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
 void Display_GetRenderingBuffersImpl_m4527 (Object_t * __this/* static, unused */, IntPtr_t107 ___nativeDisplay, RenderBuffer_t885 * ___color, RenderBuffer_t885 * ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
 void Display_SetRenderingResolutionImpl_m4528 (Object_t * __this/* static, unused */, IntPtr_t107 ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
 void Display_ActivateDisplayImpl_m4529 (Object_t * __this/* static, unused */, IntPtr_t107 ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
 void Display_SetParamsImpl_m4530 (Object_t * __this/* static, unused */, IntPtr_t107 ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
 bool Display_MultiDisplayLicenseImpl_m4531 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
 int32_t Display_RelativeMouseAtImpl_m4532 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method) IL2CPP_METHOD_ATTR;
