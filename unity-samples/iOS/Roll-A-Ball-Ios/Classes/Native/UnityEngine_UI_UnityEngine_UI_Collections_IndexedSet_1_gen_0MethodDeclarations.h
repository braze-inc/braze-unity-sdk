#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t747;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3862;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3860;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3864;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t583;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m3592(__this, method) (void)IndexedSet_1__ctor_m19279_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m20564(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19281_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m3591(__this, ___item, method) (void)IndexedSet_1_Add_m19282_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m3594(__this, ___item, method) (bool)IndexedSet_1_Remove_m19283_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m20565(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m19285_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m20566(__this, method) (void)IndexedSet_1_Clear_m19286_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m20567(__this, ___item, method) (bool)IndexedSet_1_Contains_m19288_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m20568(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m19290_gshared((IndexedSet_1_t3730 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m20569(__this, method) (int32_t)IndexedSet_1_get_Count_m19291_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m20570(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m19293_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m20571(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m19295_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m20572(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m19297_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m20573(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m19299_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m20574(__this, ___index, method) (Graphic_t579 *)IndexedSet_1_get_Item_m19300_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m20575(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m19302_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m20576(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m19303_gshared((IndexedSet_1_t3730 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m20577(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m19304_gshared((IndexedSet_1_t3730 *)__this, (Comparison_1_t2772 *)___sortLayoutFunction, method)
