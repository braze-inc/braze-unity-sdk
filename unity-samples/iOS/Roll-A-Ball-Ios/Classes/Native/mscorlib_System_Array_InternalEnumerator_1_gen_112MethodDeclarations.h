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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21846_gshared (InternalEnumerator_1_t2862 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m21846(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2862 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m21846_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21847_gshared (InternalEnumerator_1_t2862 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21847(__this, method) (( void (*) (InternalEnumerator_1_t2862 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21847_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21848_gshared (InternalEnumerator_1_t2862 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21848(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2862 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21848_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21849_gshared (InternalEnumerator_1_t2862 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21849(__this, method) (( void (*) (InternalEnumerator_1_t2862 *, const MethodInfo*))InternalEnumerator_1_Dispose_m21849_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21850_gshared (InternalEnumerator_1_t2862 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21850(__this, method) (( bool (*) (InternalEnumerator_1_t2862 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m21850_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::get_Current()
extern "C" ResourceInfo_t1677  InternalEnumerator_1_get_Current_m21851_gshared (InternalEnumerator_1_t2862 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21851(__this, method) (( ResourceInfo_t1677  (*) (InternalEnumerator_1_t2862 *, const MethodInfo*))InternalEnumerator_1_get_Current_m21851_gshared)(__this, method)
