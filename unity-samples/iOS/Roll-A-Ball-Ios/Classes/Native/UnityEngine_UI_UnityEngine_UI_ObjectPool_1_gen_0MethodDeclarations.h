#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t572;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t578;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t580;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3531(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17905_gshared((ObjectPool_1_t3553 *)__this, (UnityAction_1_t2759 *)___actionOnGet, (UnityAction_1_t2759 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m20039(__this, method) (int32_t)ObjectPool_1_get_countAll_m17907_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m20040(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17909_gshared((ObjectPool_1_t3553 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m20041(__this, method) (int32_t)ObjectPool_1_get_countActive_m17911_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m20042(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17913_gshared((ObjectPool_1_t3553 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m3539(__this, method) (List_1_t580 *)ObjectPool_1_Get_m17915_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m3543(__this, ___element, method) (void)ObjectPool_1_Release_m17917_gshared((ObjectPool_1_t3553 *)__this, (Object_t *)___element, method)
