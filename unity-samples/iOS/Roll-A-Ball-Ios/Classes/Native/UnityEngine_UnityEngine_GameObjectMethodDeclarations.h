#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.Transform
struct Transform_t179;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t263;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t353;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
 void GameObject__ctor_m1443 (GameObject_t140 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
 Component_t263 * GameObject_GetComponent_m1427 (GameObject_t140 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
 void GameObject_GetComponentFastPath_m4553 (GameObject_t140 * __this, Type_t * ___type, IntPtr_t107 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
 Component_t263 * GameObject_GetComponentByName_m4554 (GameObject_t140 * __this, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
 Component_t263 * GameObject_GetComponent_m1285 (GameObject_t140 * __this, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
 Component_t263 * GameObject_GetComponentInChildren_m4555 (GameObject_t140 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
 ComponentU5BU5D_t353* GameObject_GetComponentsInChildren_m1525 (GameObject_t140 * __this, Type_t * ___type, bool ___includeInactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
 Array_t * GameObject_GetComponentsInternal_m4556 (GameObject_t140 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
 Transform_t179 * GameObject_get_transform_m1369 (GameObject_t140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
 int32_t GameObject_get_layer_m1316 (GameObject_t140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
 void GameObject_set_layer_m3608 (GameObject_t140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
 void GameObject_SetActive_m1073 (GameObject_t140 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
 bool GameObject_get_activeSelf_m1430 (GameObject_t140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
 bool GameObject_get_activeInHierarchy_m1943 (GameObject_t140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
 String_t* GameObject_get_tag_m4557 (GameObject_t140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
 GameObject_t140 * GameObject_FindGameObjectWithTag_m4558 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
 GameObject_t140 * GameObject_FindWithTag_m1805 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void GameObject_SendMessage_m4559 (GameObject_t140 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
 void GameObject_SendMessage_m1941 (GameObject_t140 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
 Component_t263 * GameObject_Internal_AddComponentWithType_m4560 (GameObject_t140 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
 Component_t263 * GameObject_AddComponent_m1429 (GameObject_t140 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
 void GameObject_Internal_CreateGameObject_m4561 (Object_t * __this/* static, unused */, GameObject_t140 * ___mono, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
