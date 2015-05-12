#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Activator
struct Activator_t2225;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.Binder
struct Binder_t1062;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Object System.Activator::CreateInstance(System.Type)
 Object_t * Activator_CreateInstance_m5003 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
 Object_t * Activator_CreateInstance_m11241 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
 Object_t * Activator_CreateInstance_m11242 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t112* ___args, ObjectU5BU5D_t112* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
 Object_t * Activator_CreateInstance_m11243 (Object_t * __this/* static, unused */, Type_t * ___type, int32_t ___bindingAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___args, CultureInfo_t1065 * ___culture, ObjectU5BU5D_t112* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
 Object_t * Activator_CreateInstance_m7587 (Object_t * __this/* static, unused */, Type_t * ___type, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
 void Activator_CheckType_m11244 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
 void Activator_CheckAbstractType_m11245 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
 Object_t * Activator_CreateInstanceInternal_m11246 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
