#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebRequest
struct WebRequest_t1537;
// System.Net.IWebProxy
struct IWebProxy_t1580;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.String
struct String_t;
// System.Exception
struct Exception_t71;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
 void WebRequest__ctor_m6854 (WebRequest_t1537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest__ctor_m6855 (WebRequest_t1537 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
 void WebRequest__cctor_m6856 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m6857 (WebRequest_t1537 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
 void WebRequest_AddDynamicPrefix_m6858 (Object_t * __this/* static, unused */, String_t* ___protocol, String_t* ___implementor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
 Exception_t71 * WebRequest_GetMustImplement_m6859 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
 Object_t * WebRequest_get_DefaultWebProxy_m6860 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
 Object_t * WebRequest_GetDefaultWebProxy_m6861 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_GetObjectData_m6862 (WebRequest_t1537 * __this, SerializationInfo_t960 * ___serializationInfo, StreamingContext_t961  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
 void WebRequest_AddPrefix_m6863 (Object_t * __this/* static, unused */, String_t* ___prefix, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
