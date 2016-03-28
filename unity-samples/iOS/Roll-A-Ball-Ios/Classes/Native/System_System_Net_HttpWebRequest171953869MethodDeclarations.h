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

// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.Uri
struct Uri_t2776692961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Net.ServicePoint
struct ServicePoint_t28240741;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m3412251370 (HttpWebRequest_t171953869 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1235446968 (HttpWebRequest_t171953869 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m2196070038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m2246907828 (HttpWebRequest_t171953869 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t2776692961 * HttpWebRequest_get_Address_m3157794738 (HttpWebRequest_t171953869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t28240741 * HttpWebRequest_get_ServicePoint_m146133801 (HttpWebRequest_t171953869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t28240741 * HttpWebRequest_GetServicePoint_m2366596494 (HttpWebRequest_t171953869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m3873995797 (HttpWebRequest_t171953869 * __this, SerializationInfo_t2995724695 * ___serializationInfo, StreamingContext_t986364934  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
