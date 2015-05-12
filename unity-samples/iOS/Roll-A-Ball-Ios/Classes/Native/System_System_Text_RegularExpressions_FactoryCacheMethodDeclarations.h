#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1642;
// System.String
struct String_t;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1643;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
 void FactoryCache__ctor_m7147 (FactoryCache_t1642 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
 void FactoryCache_Add_m7148 (FactoryCache_t1642 * __this, String_t* ___pattern, int32_t ___options, Object_t * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
 void FactoryCache_Cleanup_m7149 (FactoryCache_t1642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
 Object_t * FactoryCache_Lookup_m7150 (FactoryCache_t1642 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
