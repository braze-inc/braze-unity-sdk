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
struct WebProxy_t3145103108;
// System.Uri
struct Uri_t2776692961;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Net.ICredentials
struct ICredentials_t2307785309;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C"  void WebProxy__ctor_m2333292256 (WebProxy_t3145103108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C"  void WebProxy__ctor_m1295075053 (WebProxy_t3145103108 * __this, Uri_t2776692961 * ___address0, bool ___bypassOnLocal1, StringU5BU5D_t2956870243* ___bypassList2, Il2CppObject * ___credentials3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy__ctor_m3926845473 (WebProxy_t3145103108 * __this, SerializationInfo_t2995724695 * ___serializationInfo0, StreamingContext_t986364934  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m1269108139 (WebProxy_t3145103108 * __this, SerializationInfo_t2995724695 * ___serializationInfo0, StreamingContext_t986364934  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C"  bool WebProxy_get_UseDefaultCredentials_m2666418573 (WebProxy_t3145103108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C"  Uri_t2776692961 * WebProxy_GetProxy_m1799832125 (WebProxy_t3145103108 * __this, Uri_t2776692961 * ___destination0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C"  bool WebProxy_IsBypassed_m2441560530 (WebProxy_t3145103108 * __this, Uri_t2776692961 * ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_GetObjectData_m2646244990 (WebProxy_t3145103108 * __this, SerializationInfo_t2995724695 * ___serializationInfo0, StreamingContext_t986364934  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C"  void WebProxy_CheckBypassList_m2380971276 (WebProxy_t3145103108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
