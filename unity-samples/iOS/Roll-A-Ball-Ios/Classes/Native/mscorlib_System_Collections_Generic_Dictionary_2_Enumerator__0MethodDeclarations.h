#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t81;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t14;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
#define Enumerator__ctor_m13569(__this, ___dictionary, method) (void)Enumerator__ctor_m13487_gshared((Enumerator_t2836 *)__this, (Dictionary_2_t2829 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m13570(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m13488_gshared((Enumerator_t2836 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13571(__this, method) (DictionaryEntry_t1564 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13489_gshared((Enumerator_t2836 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13572(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13490_gshared((Enumerator_t2836 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13573(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13491_gshared((Enumerator_t2836 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
#define Enumerator_MoveNext_m456(__this, method) (bool)Enumerator_MoveNext_m13492_gshared((Enumerator_t2836 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
 KeyValuePair_2_t82  Enumerator_get_Current_m452 (Enumerator_t81 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m13574(__this, method) (String_t*)Enumerator_get_CurrentKey_m13494_gshared((Enumerator_t2836 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m13575(__this, method) (String_t*)Enumerator_get_CurrentValue_m13495_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::VerifyState()
#define Enumerator_VerifyState_m13576(__this, method) (void)Enumerator_VerifyState_m13496_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m13577(__this, method) (void)Enumerator_VerifyCurrent_m13497_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#define Enumerator_Dispose_m13578(__this, method) (void)Enumerator_Dispose_m13498_gshared((Enumerator_t2836 *)__this, method)
