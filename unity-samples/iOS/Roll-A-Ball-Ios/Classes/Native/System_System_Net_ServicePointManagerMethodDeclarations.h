#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager
struct ServicePointManager_t1535;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1546;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1551;
// System.Net.ServicePoint
struct ServicePoint_t1547;
// System.Uri
struct Uri_t1553;
// System.Net.IWebProxy
struct IWebProxy_t1592;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
 void ServicePointManager__cctor_m6918 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
 Object_t * ServicePointManager_get_CertificatePolicy_m6672 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
 bool ServicePointManager_get_CheckCertificateRevocationList_m6615 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
 int32_t ServicePointManager_get_SecurityProtocol_m6671 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
 RemoteCertificateValidationCallback_t1551 * ServicePointManager_get_ServerCertificateValidationCallback_m6675 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
 ServicePoint_t1547 * ServicePointManager_FindServicePoint_m6919 (Object_t * __this/* static, unused */, Uri_t1553 * ___address, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
 void ServicePointManager_RecycleServicePoints_m6920 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
