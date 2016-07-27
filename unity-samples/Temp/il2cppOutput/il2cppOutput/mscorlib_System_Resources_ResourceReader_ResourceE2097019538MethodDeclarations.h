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

// System.Resources.ResourceReader/ResourceEnumerator
struct ResourceEnumerator_t2097019538;
// System.Resources.ResourceReader
struct ResourceReader_t4097835539;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Resources_ResourceReader4097835539.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Resources.ResourceReader/ResourceEnumerator::.ctor(System.Resources.ResourceReader)
extern "C"  void ResourceEnumerator__ctor_m3994194575 (ResourceEnumerator_t2097019538 * __this, ResourceReader_t4097835539 * ___readerToEnumerate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Resources.ResourceReader/ResourceEnumerator::get_Entry()
extern "C"  DictionaryEntry_t130027246  ResourceEnumerator_get_Entry_m715318570 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Key()
extern "C"  Il2CppObject * ResourceEnumerator_get_Key_m424542697 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Value()
extern "C"  Il2CppObject * ResourceEnumerator_get_Value_m1012075067 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Current()
extern "C"  Il2CppObject * ResourceEnumerator_get_Current_m3366221315 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::MoveNext()
extern "C"  bool ResourceEnumerator_MoveNext_m3916307456 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::Reset()
extern "C"  void ResourceEnumerator_Reset_m4126890775 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::FillCache()
extern "C"  void ResourceEnumerator_FillCache_m1751484935 (ResourceEnumerator_t2097019538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
