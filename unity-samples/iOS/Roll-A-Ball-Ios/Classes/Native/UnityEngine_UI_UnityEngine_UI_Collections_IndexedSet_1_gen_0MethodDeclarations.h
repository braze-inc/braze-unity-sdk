#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t734;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3842;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3840;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3844;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t569;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m3487(__this, method) (void)IndexedSet_1__ctor_m19059_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m20344(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19061_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m3486(__this, ___item, method) (void)IndexedSet_1_Add_m19062_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m3489(__this, ___item, method) (bool)IndexedSet_1_Remove_m19063_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m20345(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m19065_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m20346(__this, method) (void)IndexedSet_1_Clear_m19066_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m20347(__this, ___item, method) (bool)IndexedSet_1_Contains_m19068_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m20348(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m19070_gshared((IndexedSet_1_t3710 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m20349(__this, method) (int32_t)IndexedSet_1_get_Count_m19071_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m20350(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m19073_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m20351(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m19075_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m20352(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m19077_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m20353(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m19079_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m20354(__this, ___index, method) (Graphic_t565 *)IndexedSet_1_get_Item_m19080_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m20355(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m19082_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m20356(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m19083_gshared((IndexedSet_1_t3710 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m20357(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m19084_gshared((IndexedSet_1_t3710 *)__this, (Comparison_1_t2760 *)___sortLayoutFunction, method)
