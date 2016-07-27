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

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t614266080;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Remoting.WellKnownClientTypeEntry::.ctor(System.String,System.String,System.String)
extern "C"  void WellKnownClientTypeEntry__ctor_m4275779958 (WellKnownClientTypeEntry_t614266080 * __this, String_t* ___typeName0, String_t* ___assemblyName1, String_t* ___objectUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::get_ApplicationUrl()
extern "C"  String_t* WellKnownClientTypeEntry_get_ApplicationUrl_m3216150955 (WellKnownClientTypeEntry_t614266080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::get_ObjectType()
extern "C"  Type_t * WellKnownClientTypeEntry_get_ObjectType_m119167804 (WellKnownClientTypeEntry_t614266080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::get_ObjectUrl()
extern "C"  String_t* WellKnownClientTypeEntry_get_ObjectUrl_m2741314918 (WellKnownClientTypeEntry_t614266080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::ToString()
extern "C"  String_t* WellKnownClientTypeEntry_ToString_m395526031 (WellKnownClientTypeEntry_t614266080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
