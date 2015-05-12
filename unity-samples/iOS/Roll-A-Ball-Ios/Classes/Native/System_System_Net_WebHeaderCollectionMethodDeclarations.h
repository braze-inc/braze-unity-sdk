#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1591;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1581;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
 void WebHeaderCollection__ctor_m6921 (WebHeaderCollection_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection__ctor_m6922 (WebHeaderCollection_t1591 * __this, SerializationInfo_t971 * ___serializationInfo, StreamingContext_t972  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
 void WebHeaderCollection__ctor_m6923 (WebHeaderCollection_t1591 * __this, bool ___internallyCreated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
 void WebHeaderCollection__cctor_m6924 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m6925 (WebHeaderCollection_t1591 * __this, SerializationInfo_t971 * ___serializationInfo, StreamingContext_t972  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
 void WebHeaderCollection_Add_m6926 (WebHeaderCollection_t1591 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
 void WebHeaderCollection_AddWithoutValidate_m6927 (WebHeaderCollection_t1591 * __this, String_t* ___headerName, String_t* ___headerValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
 bool WebHeaderCollection_IsRestricted_m6928 (Object_t * __this/* static, unused */, String_t* ___headerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
 void WebHeaderCollection_OnDeserialization_m6929 (WebHeaderCollection_t1591 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
 String_t* WebHeaderCollection_ToString_m6930 (WebHeaderCollection_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_GetObjectData_m6931 (WebHeaderCollection_t1591 * __this, SerializationInfo_t971 * ___serializationInfo, StreamingContext_t972  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
 int32_t WebHeaderCollection_get_Count_m6932 (WebHeaderCollection_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
 KeysCollection_t1581 * WebHeaderCollection_get_Keys_m6933 (WebHeaderCollection_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
 String_t* WebHeaderCollection_Get_m6934 (WebHeaderCollection_t1591 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
 String_t* WebHeaderCollection_GetKey_m6935 (WebHeaderCollection_t1591 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
 Object_t * WebHeaderCollection_GetEnumerator_m6936 (WebHeaderCollection_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
 bool WebHeaderCollection_IsHeaderValue_m6937 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
 bool WebHeaderCollection_IsHeaderName_m6938 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
