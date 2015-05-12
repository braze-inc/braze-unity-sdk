#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Enumerator_t4590;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1147;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1143;
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t1145;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
#define Enumerator__ctor_m25114(__this, ___dictionary, method) (void)Enumerator__ctor_m13696_gshared((Enumerator_t2855 *)__this, (Dictionary_2_t2848 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m25115(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m13697_gshared((Enumerator_t2855 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25116(__this, method) (DictionaryEntry_t1576 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13698_gshared((Enumerator_t2855 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25117(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13699_gshared((Enumerator_t2855 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25118(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13700_gshared((Enumerator_t2855 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::MoveNext()
#define Enumerator_MoveNext_m25119(__this, method) (bool)Enumerator_MoveNext_m13701_gshared((Enumerator_t2855 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Current()
 KeyValuePair_2_t4588  Enumerator_get_Current_m25120 (Enumerator_t4590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m25121(__this, method) (DispatcherKey_t1147 *)Enumerator_get_CurrentKey_m13703_gshared((Enumerator_t2855 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m25122(__this, method) (Dispatcher_t1143 *)Enumerator_get_CurrentValue_m13704_gshared((Enumerator_t2855 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::VerifyState()
#define Enumerator_VerifyState_m25123(__this, method) (void)Enumerator_VerifyState_m13705_gshared((Enumerator_t2855 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m25124(__this, method) (void)Enumerator_VerifyCurrent_m13706_gshared((Enumerator_t2855 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Dispose()
#define Enumerator_Dispose_m25125(__this, method) (void)Enumerator_Dispose_m13707_gshared((Enumerator_t2855 *)__this, method)
