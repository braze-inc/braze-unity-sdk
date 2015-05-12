#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IntPtr
struct IntPtr_t120;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IntPtr::.ctor(System.Int32)
 void IntPtr__ctor_m5126 (IntPtr_t120* __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
 void IntPtr__ctor_m8310 (IntPtr_t120* __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
 void IntPtr__ctor_m8311 (IntPtr_t120* __this, void* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IntPtr__ctor_m8312 (IntPtr_t120* __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m8313 (IntPtr_t120* __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::get_Size()
 int32_t IntPtr_get_Size_m8314 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::Equals(System.Object)
 bool IntPtr_Equals_m8315 (IntPtr_t120* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
 int32_t IntPtr_GetHashCode_m8316 (IntPtr_t120* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
 int64_t IntPtr_ToInt64_m8317 (IntPtr_t120* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString()
 String_t* IntPtr_ToString_m8318 (IntPtr_t120* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString(System.String)
 String_t* IntPtr_ToString_m8319 (IntPtr_t120* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
 bool IntPtr_op_Equality_m5191 (Object_t * __this/* static, unused */, IntPtr_t120 ___value1, IntPtr_t120 ___value2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
 bool IntPtr_op_Inequality_m5127 (Object_t * __this/* static, unused */, IntPtr_t120 ___value1, IntPtr_t120 ___value2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
 IntPtr_t120 IntPtr_op_Explicit_m8320 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
 IntPtr_t120 IntPtr_op_Explicit_m8321 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
 IntPtr_t120 IntPtr_op_Explicit_m8322 (Object_t * __this/* static, unused */, void* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
 int32_t IntPtr_op_Explicit_m5190 (Object_t * __this/* static, unused */, IntPtr_t120 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
 void* IntPtr_op_Explicit_m8323 (Object_t * __this/* static, unused */, IntPtr_t120 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
