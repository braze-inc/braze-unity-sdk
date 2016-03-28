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

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t544662673;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894317828;
// System.MarshalByRefObject
struct MarshalByRefObject_t2055500882;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef3894317828.h"
#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C"  void ClientIdentity__ctor_m3595127653 (ClientIdentity_t544662673 * __this, String_t* ___objectUri, ObjRef_t3894317828 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C"  MarshalByRefObject_t2055500882 * ClientIdentity_get_ClientProxy_m4126686292 (ClientIdentity_t544662673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C"  void ClientIdentity_set_ClientProxy_m12327679 (ClientIdentity_t544662673 * __this, MarshalByRefObject_t2055500882 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t3894317828 * ClientIdentity_CreateObjRef_m2789811095 (ClientIdentity_t544662673 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C"  String_t* ClientIdentity_get_TargetUri_m3456785152 (ClientIdentity_t544662673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
