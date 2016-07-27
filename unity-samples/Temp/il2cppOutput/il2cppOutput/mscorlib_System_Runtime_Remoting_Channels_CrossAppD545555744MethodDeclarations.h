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

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct CrossAppDomainChannel_t545555744;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C"  void CrossAppDomainChannel__ctor_m751166236 (CrossAppDomainChannel_t545555744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern "C"  void CrossAppDomainChannel__cctor_m1329220625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern "C"  void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m537811701 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern "C"  String_t* CrossAppDomainChannel_get_ChannelName_m3020014076 (CrossAppDomainChannel_t545555744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C"  int32_t CrossAppDomainChannel_get_ChannelPriority_m1957352252 (CrossAppDomainChannel_t545555744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern "C"  Il2CppObject * CrossAppDomainChannel_get_ChannelData_m2816187657 (CrossAppDomainChannel_t545555744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C"  void CrossAppDomainChannel_StartListening_m4255931667 (CrossAppDomainChannel_t545555744 * __this, Il2CppObject * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.CrossAppDomainChannel::CreateMessageSink(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * CrossAppDomainChannel_CreateMessageSink_m2218895166 (CrossAppDomainChannel_t545555744 * __this, String_t* ___url0, Il2CppObject * ___data1, String_t** ___uri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
