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

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1731;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t1735;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1753;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::.ctor()
extern "C" void DynamicPropertyCollection__ctor_m10251 (DynamicPropertyCollection_t1731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::get_HasProperties()
extern "C" bool DynamicPropertyCollection_get_HasProperties_m10252 (DynamicPropertyCollection_t1731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty)
extern "C" bool DynamicPropertyCollection_RegisterDynamicProperty_m10253 (DynamicPropertyCollection_t1731 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::UnregisterDynamicProperty(System.String)
extern "C" bool DynamicPropertyCollection_UnregisterDynamicProperty_m10254 (DynamicPropertyCollection_t1731 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::NotifyMessage(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void DynamicPropertyCollection_NotifyMessage_m10255 (DynamicPropertyCollection_t1731 * __this, bool ___start, Object_t * ___msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.DynamicPropertyCollection::FindProperty(System.String)
extern "C" int32_t DynamicPropertyCollection_FindProperty_m10256 (DynamicPropertyCollection_t1731 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
