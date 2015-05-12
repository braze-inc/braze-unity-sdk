#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3553;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2759;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
 void ObjectPool_1__ctor_m17905_gshared (ObjectPool_1_t3553 * __this, UnityAction_1_t2759 * ___actionOnGet, UnityAction_1_t2759 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m17905(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17905_gshared((ObjectPool_1_t3553 *)__this, (UnityAction_1_t2759 *)___actionOnGet, (UnityAction_1_t2759 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
 int32_t ObjectPool_1_get_countAll_m17907_gshared (ObjectPool_1_t3553 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m17907(__this, method) (int32_t)ObjectPool_1_get_countAll_m17907_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
 void ObjectPool_1_set_countAll_m17909_gshared (ObjectPool_1_t3553 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m17909(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17909_gshared((ObjectPool_1_t3553 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
 int32_t ObjectPool_1_get_countActive_m17911_gshared (ObjectPool_1_t3553 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m17911(__this, method) (int32_t)ObjectPool_1_get_countActive_m17911_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
 int32_t ObjectPool_1_get_countInactive_m17913_gshared (ObjectPool_1_t3553 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m17913(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17913_gshared((ObjectPool_1_t3553 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
 Object_t * ObjectPool_1_Get_m17915_gshared (ObjectPool_1_t3553 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m17915(__this, method) (Object_t *)ObjectPool_1_Get_m17915_gshared((ObjectPool_1_t3553 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
 void ObjectPool_1_Release_m17917_gshared (ObjectPool_1_t3553 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m17917(__this, ___element, method) (void)ObjectPool_1_Release_m17917_gshared((ObjectPool_1_t3553 *)__this, (Object_t *)___element, method)
