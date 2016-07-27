#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Int64[]
struct Int64U5BU5D_t753178071;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Array/Swapper
struct Swapper_t4148259466;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Array_Swapper4148259466.h"

// System.Void System.Array::.ctor()
extern "C"  void Array__ctor_m497751576 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * Array_System_Collections_IList_get_Item_m2415566125 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void Array_System_Collections_IList_set_Item_m1450941252 (Il2CppArray * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C"  int32_t Array_System_Collections_IList_Add_m3099269674 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C"  void Array_System_Collections_IList_Clear_m412725562 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C"  bool Array_System_Collections_IList_Contains_m3746951906 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t Array_System_Collections_IList_IndexOf_m53357442 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void Array_System_Collections_IList_Insert_m3772933805 (Il2CppArray * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C"  void Array_System_Collections_IList_Remove_m4136562011 (Il2CppArray * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void Array_System_Collections_IList_RemoveAt_m969759165 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C"  int32_t Array_System_Collections_ICollection_get_Count_m1062882991 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C"  int32_t Array_InternalArray__ICollection_get_Count_m1680332058 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C"  bool Array_InternalArray__ICollection_get_IsReadOnly_m1501007613 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C"  void Array_InternalArray__ICollection_Clear_m474435621 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C"  void Array_InternalArray__RemoveAt_m907509114 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m1203127607 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C"  int64_t Array_get_LongLength_m1209728916 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C"  int32_t Array_get_Rank_m1671008509 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C"  int32_t Array_GetRank_m2808306300 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m1450876743 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C"  int64_t Array_GetLongLength_m1044315650 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C"  int32_t Array_GetLowerBound_m2369136542 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C"  Il2CppObject * Array_GetValue_m2756916811 (Il2CppArray * __this, Int32U5BU5D_t1809983122* ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C"  void Array_SetValue_m2302374076 (Il2CppArray * __this, Il2CppObject * ___value0, Int32U5BU5D_t1809983122* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C"  Il2CppObject * Array_GetValueImpl_m3335714605 (Il2CppArray * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C"  void Array_SetValueImpl_m111809118 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  bool Array_FastCopy_m256067930 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___source0, int32_t ___source_idx1, Il2CppArray * ___dest2, int32_t ___dest_idx3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C"  Il2CppArray * Array_CreateInstanceImpl_m3310710603 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int32U5BU5D_t1809983122* ___lengths1, Int32U5BU5D_t1809983122* ___bounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C"  bool Array_get_IsSynchronized_m3792108821 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C"  Il2CppObject * Array_get_SyncRoot_m3847217543 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C"  bool Array_get_IsFixedSize_m2362830166 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C"  bool Array_get_IsReadOnly_m2469891811 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  Il2CppObject * Array_GetEnumerator_m2728734362 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C"  int32_t Array_GetUpperBound_m97365085 (Il2CppArray * __this, int32_t ___dimension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C"  Il2CppObject * Array_GetValue_m244209261 (Il2CppArray * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C"  Il2CppObject * Array_GetValue_m612327306 (Il2CppArray * __this, int32_t ___index10, int32_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppObject * Array_GetValue_m1617218957 (Il2CppArray * __this, int32_t ___index10, int32_t ___index21, int32_t ___index32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C"  Il2CppObject * Array_GetValue_m244212206 (Il2CppArray * __this, int64_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C"  Il2CppObject * Array_GetValue_m2095831338 (Il2CppArray * __this, int64_t ___index10, int64_t ___index21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C"  Il2CppObject * Array_GetValue_m375587694 (Il2CppArray * __this, int64_t ___index10, int64_t ___index21, int64_t ___index32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C"  void Array_SetValue_m3564405919 (Il2CppArray * __this, Il2CppObject * ___value0, int64_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C"  void Array_SetValue_m2615500313 (Il2CppArray * __this, Il2CppObject * ___value0, int64_t ___index11, int64_t ___index22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C"  void Array_SetValue_m235879135 (Il2CppArray * __this, Il2CppObject * ___value0, int64_t ___index11, int64_t ___index22, int64_t ___index33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C"  void Array_SetValue_m3564402974 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C"  void Array_SetValue_m1131996281 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___index11, int32_t ___index22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C"  void Array_SetValue_m1477510398 (Il2CppArray * __this, Il2CppObject * ___value0, int32_t ___index11, int32_t ___index22, int32_t ___index33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C"  Il2CppArray * Array_CreateInstance_m1364223436 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C"  Il2CppArray * Array_CreateInstance_m3172696715 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, int32_t ___length11, int32_t ___length22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppArray * Array_CreateInstance_m3652670508 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, int32_t ___length11, int32_t ___length22, int32_t ___length33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C"  Il2CppArray * Array_CreateInstance_m1053747690 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int32U5BU5D_t1809983122* ___lengths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C"  Il2CppArray * Array_CreateInstance_m814141195 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int32U5BU5D_t1809983122* ___lengths1, Int32U5BU5D_t1809983122* ___lowerBounds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C"  Int32U5BU5D_t1809983122* Array_GetIntArray_m3246603532 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t753178071* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C"  Il2CppArray * Array_CreateInstance_m1056577835 (Il2CppObject * __this /* static, unused */, Type_t * ___elementType0, Int64U5BU5D_t753178071* ___lengths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C"  Il2CppObject * Array_GetValue_m2759746956 (Il2CppArray * __this, Int64U5BU5D_t753178071* ___indices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C"  void Array_SetValue_m2305204221 (Il2CppArray * __this, Il2CppObject * ___value0, Int64U5BU5D_t753178071* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C"  int32_t Array_BinarySearch_m183313925 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_BinarySearch_m3131524835 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C"  int32_t Array_BinarySearch_m2035084453 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_BinarySearch_m3041952835 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___value3, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_DoBinarySearch_m1921037304 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___value3, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Clear_m2499577033 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C"  void Array_ClearInternal_m1225452710 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___a0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C"  Il2CppObject * Array_Clone_m1369268734 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m3799309042 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, Il2CppArray * ___destinationArray1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m2598616668 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, int32_t ___sourceIndex1, Il2CppArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C"  void Array_Copy_m583019867 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, int64_t ___sourceIndex1, Il2CppArray * ___destinationArray2, int64_t ___destinationIndex3, int64_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C"  void Array_Copy_m3799311987 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, Il2CppArray * ___destinationArray1, int64_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C"  int32_t Array_IndexOf_m480670679 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C"  int32_t Array_IndexOf_m1662246496 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C"  int32_t Array_IndexOf_m1794349687 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C"  void Array_Initialize_m2637385596 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C"  int32_t Array_LastIndexOf_m673447137 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C"  int32_t Array_LastIndexOf_m776394134 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C"  int32_t Array_LastIndexOf_m2203224833 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___value1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C"  Swapper_t4148259466 * Array_get_swapper_m896107047 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C"  void Array_Reverse_m3430038334 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Reverse_m3064094494 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C"  void Array_Sort_m3616962096 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C"  void Array_Sort_m576952892 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C"  void Array_Sort_m3443575448 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, Il2CppObject * ___comparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Sort_m3912494992 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C"  void Array_Sort_m2177774092 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Sort_m870898844 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___index2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_Sort_m2057456952 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, int32_t ___index1, int32_t ___length2, Il2CppObject * ___comparer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_Sort_m4285041580 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___index2, int32_t ___length3, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C"  void Array_int_swapper_m3033759158 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C"  void Array_obj_swapper_m2255293358 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C"  void Array_slow_swapper_m1091278254 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C"  void Array_double_swapper_m1951199390 (Il2CppArray * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C"  int32_t Array_new_gap_m3653386306 (Il2CppObject * __this /* static, unused */, int32_t ___gap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m3790031292 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1048280995* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t4148259466 * ___swap_items3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m1119151831 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t4148259466 * ___swap_items3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m4251658817 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___array0, int32_t ___start1, int32_t ___size2, Swapper_t4148259466 * ___swap_items3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_qsort_m2618274951 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___low02, int32_t ___high03, Il2CppObject * ___comparer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C"  void Array_swap_m3373592551 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___keys0, Il2CppArray * ___items1, int32_t ___i2, int32_t ___j3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_compare_m3860906437 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value10, Il2CppObject * ___value21, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C"  void Array_CopyTo_m910233845 (Il2CppArray * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C"  void Array_CopyTo_m910236790 (Il2CppArray * __this, Il2CppArray * ___array0, int64_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_ConstrainedCopy_m695713564 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___sourceArray0, int32_t ___sourceIndex1, Il2CppArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
