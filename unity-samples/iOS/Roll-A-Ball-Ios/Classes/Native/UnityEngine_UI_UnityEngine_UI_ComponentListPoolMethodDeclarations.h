#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ComponentListPool
struct ComponentListPool_t676;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t663;

// System.Void UnityEngine.UI.ComponentListPool::.cctor()
 void ComponentListPool__cctor_m3159 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Component> UnityEngine.UI.ComponentListPool::Get()
 List_1_t663 * ComponentListPool_Get_m3160 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::Release(System.Collections.Generic.List`1<UnityEngine.Component>)
 void ComponentListPool_Release_m3161 (Object_t * __this/* static, unused */, List_1_t663 * ___toRelease, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::<s_ComponentListPool>m__17(System.Collections.Generic.List`1<UnityEngine.Component>)
 void ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m3162 (Object_t * __this/* static, unused */, List_1_t663 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
