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

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t3819875680;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t321867353;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas3819875680.h"

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
extern "C"  void RaycasterManager__cctor_m1509381251 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
extern "C"  void RaycasterManager_AddRaycaster_m4159868023 (Il2CppObject * __this /* static, unused */, BaseRaycaster_t3819875680 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
extern "C"  List_1_t321867353 * RaycasterManager_GetRaycasters_m4152256966 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
extern "C"  void RaycasterManager_RemoveRaycasters_m4290330819 (Il2CppObject * __this /* static, unused */, BaseRaycaster_t3819875680 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
