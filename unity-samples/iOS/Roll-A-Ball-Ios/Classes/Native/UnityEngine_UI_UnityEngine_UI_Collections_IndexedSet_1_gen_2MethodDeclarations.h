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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2421;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t81;
// System.Object[]
struct ObjectU5BU5D_t87;
// System.Predicate`1<System.Object>
struct Predicate_1_t2138;
// System.Comparison`1<System.Object>
struct Comparison_1_t2144;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m16321_gshared (IndexedSet_1_t2421 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m16321(__this, method) (( void (*) (IndexedSet_1_t2421 *, const MethodInfo*))IndexedSet_1__ctor_m16321_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16323_gshared (IndexedSet_1_t2421 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16323(__this, method) (( Object_t * (*) (IndexedSet_1_t2421 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16323_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m16325_gshared (IndexedSet_1_t2421 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m16325(__this, ___item, method) (( void (*) (IndexedSet_1_t2421 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m16325_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m16327_gshared (IndexedSet_1_t2421 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m16327(__this, ___item, method) (( bool (*) (IndexedSet_1_t2421 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m16327_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m16329_gshared (IndexedSet_1_t2421 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m16329(__this, method) (( Object_t* (*) (IndexedSet_1_t2421 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m16329_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m16331_gshared (IndexedSet_1_t2421 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m16331(__this, method) (( void (*) (IndexedSet_1_t2421 *, const MethodInfo*))IndexedSet_1_Clear_m16331_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m16333_gshared (IndexedSet_1_t2421 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m16333(__this, ___item, method) (( bool (*) (IndexedSet_1_t2421 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m16333_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m16335_gshared (IndexedSet_1_t2421 * __this, ObjectU5BU5D_t87* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m16335(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2421 *, ObjectU5BU5D_t87*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m16335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m16337_gshared (IndexedSet_1_t2421 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m16337(__this, method) (( int32_t (*) (IndexedSet_1_t2421 *, const MethodInfo*))IndexedSet_1_get_Count_m16337_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m16339_gshared (IndexedSet_1_t2421 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m16339(__this, method) (( bool (*) (IndexedSet_1_t2421 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m16339_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m16341_gshared (IndexedSet_1_t2421 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m16341(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2421 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m16341_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m16343_gshared (IndexedSet_1_t2421 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m16343(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2421 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m16343_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m16345_gshared (IndexedSet_1_t2421 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m16345(__this, ___index, method) (( void (*) (IndexedSet_1_t2421 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m16345_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m16347_gshared (IndexedSet_1_t2421 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m16347(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2421 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m16347_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m16349_gshared (IndexedSet_1_t2421 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m16349(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2421 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m16349_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m16351_gshared (IndexedSet_1_t2421 * __this, Predicate_1_t2138 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m16351(__this, ___match, method) (( void (*) (IndexedSet_1_t2421 *, Predicate_1_t2138 *, const MethodInfo*))IndexedSet_1_RemoveAll_m16351_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m16352_gshared (IndexedSet_1_t2421 * __this, Comparison_1_t2144 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m16352(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2421 *, Comparison_1_t2144 *, const MethodInfo*))IndexedSet_1_Sort_m16352_gshared)(__this, ___sortLayoutFunction, method)
