#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t674;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t675;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t663;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3833(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17685_gshared((ObjectPool_1_t3533 *)__this, (UnityAction_1_t2747 *)___actionOnGet, (UnityAction_1_t2747 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m21870(__this, method) (int32_t)ObjectPool_1_get_countAll_m17687_gshared((ObjectPool_1_t3533 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m21871(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17689_gshared((ObjectPool_1_t3533 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m21872(__this, method) (int32_t)ObjectPool_1_get_countActive_m17691_gshared((ObjectPool_1_t3533 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m21873(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17693_gshared((ObjectPool_1_t3533 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m3834(__this, method) (List_1_t663 *)ObjectPool_1_Get_m17695_gshared((ObjectPool_1_t3533 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m3835(__this, ___element, method) (void)ObjectPool_1_Release_m17697_gshared((ObjectPool_1_t3533 *)__this, (Object_t *)___element, method)
