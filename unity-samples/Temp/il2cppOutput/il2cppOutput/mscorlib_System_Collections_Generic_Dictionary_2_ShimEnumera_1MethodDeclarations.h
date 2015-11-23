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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2408;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t899;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16134_gshared (ShimEnumerator_t2408 * __this, Dictionary_2_t899 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16134(__this, ___host, method) (( void (*) (ShimEnumerator_t2408 *, Dictionary_2_t899 *, const MethodInfo*))ShimEnumerator__ctor_m16134_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16135_gshared (ShimEnumerator_t2408 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16135(__this, method) (( bool (*) (ShimEnumerator_t2408 *, const MethodInfo*))ShimEnumerator_MoveNext_m16135_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1193  ShimEnumerator_get_Entry_m16136_gshared (ShimEnumerator_t2408 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16136(__this, method) (( DictionaryEntry_t1193  (*) (ShimEnumerator_t2408 *, const MethodInfo*))ShimEnumerator_get_Entry_m16136_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16137_gshared (ShimEnumerator_t2408 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16137(__this, method) (( Object_t * (*) (ShimEnumerator_t2408 *, const MethodInfo*))ShimEnumerator_get_Key_m16137_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16138_gshared (ShimEnumerator_t2408 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16138(__this, method) (( Object_t * (*) (ShimEnumerator_t2408 *, const MethodInfo*))ShimEnumerator_get_Value_m16138_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16139_gshared (ShimEnumerator_t2408 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16139(__this, method) (( Object_t * (*) (ShimEnumerator_t2408 *, const MethodInfo*))ShimEnumerator_get_Current_m16139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m16140_gshared (ShimEnumerator_t2408 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16140(__this, method) (( void (*) (ShimEnumerator_t2408 *, const MethodInfo*))ShimEnumerator_Reset_m16140_gshared)(__this, method)
