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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t643542887;
// UnityEngine.Component
struct Component_t2126946602;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t798674795;
// UnityEngine.UI.IClippable
struct IClippable_t2239353914;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t1595633764;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UI_UnityEngine_UI_RectMask2D798674795.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C"  void MaskUtilities__ctor_m1166009725 (MaskUtilities_t643542887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_Notify2DMaskStateChanged_m2199550555 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_NotifyStencilStateChanged_m2159873435 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C"  Transform_t284553113 * MaskUtilities_FindRootSortOverrideCanvas_m4219954651 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t MaskUtilities_GetStencilDepth_m2786493988 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___transform0, Transform_t284553113 * ___stopAfter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C"  RectMask2D_t798674795 * MaskUtilities_GetRectMaskForClippable_m396614586 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___transform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C"  void MaskUtilities_GetRectMasksForClip_m447525417 (Il2CppObject * __this /* static, unused */, RectMask2D_t798674795 * ___clipper0, List_1_t1595633764 * ___masks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
