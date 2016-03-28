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

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct CrossAppDomainSink_t645958682;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.ctor(System.Int32)
extern "C"  void CrossAppDomainSink__ctor_m2913778661 (CrossAppDomainSink_t645958682 * __this, int32_t ___domainID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern "C"  void CrossAppDomainSink__cctor_m315038105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Channels.CrossAppDomainSink System.Runtime.Remoting.Channels.CrossAppDomainSink::GetSink(System.Int32)
extern "C"  CrossAppDomainSink_t645958682 * CrossAppDomainSink_GetSink_m1469111295 (Il2CppObject * __this /* static, unused */, int32_t ___domainID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C"  int32_t CrossAppDomainSink_get_TargetDomainId_m1065872077 (CrossAppDomainSink_t645958682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
