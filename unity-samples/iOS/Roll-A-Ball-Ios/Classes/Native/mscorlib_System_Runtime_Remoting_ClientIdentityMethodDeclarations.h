#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2093;
// System.MarshalByRefObject
struct MarshalByRefObject_t1610;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2090;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
 void ClientIdentity__ctor_m10484 (ClientIdentity_t2093 * __this, String_t* ___objectUri, ObjRef_t2090 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
 MarshalByRefObject_t1610 * ClientIdentity_get_ClientProxy_m10485 (ClientIdentity_t2093 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
 void ClientIdentity_set_ClientProxy_m10486 (ClientIdentity_t2093 * __this, MarshalByRefObject_t1610 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
 ObjRef_t2090 * ClientIdentity_CreateObjRef_m10487 (ClientIdentity_t2093 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
 String_t* ClientIdentity_get_TargetUri_m10488 (ClientIdentity_t2093 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
