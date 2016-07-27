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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
extern "C"  void DictionaryEntry__ctor_m2600671860 (DictionaryEntry_t130027246 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  Il2CppObject * DictionaryEntry_get_Key_m3516209325 (DictionaryEntry_t130027246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  Il2CppObject * DictionaryEntry_get_Value_m4281303039 (DictionaryEntry_t130027246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DictionaryEntry_t130027246;
struct DictionaryEntry_t130027246_marshaled_com;

extern "C" void DictionaryEntry_t130027246_marshal_com(const DictionaryEntry_t130027246& unmarshaled, DictionaryEntry_t130027246_marshaled_com& marshaled);
extern "C" void DictionaryEntry_t130027246_marshal_com_back(const DictionaryEntry_t130027246_marshaled_com& marshaled, DictionaryEntry_t130027246& unmarshaled);
extern "C" void DictionaryEntry_t130027246_marshal_com_cleanup(DictionaryEntry_t130027246_marshaled_com& marshaled);
