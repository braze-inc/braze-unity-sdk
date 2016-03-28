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

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct ObjectReader_t4061492131;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t341659722;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3833532446;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct TypeMetadata_t780921001;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Array
struct Il2CppArray;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi341659722.h"
#include "mscorlib_System_IO_BinaryReader2158806251.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2264754748.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi780921001.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1738289281.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  void ObjectReader__ctor_m1992894345 (ObjectReader_t4061492131 * __this, BinaryFormatter_t341659722 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C"  void ObjectReader_ReadObjectGraph_m1835146551 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, bool ___readHeaders, Il2CppObject ** ___result, HeaderU5BU5D_t3833532446** ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C"  void ObjectReader_ReadObjectGraph_m2201506625 (ObjectReader_t4061492131 * __this, uint8_t ___elem, BinaryReader_t2158806251 * ___reader, bool ___readHeaders, Il2CppObject ** ___result, HeaderU5BU5D_t3833532446** ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
extern "C"  bool ObjectReader_ReadNextObject_m4049777926 (ObjectReader_t4061492131 * __this, uint8_t ___element, BinaryReader_t2158806251 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
extern "C"  bool ObjectReader_ReadNextObject_m3897181286 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
extern "C"  Il2CppObject * ObjectReader_get_CurrentObject_m4031544313 (ObjectReader_t4061492131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObject_m2173880932 (ObjectReader_t4061492131 * __this, uint8_t ___element, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___value, SerializationInfo_t2995724695 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
extern "C"  void ObjectReader_ReadAssembly_m464051452 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObjectInstance_m253133777 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Il2CppObject ** ___value, SerializationInfo_t2995724695 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadRefTypeObjectInstance_m4137899912 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___value, SerializationInfo_t2995724695 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C"  void ObjectReader_ReadObjectContent_m4032833558 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, TypeMetadata_t780921001 * ___metadata, int64_t ___objectId, Il2CppObject ** ___objectInstance, SerializationInfo_t2995724695 ** ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_RegisterObject_m190056615 (ObjectReader_t4061492131 * __this, int64_t ___objectId, Il2CppObject * ___objectInstance, SerializationInfo_t2995724695 * ___info, int64_t ___parentObjectId, MemberInfo_t * ___parentObjectMemeber, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadStringIntance_m210342955 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadGenericArray_m166573042 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
extern "C"  Il2CppObject * ObjectReader_ReadBoxedPrimitiveTypeValue_m2629547009 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfPrimitiveType_m2810313603 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
extern "C"  void ObjectReader_BlockRead_m3199952246 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, Il2CppArray * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfObject_m3481608297 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadArrayOfString_m2679882455 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, int64_t* ___objectId, Il2CppObject ** ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
extern "C"  void ObjectReader_ReadSimpleArray_m1445274814 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Il2CppObject ** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
extern "C"  TypeMetadata_t780921001 * ObjectReader_ReadTypeMetadata_m2931187119 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_ReadValue_m122066046 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, Il2CppObject * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t2995724695 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
extern "C"  void ObjectReader_SetObjectValue_m1699342176 (ObjectReader_t4061492131 * __this, Il2CppObject * ___parentObject, String_t* ___fieldName, MemberInfo_t * ___memberInfo, SerializationInfo_t2995724695 * ___info, Il2CppObject * ___value, Type_t * ___valueType, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectReader_RecordFixup_m1141700914 (ObjectReader_t4061492131 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Il2CppObject * ___parentObject, SerializationInfo_t2995724695 * ___info, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
extern "C"  Type_t * ObjectReader_GetDeserializationType_m932539476 (ObjectReader_t4061492131 * __this, int64_t ___assemblyId, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
extern "C"  Type_t * ObjectReader_ReadType_m524105739 (ObjectReader_t4061492131 * __this, BinaryReader_t2158806251 * ___reader, uint8_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
extern "C"  Il2CppObject * ObjectReader_ReadPrimitiveTypeValue_m3787758564 (Il2CppObject * __this /* static, unused */, BinaryReader_t2158806251 * ___reader, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
