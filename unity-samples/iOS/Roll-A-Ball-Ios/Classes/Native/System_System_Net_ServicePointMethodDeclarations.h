#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t1536;
// System.Uri
struct Uri_t61;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
 void ServicePoint__ctor_m6810 (ServicePoint_t1536 * __this, Uri_t61 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
 Uri_t61 * ServicePoint_get_Address_m6811 (ServicePoint_t1536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
 int32_t ServicePoint_get_CurrentConnections_m6812 (ServicePoint_t1536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
 DateTime_t837  ServicePoint_get_IdleSince_m6813 (ServicePoint_t1536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
 void ServicePoint_set_IdleSince_m6814 (ServicePoint_t1536 * __this, DateTime_t837  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
 void ServicePoint_set_Expect100Continue_m6815 (ServicePoint_t1536 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
 void ServicePoint_set_UseNagleAlgorithm_m6816 (ServicePoint_t1536 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
 void ServicePoint_set_SendContinue_m6817 (ServicePoint_t1536 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
 void ServicePoint_set_UsesProxy_m6818 (ServicePoint_t1536 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
 void ServicePoint_set_UseConnect_m6819 (ServicePoint_t1536 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
 bool ServicePoint_get_AvailableForRecycling_m6820 (ServicePoint_t1536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
