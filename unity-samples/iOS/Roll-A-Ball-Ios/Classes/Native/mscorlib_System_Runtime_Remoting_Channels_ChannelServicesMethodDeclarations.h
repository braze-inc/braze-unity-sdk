#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Channels.ChannelServices
struct ChannelServices_t2040;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t2041;
// System.Object[]
struct ObjectU5BU5D_t112;

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
 void ChannelServices__cctor_m10193 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
 void ChannelServices_RegisterChannel_m10194 (Object_t * __this/* static, unused */, Object_t * ___chnl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
 void ChannelServices_RegisterChannel_m10195 (Object_t * __this/* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
 ObjectU5BU5D_t112* ChannelServices_GetCurrentChannelInfo_m10196 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
