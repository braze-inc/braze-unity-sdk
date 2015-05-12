#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t1885;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1383;
// System.Collections.IComparer
struct IComparer_t1577;

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ReadOnlyArrayListWrapper__ctor_m9137 (ReadOnlyArrayListWrapper_t1885 * __this, ArrayList_t1383 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
 String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m9138 (ReadOnlyArrayListWrapper_t1885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
 bool ReadOnlyArrayListWrapper_get_IsReadOnly_m9139 (ReadOnlyArrayListWrapper_t1885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
 Object_t * ReadOnlyArrayListWrapper_get_Item_m9140 (ReadOnlyArrayListWrapper_t1885 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
 void ReadOnlyArrayListWrapper_set_Item_m9141 (ReadOnlyArrayListWrapper_t1885 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
 void ReadOnlyArrayListWrapper_Sort_m9142 (ReadOnlyArrayListWrapper_t1885 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
 void ReadOnlyArrayListWrapper_Sort_m9143 (ReadOnlyArrayListWrapper_t1885 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
