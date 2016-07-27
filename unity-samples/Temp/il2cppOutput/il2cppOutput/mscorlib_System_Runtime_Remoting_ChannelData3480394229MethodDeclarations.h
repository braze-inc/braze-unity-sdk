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
struct ChannelData_t3480394229;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_ChannelData3480394229.h"

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C"  void ChannelData__ctor_m2645775933 (ChannelData_t3480394229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C"  ArrayList_t2121638921 * ChannelData_get_ServerProviders_m3282694237 (ChannelData_t3480394229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C"  ArrayList_t2121638921 * ChannelData_get_ClientProviders_m764839637 (ChannelData_t3480394229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C"  Hashtable_t3875263730 * ChannelData_get_CustomProperties_m3728962065 (ChannelData_t3480394229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C"  void ChannelData_CopyFrom_m3797019541 (ChannelData_t3480394229 * __this, ChannelData_t3480394229 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
