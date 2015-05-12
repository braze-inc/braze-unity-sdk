#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t145;
struct ScriptableObject_t145_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m1133 (ScriptableObject_t145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m3875 (Object_t * __this/* static, unused */, ScriptableObject_t145 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t145 * ScriptableObject_CreateInstance_m3876 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t145 * ScriptableObject_CreateInstance_m1144 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t145 * ScriptableObject_CreateInstanceFromType_m3877 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t145_marshal(const ScriptableObject_t145& unmarshaled, ScriptableObject_t145_marshaled& marshaled);
void ScriptableObject_t145_marshal_back(const ScriptableObject_t145_marshaled& marshaled, ScriptableObject_t145& unmarshaled);
void ScriptableObject_t145_marshal_cleanup(ScriptableObject_t145_marshaled& marshaled);
