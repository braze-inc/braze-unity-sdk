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

// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C"  void Evidence__ctor_m2923485872 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C"  int32_t Evidence_get_Count_m2256383184 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C"  bool Evidence_get_IsSynchronized_m1680953145 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C"  Il2CppObject * Evidence_get_SyncRoot_m397267429 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C"  ArrayList_t2121638921 * Evidence_get_HostEvidenceList_m4094307694 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C"  ArrayList_t2121638921 * Evidence_get_AssemblyEvidenceList_m2146797868 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C"  void Evidence_CopyTo_m2676737933 (Evidence_t2439192402 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C"  bool Evidence_Equals_m3042273827 (Evidence_t2439192402 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C"  Il2CppObject * Evidence_GetEnumerator_m1666533534 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C"  int32_t Evidence_GetHashCode_m555337339 (Evidence_t2439192402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
