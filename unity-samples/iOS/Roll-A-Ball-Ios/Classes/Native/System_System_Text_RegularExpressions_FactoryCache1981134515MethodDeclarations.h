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

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1981134515;
// System.String
struct String_t;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1224363367;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_RegexOptions2783621746.h"

// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
extern "C"  void FactoryCache__ctor_m3600817686 (FactoryCache_t1981134515 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
extern "C"  void FactoryCache_Add_m2875491713 (FactoryCache_t1981134515 * __this, String_t* ___pattern, int32_t ___options, Il2CppObject * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
extern "C"  void FactoryCache_Cleanup_m2756098695 (FactoryCache_t1981134515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  Il2CppObject * FactoryCache_Lookup_m418619505 (FactoryCache_t1981134515 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
