#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SetupCoroutine
struct SetupCoroutine_t944;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.SetupCoroutine::.ctor()
 void SetupCoroutine__ctor_m4863 (SetupCoroutine_t944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
 Object_t * SetupCoroutine_InvokeMember_m4864 (Object_t * __this/* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
 Object_t * SetupCoroutine_InvokeStatic_m4865 (Object_t * __this/* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, MethodInfo* method) IL2CPP_METHOD_ATTR;
