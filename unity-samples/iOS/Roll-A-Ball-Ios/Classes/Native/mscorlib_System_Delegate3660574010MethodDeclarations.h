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

// System.Delegate
struct Delegate_t3660574010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Delegate[]
struct DelegateU5BU5D_t4257391775;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Delegate3660574010.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C"  MethodInfo_t * Delegate_get_Method_m669548326 (Delegate_t3660574010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C"  Il2CppObject * Delegate_get_Target_m2860483769 (Delegate_t3660574010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_internal_m498460281 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C"  void Delegate_SetMulticastInvoke_m4051533378 (Delegate_t3660574010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C"  bool Delegate_arg_type_match_m1575175281 (Il2CppObject * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C"  bool Delegate_return_type_match_m2221559117 (Il2CppObject * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m1630815211 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m3460497746 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___firstArgument, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m2273250141 (Il2CppObject * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m2816771104 (Il2CppObject * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m1085193661 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Delegate_GetCandidateMethod_m1148532482 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m812395778 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m715202082 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m789236573 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C"  Delegate_t3660574010 * Delegate_CreateDelegate_m3528508448 (Il2CppObject * __this /* static, unused */, Type_t * ___type, Il2CppObject * ___target, String_t* ___method, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C"  Il2CppObject * Delegate_Clone_m3463780544 (Delegate_t3660574010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C"  bool Delegate_Equals_m2291127683 (Delegate_t3660574010 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C"  int32_t Delegate_GetHashCode_m2407269851 (Delegate_t3660574010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Delegate_GetObjectData_m3060947374 (Delegate_t3660574010 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t4257391775* Delegate_GetInvocationList_m1958947583 (Delegate_t3660574010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t3660574010 * Delegate_Combine_m1842362874 (Il2CppObject * __this /* static, unused */, Delegate_t3660574010 * ___a, Delegate_t3660574010 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C"  Delegate_t3660574010 * Delegate_Combine_m2723747920 (Il2CppObject * __this /* static, unused */, DelegateU5BU5D_t4257391775* ___delegates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t3660574010 * Delegate_CombineImpl_m3377741042 (Delegate_t3660574010 * __this, Delegate_t3660574010 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t3660574010 * Delegate_Remove_m3898886541 (Il2CppObject * __this /* static, unused */, Delegate_t3660574010 * ___source, Delegate_t3660574010 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t3660574010 * Delegate_RemoveImpl_m3027030277 (Delegate_t3660574010 * __this, Delegate_t3660574010 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
