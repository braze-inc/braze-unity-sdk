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

// UnityEngine.UI.RectMask2D
struct RectMask2D_t798674795;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.UI.IClippable
struct IClippable_t2239353914;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void UnityEngine.UI.RectMask2D::.ctor()
extern "C"  void RectMask2D__ctor_m743839689 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RectMask2D::get_canvasRect()
extern "C"  Rect_t1525428817  RectMask2D_get_canvasRect_m3883544836 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
extern "C"  RectTransform_t3317474837 * RectMask2D_get_rectTransform_m3879504040 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnEnable()
extern "C"  void RectMask2D_OnEnable_m4063473437 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnDisable()
extern "C"  void RectMask2D_OnDisable_m1854562224 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.RectMask2D::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectMask2D_IsRaycastLocationValid_m3081840229 (RectMask2D_t798674795 * __this, Vector2_t3525329788  ___sp, Camera_t3533968274 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::PerformClipping()
extern "C"  void RectMask2D_PerformClipping_m2105337834 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::AddClippable(UnityEngine.UI.IClippable)
extern "C"  void RectMask2D_AddClippable_m3020362282 (RectMask2D_t798674795 * __this, Il2CppObject * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::RemoveClippable(UnityEngine.UI.IClippable)
extern "C"  void RectMask2D_RemoveClippable_m2506427137 (RectMask2D_t798674795 * __this, Il2CppObject * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
extern "C"  void RectMask2D_OnTransformParentChanged_m136007544 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
extern "C"  void RectMask2D_OnCanvasHierarchyChanged_m329275089 (RectMask2D_t798674795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
