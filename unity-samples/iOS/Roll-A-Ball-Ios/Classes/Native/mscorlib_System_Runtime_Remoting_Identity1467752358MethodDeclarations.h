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

// System.Runtime.Remoting.Identity
struct Identity_t1467752358;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t656787472;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C"  void Identity__ctor_m4099304260 (Identity_t1467752358 * __this, String_t* ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C"  Il2CppObject * Identity_get_ChannelSink_m1983774607 (Identity_t1467752358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  void Identity_set_ChannelSink_m3130847940 (Identity_t1467752358 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C"  String_t* Identity_get_ObjectUri_m2443444253 (Identity_t1467752358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C"  bool Identity_get_Disposed_m1911726198 (Identity_t1467752358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C"  void Identity_set_Disposed_m1071218783 (Identity_t1467752358 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ClientDynamicProperties()
extern "C"  DynamicPropertyCollection_t656787472 * Identity_get_ClientDynamicProperties_m2301648525 (Identity_t1467752358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::get_ServerDynamicProperties()
extern "C"  DynamicPropertyCollection_t656787472 * Identity_get_ServerDynamicProperties_m841334805 (Identity_t1467752358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
