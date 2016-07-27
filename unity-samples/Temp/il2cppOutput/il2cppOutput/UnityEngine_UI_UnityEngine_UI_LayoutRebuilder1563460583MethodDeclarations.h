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

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t1563460583;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t2923905571;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t2107408507;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t2126946602;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate941568618.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder1563460583.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C"  void LayoutRebuilder__ctor_m3516226301 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C"  void LayoutRebuilder__cctor_m1146736720 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_Initialize_m1265316458 (LayoutRebuilder_t1563460583 * __this, RectTransform_t3317474837 * ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C"  void LayoutRebuilder_Clear_m922359592 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ReapplyDrivenProperties_m965971988 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___driven0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C"  Transform_t284553113 * LayoutRebuilder_get_transform_m3231462112 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C"  bool LayoutRebuilder_IsDestroyed_m4004091228 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_StripDisabledBehavioursFromList_m51650679 (Il2CppObject * __this /* static, unused */, List_1_t2923905571 * ___components0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ForceRebuildLayoutImmediate_m3701079759 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___layoutRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void LayoutRebuilder_Rebuild_m407530040 (LayoutRebuilder_t1563460583 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutControl_m724256510 (LayoutRebuilder_t1563460583 * __this, RectTransform_t3317474837 * ___rect0, UnityAction_1_t2107408507 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutCalculation_m941802386 (LayoutRebuilder_t1563460583 * __this, RectTransform_t3317474837 * ___rect0, UnityAction_1_t2107408507 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutForRebuild_m901621521 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  bool LayoutRebuilder_ValidLayoutGroup_m1488924317 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___parent0, List_1_t2923905571 * ___comps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  bool LayoutRebuilder_ValidController_m2724682388 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___layoutRoot0, List_1_t2923905571 * ___comps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutRootForRebuild_m1708966351 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C"  void LayoutRebuilder_LayoutComplete_m182540522 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C"  void LayoutRebuilder_GraphicUpdateComplete_m408201157 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C"  int32_t LayoutRebuilder_GetHashCode_m1333271044 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C"  bool LayoutRebuilder_Equals_m3575022752 (LayoutRebuilder_t1563460583 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C"  String_t* LayoutRebuilder_ToString_m2403814582 (LayoutRebuilder_t1563460583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C"  void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m831129568 (Il2CppObject * __this /* static, unused */, LayoutRebuilder_t1563460583 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C"  bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m1620076941 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__8_m1336267783 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__9_m1269261030 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__A_m733207006 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__B_m666200253 (Il2CppObject * __this /* static, unused */, Component_t2126946602 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
