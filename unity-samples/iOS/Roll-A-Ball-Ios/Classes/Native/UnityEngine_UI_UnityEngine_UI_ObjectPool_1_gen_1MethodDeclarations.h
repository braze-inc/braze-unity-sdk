#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t684;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t685;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t687;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3933(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17905_gshared((ObjectPool_1_t3553 *)__this, (UnityAction_1_t2759 *)___actionOnGet, (UnityAction_1_t2759 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m22062(__this, method) (int32_t)ObjectPool_1_get_countAll_m17907_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m22063(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17909_gshared((ObjectPool_1_t3553 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m22064(__this, method) (int32_t)ObjectPool_1_get_countActive_m17911_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m22065(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17913_gshared((ObjectPool_1_t3553 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m3934(__this, method) (List_1_t687 *)ObjectPool_1_Get_m17915_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m3935(__this, ___element, method) (void)ObjectPool_1_Release_m17917_gshared((ObjectPool_1_t3553 *)__this, (Object_t *)___element, method)
