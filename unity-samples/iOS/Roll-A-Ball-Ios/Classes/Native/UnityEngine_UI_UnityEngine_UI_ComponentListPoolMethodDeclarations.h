#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ComponentListPool
struct ComponentListPool_t690;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t677;

// System.Void UnityEngine.UI.ComponentListPool::.cctor()
 void ComponentListPool__cctor_m3265 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Component> UnityEngine.UI.ComponentListPool::Get()
 List_1_t677 * ComponentListPool_Get_m3266 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::Release(System.Collections.Generic.List`1<UnityEngine.Component>)
 void ComponentListPool_Release_m3267 (Object_t * __this/* static, unused */, List_1_t677 * ___toRelease, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::<s_ComponentListPool>m__17(System.Collections.Generic.List`1<UnityEngine.Component>)
 void ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m3268 (Object_t * __this/* static, unused */, List_1_t677 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
