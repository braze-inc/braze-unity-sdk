#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t730;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Delegate[]
struct DelegateU5BU5D_t1741;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
 MethodInfo_t198 * Delegate_get_Method_m5098 (Delegate_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
 Object_t * Delegate_get_Target_m5100 (Delegate_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t730 * Delegate_CreateDelegate_internal_m8251 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t198 * ___info, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
 void Delegate_SetMulticastInvoke_m8252 (Delegate_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
 bool Delegate_arg_type_match_m8253 (Object_t * __this/* static, unused */, Type_t * ___delArgType, Type_t * ___argType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
 bool Delegate_return_type_match_m8254 (Object_t * __this/* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t730 * Delegate_CreateDelegate_m8255 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t198 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
 Delegate_t730 * Delegate_CreateDelegate_m5104 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
 Delegate_t730 * Delegate_CreateDelegate_m8256 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo_t198 * ___method, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
 Delegate_t730 * Delegate_CreateDelegate_m5315 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
 Delegate_t730 * Delegate_CreateDelegate_m8257 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
 MethodInfo_t198 * Delegate_GetCandidateMethod_m8258 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
 Delegate_t730 * Delegate_CreateDelegate_m8259 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
 Delegate_t730 * Delegate_CreateDelegate_m8260 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
 Delegate_t730 * Delegate_CreateDelegate_m8261 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
 Delegate_t730 * Delegate_CreateDelegate_m8262 (Object_t * __this/* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
 Object_t * Delegate_Clone_m3544 (Delegate_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
 bool Delegate_Equals_m8263 (Delegate_t730 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
 int32_t Delegate_GetHashCode_m8264 (Delegate_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Delegate_GetObjectData_m8265 (Delegate_t730 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
 DelegateU5BU5D_t1741* Delegate_GetInvocationList_m8266 (Delegate_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
 Delegate_t730 * Delegate_Combine_m3456 (Object_t * __this/* static, unused */, Delegate_t730 * ___a, Delegate_t730 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
 Delegate_t730 * Delegate_Combine_m8267 (Object_t * __this/* static, unused */, DelegateU5BU5D_t1741* ___delegates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
 Delegate_t730 * Delegate_CombineImpl_m8268 (Delegate_t730 * __this, Delegate_t730 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
 Delegate_t730 * Delegate_Remove_m3457 (Object_t * __this/* static, unused */, Delegate_t730 * ___source, Delegate_t730 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
 Delegate_t730 * Delegate_RemoveImpl_m8269 (Delegate_t730 * __this, Delegate_t730 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
