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

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t3359088292;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.IContextAttribute[]
struct IContextAttributeU5BU5D_t2574531805;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
extern "C"  void ActivatedClientTypeEntry__ctor_m1427925562 (ActivatedClientTypeEntry_t3359088292 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___appUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C"  String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m3757166703 (ActivatedClientTypeEntry_t3359088292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C"  IContextAttributeU5BU5D_t2574531805* ActivatedClientTypeEntry_get_ContextAttributes_m2565781780 (ActivatedClientTypeEntry_t3359088292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C"  Type_t * ActivatedClientTypeEntry_get_ObjectType_m2838469632 (ActivatedClientTypeEntry_t3359088292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern "C"  String_t* ActivatedClientTypeEntry_ToString_m1070162771 (ActivatedClientTypeEntry_t3359088292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
