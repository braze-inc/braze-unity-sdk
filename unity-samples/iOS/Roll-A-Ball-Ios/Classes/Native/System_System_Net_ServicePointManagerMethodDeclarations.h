#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager
struct ServicePointManager_t1524;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1535;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1540;
// System.Net.ServicePoint
struct ServicePoint_t1536;
// System.Uri
struct Uri_t61;
// System.Net.IWebProxy
struct IWebProxy_t1580;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
 void ServicePointManager__cctor_m6824 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
 Object_t * ServicePointManager_get_CertificatePolicy_m6578 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
 bool ServicePointManager_get_CheckCertificateRevocationList_m6521 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
 int32_t ServicePointManager_get_SecurityProtocol_m6577 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
 RemoteCertificateValidationCallback_t1540 * ServicePointManager_get_ServerCertificateValidationCallback_m6581 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
 ServicePoint_t1536 * ServicePointManager_FindServicePoint_m6825 (Object_t * __this/* static, unused */, Uri_t61 * ___address, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
 void ServicePointManager_RecycleServicePoints_m6826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
