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

// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern "C"  void AttributeHelperEngine__cctor_m2686080064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern "C"  Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m799857845 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern "C"  TypeU5BU5D_t3431720054* AttributeHelperEngine_GetRequiredComponents_m2666115467 (Il2CppObject * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern "C"  bool AttributeHelperEngine_CheckIsEditorScript_m2105533310 (Il2CppObject * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
