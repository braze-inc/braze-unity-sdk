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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2217;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2205;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13700_gshared (ShimEnumerator_t2217 * __this, Dictionary_2_t2205 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13700(__this, ___host, method) (( void (*) (ShimEnumerator_t2217 *, Dictionary_2_t2205 *, const MethodInfo*))ShimEnumerator__ctor_m13700_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13701_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13701(__this, method) (( bool (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_MoveNext_m13701_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1193  ShimEnumerator_get_Entry_m13702_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13702(__this, method) (( DictionaryEntry_t1193  (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Entry_m13702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13703_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13703(__this, method) (( Object_t * (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Key_m13703_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13704_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13704(__this, method) (( Object_t * (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Value_m13704_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13705_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13705(__this, method) (( Object_t * (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_get_Current_m13705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m13706_gshared (ShimEnumerator_t2217 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13706(__this, method) (( void (*) (ShimEnumerator_t2217 *, const MethodInfo*))ShimEnumerator_Reset_m13706_gshared)(__this, method)
