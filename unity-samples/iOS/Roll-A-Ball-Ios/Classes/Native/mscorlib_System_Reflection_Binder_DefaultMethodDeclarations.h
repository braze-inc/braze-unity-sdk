#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder/Default
struct Default_t1967;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1968;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1063;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.String[]
struct StringU5BU5D_t3;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1067;
// System.Reflection.PropertyInfo
struct PropertyInfo_t197;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1969;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder/Default::.ctor()
 void Default__ctor_m9910 (Default_t1967 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
 MethodBase_t307 * Default_BindToMethod_m9911 (Default_t1967 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1968* ___match, ObjectU5BU5D_t112** ___args, ParameterModifierU5BU5D_t1063* ___modifiers, CultureInfo_t1065 * ___culture, StringU5BU5D_t3* ___names, Object_t ** ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
 void Default_ReorderParameters_m9912 (Default_t1967 * __this, StringU5BU5D_t3* ___names, ObjectU5BU5D_t112** ___args, MethodBase_t307 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
 bool Default_IsArrayAssignable_m9913 (Object_t * __this/* static, unused */, Type_t * ___object_type, Type_t * ___target_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
 Object_t * Default_ChangeType_m9914 (Default_t1967 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
 void Default_ReorderArgumentArray_m9915 (Default_t1967 * __this, ObjectU5BU5D_t112** ___args, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
 bool Default_check_type_m9916 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
 bool Default_check_arguments_m9917 (Object_t * __this/* static, unused */, TypeU5BU5D_t146* ___types, ParameterInfoU5BU5D_t1067* ___args, bool ___allowByRefMatch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
 MethodBase_t307 * Default_SelectMethod_m9918 (Default_t1967 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1968* ___match, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
 MethodBase_t307 * Default_SelectMethod_m9919 (Default_t1967 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1968* ___match, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, bool ___allowByRefMatch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
 MethodBase_t307 * Default_GetBetterMethod_m9920 (Default_t1967 * __this, MethodBase_t307 * ___m1, MethodBase_t307 * ___m2, TypeU5BU5D_t146* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
 int32_t Default_CompareCloserType_m9921 (Default_t1967 * __this, Type_t * ___t1, Type_t * ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t197 * Default_SelectProperty_m9922 (Default_t1967 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t1969* ___match, Type_t * ___returnType, TypeU5BU5D_t146* ___indexes, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
 int32_t Default_check_arguments_with_score_m9923 (Object_t * __this/* static, unused */, TypeU5BU5D_t146* ___types, ParameterInfoU5BU5D_t1067* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
 int32_t Default_check_type_with_score_m9924 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
