#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.RuntimeServices
struct RuntimeServices_t441;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1132;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t146;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1133;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t1148;
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
 void RuntimeServices__cctor_m5218 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
 Dispatcher_t1132 * RuntimeServices_GetDispatcher_m5219 (Object_t * __this/* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t146* ___cacheKeyTypes, DispatcherFactory_t1133 * ___factory, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
 Object_t * RuntimeServices_Coerce_m1767 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
 Dispatcher_t1132 * RuntimeServices_CreateCoerceDispatcher_m5220 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
 Dispatcher_t1132 * RuntimeServices_EmitPromotionDispatcher_m5221 (Object_t * __this/* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
 bool RuntimeServices_IsPromotableNumeric_m5222 (Object_t * __this/* static, unused */, Type_t * ___fromType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
 Dispatcher_t1132 * RuntimeServices_EmitImplicitConversionDispatcher_m5223 (Object_t * __this/* static, unused */, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
 Object_t * RuntimeServices_CoercibleDispatcher_m5224 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
 Object_t * RuntimeServices_IdentityDispatcher_m5225 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
 bool RuntimeServices_IsNumeric_m5226 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
 String_t* RuntimeServices_op_Addition_m1864 (Object_t * __this/* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.Object)
 String_t* RuntimeServices_op_Addition_m1934 (Object_t * __this/* static, unused */, String_t* ___lhs, Object_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
 bool RuntimeServices_EqualityOperator_m1878 (Object_t * __this/* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
 bool RuntimeServices_ArrayEqualityImpl_m5227 (Object_t * __this/* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
 int32_t RuntimeServices_GetConvertTypeCode_m5228 (Object_t * __this/* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
 bool RuntimeServices_EqualityOperator_m5229 (Object_t * __this/* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
 bool RuntimeServices_IsPromotableNumeric_m5230 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
 MethodInfo_t198 * RuntimeServices_FindImplicitConversionOperator_m5231 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
 Object_t* RuntimeServices_GetExtensionMethods_m5232 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
 MethodInfo_t198 * RuntimeServices_FindImplicitConversionMethod_m5233 (Object_t * __this/* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
