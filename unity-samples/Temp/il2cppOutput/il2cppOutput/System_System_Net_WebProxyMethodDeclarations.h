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

// System.Net.WebProxy
struct WebProxy_t1066;
// System.Uri
struct Uri_t1043;
// System.String[]
struct StringU5BU5D_t63;
// System.Net.ICredentials
struct ICredentials_t1067;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m5419 (WebProxy_t1066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m5420 (WebProxy_t1066 * __this, Uri_t1043 * ___address, bool ___bypassOnLocal, StringU5BU5D_t63* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m5421 (WebProxy_t1066 * __this, SerializationInfo_t962 * ___serializationInfo, StreamingContext_t963  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m5422 (WebProxy_t1066 * __this, SerializationInfo_t962 * ___serializationInfo, StreamingContext_t963  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m5423 (WebProxy_t1066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t1043 * WebProxy_GetProxy_m5424 (WebProxy_t1066 * __this, Uri_t1043 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m5425 (WebProxy_t1066 * __this, Uri_t1043 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m5426 (WebProxy_t1066 * __this, SerializationInfo_t962 * ___serializationInfo, StreamingContext_t963  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m5427 (WebProxy_t1066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
