#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1943;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1942;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Exception
struct Exception_t71;
// System.Reflection.AssemblyName
struct AssemblyName_t1944;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
 String_t* AssemblyBuilder_get_Location_m9674 (AssemblyBuilder_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
 ModuleU5BU5D_t1942* AssemblyBuilder_GetModulesInternal_m9675 (AssemblyBuilder_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
 TypeU5BU5D_t146* AssemblyBuilder_GetTypes_m9676 (AssemblyBuilder_t1943 * __this, bool ___exportedOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
 bool AssemblyBuilder_get_IsCompilerContext_m9677 (AssemblyBuilder_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
 Exception_t71 * AssemblyBuilder_not_supported_m9678 (AssemblyBuilder_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
 AssemblyName_t1944 * AssemblyBuilder_UnprotectedGetName_m9679 (AssemblyBuilder_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
