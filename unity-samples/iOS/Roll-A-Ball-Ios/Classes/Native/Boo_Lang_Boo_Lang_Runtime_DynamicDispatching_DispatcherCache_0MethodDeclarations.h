#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t1146;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1143;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1147;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1144;

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
 void DispatcherCache__ctor_m5291 (DispatcherCache_t1146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
 void DispatcherCache__cctor_m5292 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
 Dispatcher_t1143 * DispatcherCache_Get_m5293 (DispatcherCache_t1146 * __this, DispatcherKey_t1147 * ___key, DispatcherFactory_t1144 * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
