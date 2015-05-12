#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.StringBuilder
struct StringBuilder_t89;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t289;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.IFormatProvider
struct IFormatProvider_t1173;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m11165 (StringBuilder_t89 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void StringBuilder__ctor_m11166 (StringBuilder_t89 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
 void StringBuilder__ctor_m501 (StringBuilder_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
 void StringBuilder__ctor_m5174 (StringBuilder_t89 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
 void StringBuilder__ctor_m3415 (StringBuilder_t89 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
 void StringBuilder__ctor_m7655 (StringBuilder_t89 * __this, String_t* ___value, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder__ctor_m11167 (StringBuilder_t89 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m11168 (StringBuilder_t89 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
 int32_t StringBuilder_get_Capacity_m11169 (StringBuilder_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
 void StringBuilder_set_Capacity_m11170 (StringBuilder_t89 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
 int32_t StringBuilder_get_Length_m509 (StringBuilder_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
 void StringBuilder_set_Length_m510 (StringBuilder_t89 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
 uint16_t StringBuilder_get_Chars_m11171 (StringBuilder_t89 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
 void StringBuilder_set_Chars_m11172 (StringBuilder_t89 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
 String_t* StringBuilder_ToString_m511 (StringBuilder_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
 String_t* StringBuilder_ToString_m11173 (StringBuilder_t89 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
 StringBuilder_t89 * StringBuilder_Remove_m11174 (StringBuilder_t89 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
 StringBuilder_t89 * StringBuilder_Replace_m11175 (StringBuilder_t89 * __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
 StringBuilder_t89 * StringBuilder_Replace_m11176 (StringBuilder_t89 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
 StringBuilder_t89 * StringBuilder_Append_m502 (StringBuilder_t89 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
 StringBuilder_t89 * StringBuilder_Append_m7690 (StringBuilder_t89 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
 StringBuilder_t89 * StringBuilder_Append_m7665 (StringBuilder_t89 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
 StringBuilder_t89 * StringBuilder_Append_m5333 (StringBuilder_t89 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
 StringBuilder_t89 * StringBuilder_Append_m3697 (StringBuilder_t89 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
 StringBuilder_t89 * StringBuilder_Append_m11177 (StringBuilder_t89 * __this, uint16_t ___value, int32_t ___repeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
 StringBuilder_t89 * StringBuilder_Append_m11178 (StringBuilder_t89 * __this, CharU5BU5D_t289* ___value, int32_t ___startIndex, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
 StringBuilder_t89 * StringBuilder_Append_m11179 (StringBuilder_t89 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
 StringBuilder_t89 * StringBuilder_AppendLine_m3321 (StringBuilder_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
 StringBuilder_t89 * StringBuilder_AppendLine_m3320 (StringBuilder_t89 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
 StringBuilder_t89 * StringBuilder_AppendFormat_m6494 (StringBuilder_t89 * __this, String_t* ___format, ObjectU5BU5D_t96* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t89 * StringBuilder_AppendFormat_m11180 (StringBuilder_t89 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t96* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
 StringBuilder_t89 * StringBuilder_AppendFormat_m6493 (StringBuilder_t89 * __this, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
 StringBuilder_t89 * StringBuilder_AppendFormat_m6492 (StringBuilder_t89 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
 StringBuilder_t89 * StringBuilder_AppendFormat_m7699 (StringBuilder_t89 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
 StringBuilder_t89 * StringBuilder_Insert_m11181 (StringBuilder_t89 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
 StringBuilder_t89 * StringBuilder_Insert_m11182 (StringBuilder_t89 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
 StringBuilder_t89 * StringBuilder_Insert_m11183 (StringBuilder_t89 * __this, int32_t ___index, String_t* ___value, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
 void StringBuilder_InternalEnsureCapacity_m11184 (StringBuilder_t89 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
