#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3730;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Predicate`1<System.Object>
struct Predicate_1_t2771;
// System.Comparison`1<System.Object>
struct Comparison_1_t2772;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
 void IndexedSet_1__ctor_m19279_gshared (IndexedSet_1_t3730 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m19279(__this, method) (void)IndexedSet_1__ctor_m19279_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19281_gshared (IndexedSet_1_t3730 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19281(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19281_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
 void IndexedSet_1_Add_m19282_gshared (IndexedSet_1_t3730 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m19282(__this, ___item, method) (void)IndexedSet_1_Add_m19282_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
 bool IndexedSet_1_Remove_m19283_gshared (IndexedSet_1_t3730 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m19283(__this, ___item, method) (bool)IndexedSet_1_Remove_m19283_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
 Object_t* IndexedSet_1_GetEnumerator_m19285_gshared (IndexedSet_1_t3730 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m19285(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m19285_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
 void IndexedSet_1_Clear_m19286_gshared (IndexedSet_1_t3730 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m19286(__this, method) (void)IndexedSet_1_Clear_m19286_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
 bool IndexedSet_1_Contains_m19288_gshared (IndexedSet_1_t3730 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m19288(__this, ___item, method) (bool)IndexedSet_1_Contains_m19288_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void IndexedSet_1_CopyTo_m19290_gshared (IndexedSet_1_t3730 * __this, ObjectU5BU5D_t96* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m19290(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m19290_gshared((IndexedSet_1_t3730 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
 int32_t IndexedSet_1_get_Count_m19291_gshared (IndexedSet_1_t3730 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m19291(__this, method) (int32_t)IndexedSet_1_get_Count_m19291_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
 bool IndexedSet_1_get_IsReadOnly_m19293_gshared (IndexedSet_1_t3730 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m19293(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m19293_gshared((IndexedSet_1_t3730 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
 int32_t IndexedSet_1_IndexOf_m19295_gshared (IndexedSet_1_t3730 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m19295(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m19295_gshared((IndexedSet_1_t3730 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
 void IndexedSet_1_Insert_m19297_gshared (IndexedSet_1_t3730 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m19297(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m19297_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
 void IndexedSet_1_RemoveAt_m19299_gshared (IndexedSet_1_t3730 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m19299(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m19299_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * IndexedSet_1_get_Item_m19300_gshared (IndexedSet_1_t3730 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m19300(__this, ___index, method) (Object_t *)IndexedSet_1_get_Item_m19300_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
 void IndexedSet_1_set_Item_m19302_gshared (IndexedSet_1_t3730 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m19302(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m19302_gshared((IndexedSet_1_t3730 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 void IndexedSet_1_RemoveAll_m19303_gshared (IndexedSet_1_t3730 * __this, Predicate_1_t2771 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m19303(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m19303_gshared((IndexedSet_1_t3730 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
 void IndexedSet_1_Sort_m19304_gshared (IndexedSet_1_t3730 * __this, Comparison_1_t2772 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m19304(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m19304_gshared((IndexedSet_1_t3730 *)__this, (Comparison_1_t2772 *)___sortLayoutFunction, method)
