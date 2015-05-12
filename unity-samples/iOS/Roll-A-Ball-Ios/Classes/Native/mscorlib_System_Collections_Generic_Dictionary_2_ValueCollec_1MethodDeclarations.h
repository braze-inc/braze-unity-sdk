#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t1030;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t868;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUIStyle>
struct IEnumerator_1_t4257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t867;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m22964(__this, ___dictionary, method) (void)ValueCollection__ctor_m13712_gshared((ValueCollection_t2853 *)__this, (Dictionary_2_t2848 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22965(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13713_gshared((ValueCollection_t2853 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22966(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13714_gshared((ValueCollection_t2853 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22967(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13715_gshared((ValueCollection_t2853 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22968(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13716_gshared((ValueCollection_t2853 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22969(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13717_gshared((ValueCollection_t2853 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m22970(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m13718_gshared((ValueCollection_t2853 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22971(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13719_gshared((ValueCollection_t2853 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22972(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13720_gshared((ValueCollection_t2853 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22973(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13721_gshared((ValueCollection_t2853 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m22974(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m13722_gshared((ValueCollection_t2853 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m22975(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m13723_gshared((ValueCollection_t2853 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
 Enumerator_t1029  ValueCollection_GetEnumerator_m5108 (ValueCollection_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::get_Count()
#define ValueCollection_get_Count_m22976(__this, method) (int32_t)ValueCollection_get_Count_m13725_gshared((ValueCollection_t2853 *)__this, method)
