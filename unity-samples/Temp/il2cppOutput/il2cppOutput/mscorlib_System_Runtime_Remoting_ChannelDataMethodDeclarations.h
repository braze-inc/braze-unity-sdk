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

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1799;
// System.Collections.ArrayList
struct ArrayList_t1029;
// System.Collections.Hashtable
struct Hashtable_t382;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m10548 (ChannelData_t1799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t1029 * ChannelData_get_ServerProviders_m10549 (ChannelData_t1799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t1029 * ChannelData_get_ClientProviders_m10550 (ChannelData_t1799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t382 * ChannelData_get_CustomProperties_m10551 (ChannelData_t1799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m10552 (ChannelData_t1799 * __this, ChannelData_t1799 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
