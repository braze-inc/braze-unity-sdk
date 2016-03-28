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

// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.Module
struct Module_t206139610;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.AssemblyName
struct AssemblyName_t3481926655;
// System.Reflection.Module[]
struct ModuleU5BU5D_t153190015;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_Module206139610.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Reflection_AssemblyName3481926655.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C"  void Assembly__ctor_m3527373192 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C"  String_t* Assembly_get_code_base_m1814794868 (Assembly_t1882292308 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C"  String_t* Assembly_get_fullname_m3799996258 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C"  String_t* Assembly_get_location_m1081941693 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C"  String_t* Assembly_GetCodeBase_m526881390 (Assembly_t1882292308 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C"  String_t* Assembly_get_FullName_m582360994 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C"  String_t* Assembly_get_Location_m3075406557 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C"  bool Assembly_IsDefined_m3899547079 (Assembly_t1882292308 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* Assembly_GetCustomAttributes_m4037441461 (Assembly_t1882292308 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C"  IntPtr_t Assembly_GetManifestResourceInternal_m3306015724 (Assembly_t1882292308 * __this, String_t* ___name, int32_t* ___size, Module_t206139610 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t3431720054* Assembly_GetTypes_m2225080238 (Assembly_t1882292308 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C"  TypeU5BU5D_t3431720054* Assembly_GetTypes_m1658023543 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m910605431 (Assembly_t1882292308 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C"  Type_t * Assembly_GetType_m60293702 (Assembly_t1882292308 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_InternalGetType_m2843289707 (Assembly_t1882292308 * __this, Module_t206139610 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m3120052774 (Assembly_t1882292308 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C"  void Assembly_FillName_m3921630801 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___ass, AssemblyName_t3481926655 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C"  AssemblyName_t3481926655 * Assembly_GetName_m186567048 (Assembly_t1882292308 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C"  AssemblyName_t3481926655 * Assembly_GetName_m253695441 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C"  AssemblyName_t3481926655 * Assembly_UnprotectedGetName_m1786225822 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C"  String_t* Assembly_ToString_m395441739 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t1882292308 * Assembly_Load_m4081902495 (Il2CppObject * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t206139610 * Assembly_GetModule_m2523306005 (Assembly_t1882292308 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C"  ModuleU5BU5D_t153190015* Assembly_GetModulesInternal_m1897302435 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C"  ModuleU5BU5D_t153190015* Assembly_GetModules_m3104205309 (Assembly_t1882292308 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C"  Assembly_t1882292308 * Assembly_GetExecutingAssembly_m1876278943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
