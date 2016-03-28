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

// System.Collections.Stack
struct Stack_t1623036922;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Collections.Stack::.ctor()
extern "C"  void Stack__ctor_m1821673314 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Collections.ICollection)
extern "C"  void Stack__ctor_m2374718803 (Stack_t1623036922 * __this, Il2CppObject * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Int32)
extern "C"  void Stack__ctor_m2880977331 (Stack_t1623036922 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C"  void Stack_Resize_m1932726631 (Stack_t1623036922 * __this, int32_t ___ncapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C"  int32_t Stack_get_Count_m3511538634 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
extern "C"  bool Stack_get_IsSynchronized_m1915076875 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C"  Il2CppObject * Stack_get_SyncRoot_m320831869 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C"  void Stack_Clear_m3522773901 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Clone()
extern "C"  Il2CppObject * Stack_Clone_m2500471496 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C"  void Stack_CopyTo_m2646481343 (Stack_t1623036922 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C"  Il2CppObject * Stack_GetEnumerator_m671500004 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C"  Il2CppObject * Stack_Peek_m4186849970 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C"  Il2CppObject * Stack_Pop_m4291786044 (Stack_t1623036922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C"  void Stack_Push_m3581559000 (Stack_t1623036922 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
