#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t670;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t671;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t673;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3828(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17685_gshared((ObjectPool_1_t3533 *)__this, (UnityAction_1_t2747 *)___actionOnGet, (UnityAction_1_t2747 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m21842(__this, method) (int32_t)ObjectPool_1_get_countAll_m17687_gshared((ObjectPool_1_t3533 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m21843(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17689_gshared((ObjectPool_1_t3533 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m21844(__this, method) (int32_t)ObjectPool_1_get_countActive_m17691_gshared((ObjectPool_1_t3533 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m21845(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17693_gshared((ObjectPool_1_t3533 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m3829(__this, method) (List_1_t673 *)ObjectPool_1_Get_m17695_gshared((ObjectPool_1_t3533 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m3830(__this, ___element, method) (void)ObjectPool_1_Release_m17697_gshared((ObjectPool_1_t3533 *)__this, (Object_t *)___element, method)
