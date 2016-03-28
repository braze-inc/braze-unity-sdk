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

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t4226329727;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t924525528;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Collections_Specialized_ListDictionar924525528.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C"  void ListDictionary__ctor_m1342781113 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C"  void ListDictionary__ctor_m1799491195 (ListDictionary_t4226329727 * __this, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m3647053798 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C"  DictionaryNode_t924525528 * ListDictionary_FindEntry_m2277169595 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C"  DictionaryNode_t924525528 * ListDictionary_FindEntry_m831100599 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, DictionaryNode_t924525528 ** ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C"  void ListDictionary_AddImpl_m2933606886 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, Il2CppObject * ___value, DictionaryNode_t924525528 * ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C"  int32_t ListDictionary_get_Count_m3433674349 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C"  bool ListDictionary_get_IsSynchronized_m34636604 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C"  Il2CppObject * ListDictionary_get_SyncRoot_m1493803004 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void ListDictionary_CopyTo_m1026734678 (ListDictionary_t4226329727 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C"  Il2CppObject * ListDictionary_get_Item_m151625826 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C"  void ListDictionary_set_Item_m588649799 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern "C"  Il2CppObject * ListDictionary_get_Keys_m9342936 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C"  void ListDictionary_Add_m1089190058 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C"  void ListDictionary_Clear_m3043881700 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C"  bool ListDictionary_Contains_m142502176 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C"  Il2CppObject * ListDictionary_GetEnumerator_m2156198277 (ListDictionary_t4226329727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C"  void ListDictionary_Remove_m4061265285 (ListDictionary_t4226329727 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
