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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2205;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13650_gshared (Enumerator_t2211 * __this, Dictionary_2_t2205 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13650(__this, ___dictionary, method) (( void (*) (Enumerator_t2211 *, Dictionary_2_t2205 *, const MethodInfo*))Enumerator__ctor_m13650_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13651_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13651(__this, method) (( Object_t * (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13652_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13652(__this, method) (( void (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13652_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1193  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13653_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13653(__this, method) (( DictionaryEntry_t1193  (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13654_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13654(__this, method) (( Object_t * (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13654_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13655_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13655(__this, method) (( Object_t * (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13656_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13656(__this, method) (( bool (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_MoveNext_m13656_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2207  Enumerator_get_Current_m13657_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13657(__this, method) (( KeyValuePair_2_t2207  (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_get_Current_m13657_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13658_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13658(__this, method) (( Object_t * (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_get_CurrentKey_m13658_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m13659_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13659(__this, method) (( int32_t (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_get_CurrentValue_m13659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m13660_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13660(__this, method) (( void (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_Reset_m13660_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m13661_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13661(__this, method) (( void (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_VerifyState_m13661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13662_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13662(__this, method) (( void (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_VerifyCurrent_m13662_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m13663_gshared (Enumerator_t2211 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13663(__this, method) (( void (*) (Enumerator_t2211 *, const MethodInfo*))Enumerator_Dispose_m13663_gshared)(__this, method)
