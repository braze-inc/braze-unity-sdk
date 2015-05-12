#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t561;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t565;
// UnityEngine.Transform
struct Transform_t193;

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
 void CanvasUpdateRegistry__ctor_m2417 (CanvasUpdateRegistry_t561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
 void CanvasUpdateRegistry__cctor_m2418 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
 CanvasUpdateRegistry_t561 * CanvasUpdateRegistry_get_instance_m2419 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
 bool CanvasUpdateRegistry_ObjectValidForUpdate_m2420 (CanvasUpdateRegistry_t561 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
 void CanvasUpdateRegistry_PerformUpdate_m2421 (CanvasUpdateRegistry_t561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
 int32_t CanvasUpdateRegistry_ParentCount_m2422 (Object_t * __this/* static, unused */, Transform_t193 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
 int32_t CanvasUpdateRegistry_SortLayoutList_m2423 (Object_t * __this/* static, unused */, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m2424 (Object_t * __this/* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m2425 (CanvasUpdateRegistry_t561 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m2426 (Object_t * __this/* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m2427 (CanvasUpdateRegistry_t561 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m2428 (Object_t * __this/* static, unused */, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m2429 (CanvasUpdateRegistry_t561 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
 void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m2430 (CanvasUpdateRegistry_t561 * __this, Object_t * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
 bool CanvasUpdateRegistry_IsRebuildingLayout_m2431 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
 bool CanvasUpdateRegistry_IsRebuildingGraphics_m2432 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__2(UnityEngine.UI.ICanvasElement)
 bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__2_m2433 (Object_t * __this/* static, unused */, Object_t * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__3(UnityEngine.UI.ICanvasElement)
 bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__3_m2434 (Object_t * __this/* static, unused */, Object_t * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
