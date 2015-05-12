#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AttributeHelperEngine
struct AttributeHelperEngine_t931;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t146;

// System.Void UnityEngine.AttributeHelperEngine::.cctor()
 void AttributeHelperEngine__cctor_m4764 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
 Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m4765 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
 TypeU5BU5D_t146* AttributeHelperEngine_GetRequiredComponents_m4766 (Object_t * __this/* static, unused */, Type_t * ___klass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
 bool AttributeHelperEngine_CheckIsEditorScript_m4767 (Object_t * __this/* static, unused */, Type_t * ___klass, MethodInfo* method) IL2CPP_METHOD_ATTR;
