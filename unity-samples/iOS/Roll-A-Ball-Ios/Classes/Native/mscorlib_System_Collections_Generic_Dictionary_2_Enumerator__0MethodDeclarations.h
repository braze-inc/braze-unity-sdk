#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t90;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t9;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
#define Enumerator__ctor_m13778(__this, ___dictionary, method) (void)Enumerator__ctor_m13696_gshared((Enumerator_t2855 *)__this, (Dictionary_2_t2848 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m13779(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m13697_gshared((Enumerator_t2855 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13780(__this, method) (DictionaryEntry_t1576 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13698_gshared((Enumerator_t2855 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13781(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13699_gshared((Enumerator_t2855 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13782(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13700_gshared((Enumerator_t2855 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
#define Enumerator_MoveNext_m508(__this, method) (bool)Enumerator_MoveNext_m13701_gshared((Enumerator_t2855 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
 KeyValuePair_2_t91  Enumerator_get_Current_m504 (Enumerator_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m13783(__this, method) (String_t*)Enumerator_get_CurrentKey_m13703_gshared((Enumerator_t2855 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m13784(__this, method) (String_t*)Enumerator_get_CurrentValue_m13704_gshared((Enumerator_t2855 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::VerifyState()
#define Enumerator_VerifyState_m13785(__this, method) (void)Enumerator_VerifyState_m13705_gshared((Enumerator_t2855 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m13786(__this, method) (void)Enumerator_VerifyCurrent_m13706_gshared((Enumerator_t2855 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#define Enumerator_Dispose_m13787(__this, method) (void)Enumerator_Dispose_m13707_gshared((Enumerator_t2855 *)__this, method)
