#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t1597;
// System.Uri
struct Uri_t61;
// System.String[]
struct StringU5BU5D_t3;
// System.Net.ICredentials
struct ICredentials_t1596;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
 void WebProxy__ctor_m6845 (WebProxy_t1597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
 void WebProxy__ctor_m6846 (WebProxy_t1597 * __this, Uri_t61 * ___address, bool ___bypassOnLocal, StringU5BU5D_t3* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy__ctor_m6847 (WebProxy_t1597 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m6848 (WebProxy_t1597 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
 bool WebProxy_get_UseDefaultCredentials_m6849 (WebProxy_t1597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
 Uri_t61 * WebProxy_GetProxy_m6850 (WebProxy_t1597 * __this, Uri_t61 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
 bool WebProxy_IsBypassed_m6851 (WebProxy_t1597 * __this, Uri_t61 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_GetObjectData_m6852 (WebProxy_t1597 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
 void WebProxy_CheckBypassList_m6853 (WebProxy_t1597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
