#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>
struct ValueCollection_t2890;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Appboy.Utilities.JSONNode>
struct Dictionary_2_t36;
// Appboy.Utilities.JSONNode
struct JSONNode_t17;
// System.Collections.Generic.IEnumerator`1<Appboy.Utilities.JSONNode>
struct IEnumerator_1_t20;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// Appboy.Utilities.JSONNode[]
struct JSONNodeU5BU5D_t2871;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Appboy.Utilities.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m14097(__this, ___dictionary, method) (void)ValueCollection__ctor_m13712_gshared((ValueCollection_t2853 *)__this, (Dictionary_2_t2848 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14098(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13713_gshared((ValueCollection_t2853 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14099(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13714_gshared((ValueCollection_t2853 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14100(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13715_gshared((ValueCollection_t2853 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14101(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13716_gshared((ValueCollection_t2853 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14102(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13717_gshared((ValueCollection_t2853 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m14103(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m13718_gshared((ValueCollection_t2853 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14104(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13719_gshared((ValueCollection_t2853 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14105(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13720_gshared((ValueCollection_t2853 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14106(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13721_gshared((ValueCollection_t2853 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m14107(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m13722_gshared((ValueCollection_t2853 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m14108(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m13723_gshared((ValueCollection_t2853 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::GetEnumerator()
 Enumerator_t2895  ValueCollection_GetEnumerator_m14109 (ValueCollection_t2890 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::get_Count()
#define ValueCollection_get_Count_m14110(__this, method) (int32_t)ValueCollection_get_Count_m13725_gshared((ValueCollection_t2853 *)__this, method)
