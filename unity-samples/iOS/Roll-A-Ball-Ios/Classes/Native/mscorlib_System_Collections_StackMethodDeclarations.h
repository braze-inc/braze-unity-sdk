#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack
struct Stack_t993;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void System.Collections.Stack::.ctor()
 void Stack__ctor_m5160 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
 void Stack_Resize_m9173 (Stack_t993 * __this, int32_t ___ncapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
 int32_t Stack_get_Count_m5162 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
 bool Stack_get_IsSynchronized_m5163 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
 Object_t * Stack_get_SyncRoot_m5164 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
 void Stack_Clear_m4999 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
 void Stack_CopyTo_m5165 (Stack_t993 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
 Object_t * Stack_GetEnumerator_m5161 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
 Object_t * Stack_Peek_m4994 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
 Object_t * Stack_Pop_m4995 (Stack_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
 void Stack_Push_m4993 (Stack_t993 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
