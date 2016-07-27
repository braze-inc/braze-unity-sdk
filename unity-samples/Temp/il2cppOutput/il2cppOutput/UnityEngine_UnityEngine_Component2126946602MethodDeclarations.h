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

// UnityEngine.Component
struct Component_t2126946602;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t552366831;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t2923905571;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_SendMessageOptions2623293100.h"

// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m4238603388 (Component_t2126946602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t284553113 * Component_get_transform_m4257140443 (Component_t2126946602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t4012695102 * Component_get_gameObject_m1170635899 (Component_t2126946602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t2126946602 * Component_GetComponent_m936021879 (Component_t2126946602 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m1455568887 (Component_t2126946602 * __this, Type_t * ___type0, IntPtr_t ___oneFurtherThanResultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C"  Component_t2126946602 * Component_GetComponent_m840247168 (Component_t2126946602 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t2126946602 * Component_GetComponentInChildren_m1899663946 (Component_t2126946602 * __this, Type_t * ___t0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C"  Component_t2126946602 * Component_GetComponentInChildren_m680239315 (Component_t2126946602 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type)
extern "C"  ComponentU5BU5D_t552366831* Component_GetComponentsInChildren_m1419556996 (Component_t2126946602 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t552366831* Component_GetComponentsInChildren_m2446525049 (Component_t2126946602 * __this, Type_t * ___t0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t2126946602 * Component_GetComponentInParent_m1953645192 (Component_t2126946602 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type)
extern "C"  ComponentU5BU5D_t552366831* Component_GetComponentsInParent_m345477753 (Component_t2126946602 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t552366831* Component_GetComponentsInParent_m608460772 (Component_t2126946602 * __this, Type_t * ___t0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t552366831* Component_GetComponents_m2975031400 (Component_t2126946602 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C"  void Component_GetComponentsForListInternal_m814665735 (Component_t2126946602 * __this, Type_t * ___searchType0, Il2CppObject * ___resultList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void Component_GetComponents_m3426812285 (Component_t2126946602 * __this, Type_t * ___type0, List_1_t2923905571 * ___results1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m217485006 (Component_t2126946602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C"  void Component_set_tag_m3240989163 (Component_t2126946602 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C"  bool Component_CompareTag_m305486283 (Component_t2126946602 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m2772130661 (Component_t2126946602 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object)
extern "C"  void Component_SendMessageUpwards_m2473191947 (Component_t2126946602 * __this, String_t* ___methodName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String)
extern "C"  void Component_SendMessageUpwards_m767712765 (Component_t2126946602 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m707848499 (Component_t2126946602 * __this, String_t* ___methodName0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m1163914169 (Component_t2126946602 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C"  void Component_SendMessage_m904598583 (Component_t2126946602 * __this, String_t* ___methodName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C"  void Component_SendMessage_m2359133481 (Component_t2126946602 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m1912331399 (Component_t2126946602 * __this, String_t* ___methodName0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m3961995854 (Component_t2126946602 * __this, String_t* ___methodName0, Il2CppObject * ___parameter1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object)
extern "C"  void Component_BroadcastMessage_m3546905666 (Component_t2126946602 * __this, String_t* ___methodName0, Il2CppObject * ___parameter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String)
extern "C"  void Component_BroadcastMessage_m2857110644 (Component_t2126946602 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m1985948636 (Component_t2126946602 * __this, String_t* ___methodName0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
