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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
struct _EqualityComparer_t1000;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1001;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern "C" void _EqualityComparer__ctor_m5175 (_EqualityComparer_t1000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern "C" int32_t _EqualityComparer_GetHashCode_m5176 (_EqualityComparer_t1000 * __this, DispatcherKey_t1001 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern "C" bool _EqualityComparer_Equals_m5177 (_EqualityComparer_t1000 * __this, DispatcherKey_t1001 * ___x, DispatcherKey_t1001 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
