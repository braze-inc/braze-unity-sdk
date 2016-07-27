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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3407512455;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Collections_Generic_Stack_1_Enumerat4014815677.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m2725689112_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1__ctor_m2725689112(__this, method) ((  void (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1__ctor_m2725689112_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m1582336274_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m1582336274(__this, method) ((  bool (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m1582336274_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Stack_1_System_Collections_ICollection_get_SyncRoot_m2938343088_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m2938343088(__this, method) ((  Il2CppObject * (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m2938343088_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Stack_1_System_Collections_ICollection_CopyTo_m3277353260_gshared (Stack_1_t3407512455 * __this, Il2CppArray * ___dest0, int32_t ___idx1, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m3277353260(__this, ___dest0, ___idx1, method) ((  void (*) (Stack_1_t3407512455 *, Il2CppArray *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m3277353260_gshared)(__this, ___dest0, ___idx1, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m625377314_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m625377314(__this, method) ((  Il2CppObject* (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m625377314_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Stack_1_System_Collections_IEnumerable_GetEnumerator_m4095051687_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m4095051687(__this, method) ((  Il2CppObject * (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m4095051687_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C"  Il2CppObject * Stack_1_Peek_m3418768488_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_Peek_m3418768488(__this, method) ((  Il2CppObject * (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_Peek_m3418768488_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  Il2CppObject * Stack_1_Pop_m4267009222_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_Pop_m4267009222(__this, method) ((  Il2CppObject * (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_Pop_m4267009222_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C"  void Stack_1_Push_m3350166104_gshared (Stack_1_t3407512455 * __this, Il2CppObject * ___t0, const MethodInfo* method);
#define Stack_1_Push_m3350166104(__this, ___t0, method) ((  void (*) (Stack_1_t3407512455 *, Il2CppObject *, const MethodInfo*))Stack_1_Push_m3350166104_gshared)(__this, ___t0, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m3631765324_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m3631765324(__this, method) ((  int32_t (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_get_Count_m3631765324_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t4014815678  Stack_1_GetEnumerator_m202302354_gshared (Stack_1_t3407512455 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m202302354(__this, method) ((  Enumerator_t4014815678  (*) (Stack_1_t3407512455 *, const MethodInfo*))Stack_1_GetEnumerator_m202302354_gshared)(__this, method)
