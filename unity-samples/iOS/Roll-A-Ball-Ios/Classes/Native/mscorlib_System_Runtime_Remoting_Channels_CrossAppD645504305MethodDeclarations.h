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

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct CrossAppDomainData_t645504305;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern "C"  void CrossAppDomainData__ctor_m2327580462 (CrossAppDomainData_t645504305 * __this, int32_t ___domainId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::get_DomainID()
extern "C"  int32_t CrossAppDomainData_get_DomainID_m3794955859 (CrossAppDomainData_t645504305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::get_ProcessID()
extern "C"  String_t* CrossAppDomainData_get_ProcessID_m3945565375 (CrossAppDomainData_t645504305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
