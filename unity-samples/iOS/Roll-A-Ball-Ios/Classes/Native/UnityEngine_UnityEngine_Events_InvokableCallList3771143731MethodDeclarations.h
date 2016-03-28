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

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t3771143731;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall1733537956.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C"  void InvokableCallList__ctor_m2413334847 (InvokableCallList_t3771143731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddPersistentInvokableCall_m4220625340 (InvokableCallList_t3771143731 * __this, BaseInvokableCall_t1733537956 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddListener_m1356872764 (InvokableCallList_t3771143731 * __this, BaseInvokableCall_t1733537956 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCallList_RemoveListener_m855004700 (InvokableCallList_t3771143731 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C"  void InvokableCallList_ClearPersistent_m1690187553 (InvokableCallList_t3771143731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C"  void InvokableCallList_Invoke_m575840373 (InvokableCallList_t3771143731 * __this, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
