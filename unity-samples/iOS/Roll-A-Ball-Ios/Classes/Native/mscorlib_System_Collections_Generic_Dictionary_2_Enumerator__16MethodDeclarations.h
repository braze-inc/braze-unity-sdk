#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Enumerator_t4572;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1136;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1132;
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t1134;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
#define Enumerator__ctor_m24904(__this, ___dictionary, method) (void)Enumerator__ctor_m13487_gshared((Enumerator_t2836 *)__this, (Dictionary_2_t2829 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m24905(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m13488_gshared((Enumerator_t2836 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24906(__this, method) (DictionaryEntry_t1564 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13489_gshared((Enumerator_t2836 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24907(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13490_gshared((Enumerator_t2836 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24908(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13491_gshared((Enumerator_t2836 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::MoveNext()
#define Enumerator_MoveNext_m24909(__this, method) (bool)Enumerator_MoveNext_m13492_gshared((Enumerator_t2836 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Current()
 KeyValuePair_2_t4570  Enumerator_get_Current_m24910 (Enumerator_t4572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m24911(__this, method) (DispatcherKey_t1136 *)Enumerator_get_CurrentKey_m13494_gshared((Enumerator_t2836 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m24912(__this, method) (Dispatcher_t1132 *)Enumerator_get_CurrentValue_m13495_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::VerifyState()
#define Enumerator_VerifyState_m24913(__this, method) (void)Enumerator_VerifyState_m13496_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m24914(__this, method) (void)Enumerator_VerifyCurrent_m13497_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Dispose()
#define Enumerator_Dispose_m24915(__this, method) (void)Enumerator_Dispose_m13498_gshared((Enumerator_t2836 *)__this, method)
