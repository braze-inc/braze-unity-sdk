#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly
struct Assembly_t239;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.Module
struct Module_t1752;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Reflection.AssemblyName
struct AssemblyName_t1944;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1942;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
 void Assembly__ctor_m9875 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
 String_t* Assembly_get_fullname_m9876 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
 String_t* Assembly_get_location_m9877 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
 String_t* Assembly_get_FullName_m9878 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
 String_t* Assembly_get_Location_m9879 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
 bool Assembly_IsDefined_m9880 (Assembly_t239 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* Assembly_GetCustomAttributes_m9881 (Assembly_t239 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
 IntPtr_t107 Assembly_GetManifestResourceInternal_m9882 (Assembly_t239 * __this, String_t* ___name, int32_t* ___size, Module_t1752 ** ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
 TypeU5BU5D_t146* Assembly_GetTypes_m9883 (Assembly_t239 * __this, bool ___exportedOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
 TypeU5BU5D_t146* Assembly_GetTypes_m1414 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
 Type_t * Assembly_GetType_m9884 (Assembly_t239 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
 Type_t * Assembly_GetType_m7586 (Assembly_t239 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_InternalGetType_m9885 (Assembly_t239 * __this, Module_t1752 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_GetType_m9886 (Assembly_t239 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
 void Assembly_FillName_m9887 (Object_t * __this/* static, unused */, Assembly_t239 * ___ass, AssemblyName_t1944 * ___aname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
 AssemblyName_t1944 * Assembly_UnprotectedGetName_m9888 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
 String_t* Assembly_ToString_m9889 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
 Assembly_t239 * Assembly_Load_m9890 (Object_t * __this/* static, unused */, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
 Module_t1752 * Assembly_GetModule_m9891 (Assembly_t239 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
 ModuleU5BU5D_t1942* Assembly_GetModulesInternal_m9892 (Assembly_t239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
 ModuleU5BU5D_t1942* Assembly_GetModules_m9893 (Assembly_t239 * __this, bool ___getResourceModules, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
 Assembly_t239 * Assembly_GetExecutingAssembly_m9894 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
