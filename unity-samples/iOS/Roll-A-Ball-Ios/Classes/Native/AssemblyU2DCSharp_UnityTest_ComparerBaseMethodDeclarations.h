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

// UnityTest.ComparerBase
struct ComparerBase_t150;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t216;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.ComparerBase::.ctor()
extern "C" void ComparerBase__ctor_m711 (ComparerBase_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ComparerBase::Compare(System.Object)
extern "C" bool ComparerBase_Compare_m712 (ComparerBase_t150 * __this, Object_t * ___objValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityTest.ComparerBase::GetAccepatbleTypesForB()
extern "C" TypeU5BU5D_t216* ComparerBase_GetAccepatbleTypesForB_m713 (ComparerBase_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.ComparerBase::get_ConstValue()
extern "C" Object_t * ComparerBase_get_ConstValue_m714 (ComparerBase_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.ComparerBase::set_ConstValue(System.Object)
extern "C" void ComparerBase_set_ConstValue_m715 (ComparerBase_t150 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.ComparerBase::GetDefaultConstValue()
extern "C" Object_t * ComparerBase_GetDefaultConstValue_m716 (ComparerBase_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ComparerBase::GetFailureMessage()
extern "C" String_t* ComparerBase_GetFailureMessage_m717 (ComparerBase_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
