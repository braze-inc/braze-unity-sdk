#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int64[]
struct Int64U5BU5D_t1748;
// System.Collections.IComparer
struct IComparer_t1565;
// System.Array/Swapper
struct Swapper_t1747;
// System.Double[]
struct DoubleU5BU5D_t1749;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.Array::.ctor()
 void Array__ctor_m8302 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
 Object_t * Array_System_Collections_IList_get_Item_m8303 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Array_System_Collections_IList_set_Item_m8304 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
 int32_t Array_System_Collections_IList_Add_m8305 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
 void Array_System_Collections_IList_Clear_m8306 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
 bool Array_System_Collections_IList_Contains_m8307 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
 int32_t Array_System_Collections_IList_IndexOf_m8308 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
 void Array_System_Collections_IList_Insert_m8309 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
 void Array_System_Collections_IList_Remove_m8310 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
 void Array_System_Collections_IList_RemoveAt_m8311 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
 int32_t Array_System_Collections_ICollection_get_Count_m8312 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
 int32_t Array_InternalArray__ICollection_get_Count_m8313 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
 bool Array_InternalArray__ICollection_get_IsReadOnly_m8314 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
 void Array_InternalArray__ICollection_Clear_m8315 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
 void Array_InternalArray__RemoveAt_m8316 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
 int32_t Array_get_Length_m1819 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
 int64_t Array_get_LongLength_m8317 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
 int32_t Array_get_Rank_m5316 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
 int32_t Array_GetRank_m8318 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
 int32_t Array_GetLength_m8319 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
 int64_t Array_GetLongLength_m8320 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
 int32_t Array_GetLowerBound_m8321 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
 Object_t * Array_GetValue_m8322 (Array_t * __this, Int32U5BU5D_t1185* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
 void Array_SetValue_m8323 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t1185* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
 Object_t * Array_GetValueImpl_m8324 (Array_t * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
 void Array_SetValueImpl_m8325 (Array_t * __this, Object_t * ___value, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 bool Array_FastCopy_m8326 (Object_t * __this/* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
 Array_t * Array_CreateInstanceImpl_m8327 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1185* ___lengths, Int32U5BU5D_t1185* ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
 bool Array_get_IsSynchronized_m8328 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
 Object_t * Array_get_SyncRoot_m8329 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
 bool Array_get_IsFixedSize_m8330 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
 bool Array_get_IsReadOnly_m8331 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
 Object_t * Array_GetEnumerator_m1766 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
 int32_t Array_GetUpperBound_m8332 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
 Object_t * Array_GetValue_m5317 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
 Object_t * Array_GetValue_m8333 (Array_t * __this, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
 Object_t * Array_GetValue_m8334 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
 Object_t * Array_GetValue_m8335 (Array_t * __this, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
 Object_t * Array_GetValue_m8336 (Array_t * __this, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
 Object_t * Array_GetValue_m8337 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
 void Array_SetValue_m8338 (Array_t * __this, Object_t * ___value, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
 void Array_SetValue_m8339 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
 void Array_SetValue_m8340 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
 void Array_SetValue_m7550 (Array_t * __this, Object_t * ___value, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
 void Array_SetValue_m8341 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
 void Array_SetValue_m8342 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
 Array_t * Array_CreateInstance_m8343 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
 Array_t * Array_CreateInstance_m8344 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
 Array_t * Array_CreateInstance_m8345 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
 Array_t * Array_CreateInstance_m8346 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1185* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
 Array_t * Array_CreateInstance_m8347 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1185* ___lengths, Int32U5BU5D_t1185* ___lowerBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
 Int32U5BU5D_t1185* Array_GetIntArray_m8348 (Object_t * __this/* static, unused */, Int64U5BU5D_t1748* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
 Array_t * Array_CreateInstance_m8349 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int64U5BU5D_t1748* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
 Object_t * Array_GetValue_m8350 (Array_t * __this, Int64U5BU5D_t1748* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
 void Array_SetValue_m8351 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t1748* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
 int32_t Array_BinarySearch_m8352 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
 int32_t Array_BinarySearch_m8353 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
 int32_t Array_BinarySearch_m8354 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
 int32_t Array_BinarySearch_m8355 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
 int32_t Array_DoBinarySearch_m8356 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
 void Array_Clear_m6410 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
 void Array_ClearInternal_m8357 (Object_t * __this/* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
 Object_t * Array_Clone_m6385 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
 void Array_Copy_m8358 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 void Array_Copy_m8359 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
 void Array_Copy_m8360 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
 void Array_Copy_m8361 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
 int32_t Array_IndexOf_m8362 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
 int32_t Array_IndexOf_m8363 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
 int32_t Array_IndexOf_m8364 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
 void Array_Initialize_m8365 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
 int32_t Array_LastIndexOf_m8366 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
 int32_t Array_LastIndexOf_m8367 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
 int32_t Array_LastIndexOf_m8368 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
 Swapper_t1747 * Array_get_swapper_m8369 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
 void Array_Reverse_m1333 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
 void Array_Reverse_m6485 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
 void Array_Sort_m8370 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
 void Array_Sort_m8371 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
 void Array_Sort_m8372 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
 void Array_Sort_m8373 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
 void Array_Sort_m8374 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
 void Array_Sort_m8375 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_Sort_m8376 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_Sort_m8377 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
 void Array_int_swapper_m8378 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
 void Array_obj_swapper_m8379 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
 void Array_slow_swapper_m8380 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
 void Array_double_swapper_m8381 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
 int32_t Array_new_gap_m8382 (Object_t * __this/* static, unused */, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m8383 (Object_t * __this/* static, unused */, DoubleU5BU5D_t1749* ___array, int32_t ___start, int32_t ___size, Swapper_t1747 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m8384 (Object_t * __this/* static, unused */, Int32U5BU5D_t1185* ___array, int32_t ___start, int32_t ___size, Swapper_t1747 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m8385 (Object_t * __this/* static, unused */, CharU5BU5D_t276* ___array, int32_t ___start, int32_t ___size, Swapper_t1747 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_qsort_m8386 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
 void Array_swap_m8387 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
 int32_t Array_compare_m8388 (Object_t * __this/* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
 void Array_CopyTo_m7620 (Array_t * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
 void Array_CopyTo_m8389 (Array_t * __this, Array_t * ___array, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 void Array_ConstrainedCopy_m8390 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
