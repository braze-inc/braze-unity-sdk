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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2715;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20433_gshared (Enumerator_t2722 * __this, Dictionary_2_t2715 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20433(__this, ___dictionary, method) (( void (*) (Enumerator_t2722 *, Dictionary_2_t2715 *, const MethodInfo*))Enumerator__ctor_m20433_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20434_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20434(__this, method) (( Object_t * (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20434_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m20435_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m20435(__this, method) (( void (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m20435_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1193  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20436_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20436(__this, method) (( DictionaryEntry_t1193  (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20436_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20437_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20437(__this, method) (( Object_t * (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20437_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20438_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20438(__this, method) (( Object_t * (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20438_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20439_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20439(__this, method) (( bool (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_MoveNext_m20439_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2717  Enumerator_get_Current_m20440_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20440(__this, method) (( KeyValuePair_2_t2717  (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_get_Current_m20440_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20441_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20441(__this, method) (( Object_t * (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_get_CurrentKey_m20441_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20442_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20442(__this, method) (( int32_t (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_get_CurrentValue_m20442_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m20443_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_Reset_m20443(__this, method) (( void (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_Reset_m20443_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m20444_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20444(__this, method) (( void (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_VerifyState_m20444_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20445_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20445(__this, method) (( void (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_VerifyCurrent_m20445_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m20446_gshared (Enumerator_t2722 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20446(__this, method) (( void (*) (Enumerator_t2722 *, const MethodInfo*))Enumerator_Dispose_m20446_gshared)(__this, method)
