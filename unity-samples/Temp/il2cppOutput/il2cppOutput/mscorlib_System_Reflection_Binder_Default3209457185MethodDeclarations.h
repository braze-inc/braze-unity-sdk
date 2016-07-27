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

// System.Reflection.Binder/Default
struct Default_t3209457185;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1767252801;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3379147067;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Reflection.Binder/Default::.ctor()
extern "C"  void Default__ctor_m564903218 (Default_t3209457185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern "C"  MethodBase_t3461000640 * Default_BindToMethod_m180789448 (Default_t3209457185 * __this, int32_t ___bindingAttr0, MethodBaseU5BU5D_t1767252801* ___match1, ObjectU5BU5D_t11523773** ___args2, ParameterModifierU5BU5D_t3379147067* ___modifiers3, CultureInfo_t3603717042 * ___culture4, StringU5BU5D_t2956870243* ___names5, Il2CppObject ** ___state6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern "C"  void Default_ReorderParameters_m4011929147 (Default_t3209457185 * __this, StringU5BU5D_t2956870243* ___names0, ObjectU5BU5D_t11523773** ___args1, MethodBase_t3461000640 * ___selected2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C"  bool Default_IsArrayAssignable_m3592878822 (Il2CppObject * __this /* static, unused */, Type_t * ___object_type0, Type_t * ___target_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern "C"  Il2CppObject * Default_ChangeType_m3134945120 (Default_t3209457185 * __this, Il2CppObject * ___value0, Type_t * ___type1, CultureInfo_t3603717042 * ___culture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern "C"  void Default_ReorderArgumentArray_m559904859 (Default_t3209457185 * __this, ObjectU5BU5D_t11523773** ___args0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C"  bool Default_check_type_m1665344327 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C"  bool Default_check_arguments_m2569422268 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t3431720054* ___types0, ParameterInfoU5BU5D_t1127461800* ___args1, bool ___allowByRefMatch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodBase_t3461000640 * Default_SelectMethod_m4061797263 (Default_t3209457185 * __this, int32_t ___bindingAttr0, MethodBaseU5BU5D_t1767252801* ___match1, TypeU5BU5D_t3431720054* ___types2, ParameterModifierU5BU5D_t3379147067* ___modifiers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C"  MethodBase_t3461000640 * Default_SelectMethod_m3301427214 (Default_t3209457185 * __this, int32_t ___bindingAttr0, MethodBaseU5BU5D_t1767252801* ___match1, TypeU5BU5D_t3431720054* ___types2, ParameterModifierU5BU5D_t3379147067* ___modifiers3, bool ___allowByRefMatch4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C"  MethodBase_t3461000640 * Default_GetBetterMethod_m4168201205 (Default_t3209457185 * __this, MethodBase_t3461000640 * ___m10, MethodBase_t3461000640 * ___m21, TypeU5BU5D_t3431720054* ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern "C"  int32_t Default_CompareCloserType_m806190335 (Default_t3209457185 * __this, Type_t * ___t10, Type_t * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Default_SelectProperty_m1979388078 (Default_t3209457185 * __this, int32_t ___bindingAttr0, PropertyInfoU5BU5D_t1348579340* ___match1, Type_t * ___returnType2, TypeU5BU5D_t3431720054* ___indexes3, ParameterModifierU5BU5D_t3379147067* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C"  int32_t Default_check_arguments_with_score_m2296414695 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t3431720054* ___types0, ParameterInfoU5BU5D_t1127461800* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C"  int32_t Default_check_type_with_score_m4064381425 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
