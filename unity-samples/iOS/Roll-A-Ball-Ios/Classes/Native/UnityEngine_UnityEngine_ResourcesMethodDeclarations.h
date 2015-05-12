#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t870;
// UnityEngine.Object[]
struct ObjectU5BU5D_t282;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t70;
struct Object_t70_marshaled;
// System.String
struct String_t;

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
 ObjectU5BU5D_t282* Resources_FindObjectsOfTypeAll_m1088 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
 Object_t70 * Resources_Load_m1556 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
 Object_t70 * Resources_Load_m4426 (Object_t * __this/* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
