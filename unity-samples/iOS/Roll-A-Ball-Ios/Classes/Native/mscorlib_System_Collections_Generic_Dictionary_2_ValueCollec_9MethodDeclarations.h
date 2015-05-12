#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>
struct ValueCollection_t2871;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Appboy.Utilities.JSONNode>
struct Dictionary_2_t38;
// Appboy.Utilities.JSONNode
struct JSONNode_t19;
// System.Collections.Generic.IEnumerator`1<Appboy.Utilities.JSONNode>
struct IEnumerator_1_t22;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// Appboy.Utilities.JSONNode[]
struct JSONNodeU5BU5D_t2852;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Appboy.Utilities.JSONNode>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m13882(__this, ___dictionary, method) (void)ValueCollection__ctor_m13503_gshared((ValueCollection_t2834 *)__this, (Dictionary_2_t2829 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13883(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13504_gshared((ValueCollection_t2834 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13884(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13505_gshared((ValueCollection_t2834 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13885(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13506_gshared((ValueCollection_t2834 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13886(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13507_gshared((ValueCollection_t2834 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13887(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13508_gshared((ValueCollection_t2834 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m13888(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m13509_gshared((ValueCollection_t2834 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13889(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13510_gshared((ValueCollection_t2834 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13890(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13511_gshared((ValueCollection_t2834 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13891(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13512_gshared((ValueCollection_t2834 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13892(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m13513_gshared((ValueCollection_t2834 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m13893(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m13514_gshared((ValueCollection_t2834 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::GetEnumerator()
 Enumerator_t2876  ValueCollection_GetEnumerator_m13894 (ValueCollection_t2871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Appboy.Utilities.JSONNode>::get_Count()
#define ValueCollection_get_Count_m13895(__this, method) (int32_t)ValueCollection_get_Count_m13516_gshared((ValueCollection_t2834 *)__this, method)
