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

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t1788;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ActivatedServiceTypeEntry::.ctor(System.String,System.String)
extern "C" void ActivatedServiceTypeEntry__ctor_m10473 (ActivatedServiceTypeEntry_t1788 * __this, String_t* ___typeName, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedServiceTypeEntry_get_ObjectType_m10474 (ActivatedServiceTypeEntry_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedServiceTypeEntry::ToString()
extern "C" String_t* ActivatedServiceTypeEntry_ToString_m10475 (ActivatedServiceTypeEntry_t1788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
