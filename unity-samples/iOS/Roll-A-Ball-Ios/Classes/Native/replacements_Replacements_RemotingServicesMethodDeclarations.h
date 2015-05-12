#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Replacements.RemotingServices
struct RemotingServices_t1131;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1132;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t96;

// System.Runtime.Remoting.Messaging.IMessageSink Replacements.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
 Object_t * RemotingServices_GetClientChannelSinkChain_m5281 (Object_t * __this/* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Replacements.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
 Object_t * RemotingServices_CreateClientProxy_m5282 (Object_t * __this/* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t96* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
