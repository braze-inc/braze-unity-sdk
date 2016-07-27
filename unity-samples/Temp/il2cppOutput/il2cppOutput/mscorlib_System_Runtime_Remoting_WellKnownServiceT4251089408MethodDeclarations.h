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

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t4251089408;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMod251966751.h"

// System.Void System.Runtime.Remoting.WellKnownServiceTypeEntry::.ctor(System.String,System.String,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C"  void WellKnownServiceTypeEntry__ctor_m1727189747 (WellKnownServiceTypeEntry_t4251089408 * __this, String_t* ___typeName0, String_t* ___assemblyName1, String_t* ___objectUri2, int32_t ___mode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::get_Mode()
extern "C"  int32_t WellKnownServiceTypeEntry_get_Mode_m1841666540 (WellKnownServiceTypeEntry_t4251089408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::get_ObjectType()
extern "C"  Type_t * WellKnownServiceTypeEntry_get_ObjectType_m3793356090 (WellKnownServiceTypeEntry_t4251089408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::get_ObjectUri()
extern "C"  String_t* WellKnownServiceTypeEntry_get_ObjectUri_m2111376023 (WellKnownServiceTypeEntry_t4251089408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::ToString()
extern "C"  String_t* WellKnownServiceTypeEntry_ToString_m1826608795 (WellKnownServiceTypeEntry_t4251089408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
