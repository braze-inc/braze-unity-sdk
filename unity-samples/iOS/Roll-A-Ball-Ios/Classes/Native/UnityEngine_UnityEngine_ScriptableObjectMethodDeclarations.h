#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t159;
struct ScriptableObject_t159_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m1240 (ScriptableObject_t159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m3980 (Object_t * __this/* static, unused */, ScriptableObject_t159 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t159 * ScriptableObject_CreateInstance_m3981 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t159 * ScriptableObject_CreateInstance_m1251 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t159 * ScriptableObject_CreateInstanceFromType_m3982 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t159_marshal(const ScriptableObject_t159& unmarshaled, ScriptableObject_t159_marshaled& marshaled);
void ScriptableObject_t159_marshal_back(const ScriptableObject_t159_marshaled& marshaled, ScriptableObject_t159& unmarshaled);
void ScriptableObject_t159_marshal_cleanup(ScriptableObject_t159_marshaled& marshaled);
