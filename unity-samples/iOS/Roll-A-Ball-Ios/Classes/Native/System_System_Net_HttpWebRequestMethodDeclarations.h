#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1456;
// System.Uri
struct Uri_t61;
// System.Net.ServicePoint
struct ServicePoint_t1536;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
 void HttpWebRequest__ctor_m6764 (HttpWebRequest_t1456 * __this, Uri_t61 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest__ctor_m6765 (HttpWebRequest_t1456 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
 void HttpWebRequest__cctor_m6766 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m6767 (HttpWebRequest_t1456 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
 Uri_t61 * HttpWebRequest_get_Address_m6575 (HttpWebRequest_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
 ServicePoint_t1536 * HttpWebRequest_get_ServicePoint_m6579 (HttpWebRequest_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
 ServicePoint_t1536 * HttpWebRequest_GetServicePoint_m6768 (HttpWebRequest_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_GetObjectData_m6769 (HttpWebRequest_t1456 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
