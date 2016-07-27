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

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t2591544775;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t4007944900;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C"  void CanvasUpdateRegistry__ctor_m4143486701 (CanvasUpdateRegistry_t2591544775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C"  void CanvasUpdateRegistry__cctor_m3411939936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C"  CanvasUpdateRegistry_t2591544775 * CanvasUpdateRegistry_get_instance_m1077376867 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_ObjectValidForUpdate_m3662506294 (CanvasUpdateRegistry_t2591544775 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::CleanInvalidItems()
extern "C"  void CanvasUpdateRegistry_CleanInvalidItems_m3668170109 (CanvasUpdateRegistry_t2591544775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C"  void CanvasUpdateRegistry_PerformUpdate_m4284602133 (CanvasUpdateRegistry_t2591544775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C"  int32_t CanvasUpdateRegistry_ParentCount_m1557937541 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C"  int32_t CanvasUpdateRegistry_SortLayoutList_m217615053 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m1282865408 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_TryRegisterCanvasElementForLayoutRebuild_m3477281917 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m584808143 (CanvasUpdateRegistry_t2591544775 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m1487849090 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_TryRegisterCanvasElementForGraphicRebuild_m795284133 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m1322910355 (CanvasUpdateRegistry_t2591544775 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m2188113711 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m1911897302 (CanvasUpdateRegistry_t2591544775 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m3807968620 (CanvasUpdateRegistry_t2591544775 * __this, Il2CppObject * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C"  bool CanvasUpdateRegistry_IsRebuildingLayout_m1167551012 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C"  bool CanvasUpdateRegistry_IsRebuildingGraphics_m2979891973 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
