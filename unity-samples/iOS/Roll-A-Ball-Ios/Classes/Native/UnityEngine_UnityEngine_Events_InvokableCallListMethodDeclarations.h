#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t982;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t970;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Object[]
struct ObjectU5BU5D_t112;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
 void InvokableCallList__ctor_m4938 (InvokableCallList_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m4939 (InvokableCallList_t982 * __this, BaseInvokableCall_t970 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddListener_m4940 (InvokableCallList_t982 * __this, BaseInvokableCall_t970 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void InvokableCallList_RemoveListener_m4941 (InvokableCallList_t982 * __this, Object_t * ___targetObj, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
 void InvokableCallList_ClearPersistent_m4942 (InvokableCallList_t982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
 void InvokableCallList_Invoke_m4943 (InvokableCallList_t982 * __this, ObjectU5BU5D_t112* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
