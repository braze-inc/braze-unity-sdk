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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t1616774716;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1056575496;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t3258056537;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t2992698435;

#include "codegen/il2cpp-codegen.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa3258056537.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa2992698435.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C"  void DispatcherCache__ctor_m2809249023 (DispatcherCache_t1616774716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C"  void DispatcherCache__cctor_m705277582 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t1056575496 * DispatcherCache_Get_m3716505639 (DispatcherCache_t1616774716 * __this, DispatcherKey_t3258056537 * ___key0, DispatcherFactory_t2992698435 * ___factory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
