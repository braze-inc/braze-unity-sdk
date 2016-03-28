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

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t235542557;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t544662673;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Remoting_ClientIdentity544662673.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RemotingProxy__ctor_m1901097423 (RemotingProxy_t235542557 * __this, Type_t * ___type, ClientIdentity_t544662673 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C"  void RemotingProxy__ctor_m2863168224 (RemotingProxy_t235542557 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern "C"  void RemotingProxy__cctor_m4243178796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern "C"  String_t* RemotingProxy_get_TypeName_m4078823342 (RemotingProxy_t235542557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern "C"  void RemotingProxy_Finalize_m1311356449 (RemotingProxy_t235542557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
