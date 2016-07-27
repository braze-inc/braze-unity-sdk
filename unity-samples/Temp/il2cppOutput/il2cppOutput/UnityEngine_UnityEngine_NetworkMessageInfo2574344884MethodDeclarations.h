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

// UnityEngine.NetworkView
struct NetworkView_t1250184736;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo2574344884.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1281137372.h"

// System.Double UnityEngine.NetworkMessageInfo::get_timestamp()
extern "C"  double NetworkMessageInfo_get_timestamp_m3597535726 (NetworkMessageInfo_t2574344884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::get_sender()
extern "C"  NetworkPlayer_t1281137372  NetworkMessageInfo_get_sender_m2720861079 (NetworkMessageInfo_t2574344884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::get_networkView()
extern "C"  NetworkView_t1250184736 * NetworkMessageInfo_get_networkView_m221874487 (NetworkMessageInfo_t2574344884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::NullNetworkView()
extern "C"  NetworkView_t1250184736 * NetworkMessageInfo_NullNetworkView_m516412409 (NetworkMessageInfo_t2574344884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkMessageInfo_t2574344884;
struct NetworkMessageInfo_t2574344884_marshaled_pinvoke;

extern "C" void NetworkMessageInfo_t2574344884_marshal_pinvoke(const NetworkMessageInfo_t2574344884& unmarshaled, NetworkMessageInfo_t2574344884_marshaled_pinvoke& marshaled);
extern "C" void NetworkMessageInfo_t2574344884_marshal_pinvoke_back(const NetworkMessageInfo_t2574344884_marshaled_pinvoke& marshaled, NetworkMessageInfo_t2574344884& unmarshaled);
extern "C" void NetworkMessageInfo_t2574344884_marshal_pinvoke_cleanup(NetworkMessageInfo_t2574344884_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkMessageInfo_t2574344884;
struct NetworkMessageInfo_t2574344884_marshaled_com;

extern "C" void NetworkMessageInfo_t2574344884_marshal_com(const NetworkMessageInfo_t2574344884& unmarshaled, NetworkMessageInfo_t2574344884_marshaled_com& marshaled);
extern "C" void NetworkMessageInfo_t2574344884_marshal_com_back(const NetworkMessageInfo_t2574344884_marshaled_com& marshaled, NetworkMessageInfo_t2574344884& unmarshaled);
extern "C" void NetworkMessageInfo_t2574344884_marshal_com_cleanup(NetworkMessageInfo_t2574344884_marshaled_com& marshaled);
