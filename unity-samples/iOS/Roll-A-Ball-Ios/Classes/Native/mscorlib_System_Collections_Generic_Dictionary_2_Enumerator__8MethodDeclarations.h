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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t899;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16084_gshared (Enumerator_t2402 * __this, Dictionary_2_t899 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16084(__this, ___dictionary, method) (( void (*) (Enumerator_t2402 *, Dictionary_2_t899 *, const MethodInfo*))Enumerator__ctor_m16084_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16085_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16085(__this, method) (( Object_t * (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16085_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m16086_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m16086(__this, method) (( void (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m16086_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1193  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16087_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16087(__this, method) (( DictionaryEntry_t1193  (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16087_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16088_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16088(__this, method) (( Object_t * (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16088_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16089_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16089(__this, method) (( Object_t * (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16089_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16090_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16090(__this, method) (( bool (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_MoveNext_m16090_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2398  Enumerator_get_Current_m16091_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16091(__this, method) (( KeyValuePair_2_t2398  (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_get_Current_m16091_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m16092_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16092(__this, method) (( int32_t (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_get_CurrentKey_m16092_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m16093_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16093(__this, method) (( Object_t * (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_get_CurrentValue_m16093_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m16094_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_Reset_m16094(__this, method) (( void (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_Reset_m16094_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m16095_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16095(__this, method) (( void (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_VerifyState_m16095_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16096_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16096(__this, method) (( void (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_VerifyCurrent_m16096_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m16097_gshared (Enumerator_t2402 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16097(__this, method) (( void (*) (Enumerator_t2402 *, const MethodInfo*))Enumerator_Dispose_m16097_gshared)(__this, method)
