#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t263;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.GameObject
struct GameObject_t140;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t663;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
 void Component__ctor_m4549 (Component_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
 Transform_t179 * Component_get_transform_m1320 (Component_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
 GameObject_t140 * Component_get_gameObject_m1072 (Component_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
 Component_t263 * Component_GetComponent_m1435 (Component_t263 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
 void Component_GetComponentFastPath_m4550 (Component_t263 * __this, Type_t * ___type, IntPtr_t107 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
 Component_t263 * Component_GetComponentInChildren_m4551 (Component_t263 * __this, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
 void Component_GetComponentsForListInternal_m4552 (Component_t263 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
 void Component_GetComponents_m3419 (Component_t263 * __this, Type_t * ___type, List_1_t663 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
 String_t* Component_get_tag_m1814 (Component_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
