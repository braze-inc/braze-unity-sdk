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

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t499912649;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_3__ctor_m774681667_gshared (InvokableCall_3_t499912649 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_3__ctor_m774681667(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_3_t499912649 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m774681667_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_3_Invoke_m585455258_gshared (InvokableCall_3_t499912649 * __this, ObjectU5BU5D_t11523773* ___args0, const MethodInfo* method);
#define InvokableCall_3_Invoke_m585455258(__this, ___args0, method) ((  void (*) (InvokableCall_3_t499912649 *, ObjectU5BU5D_t11523773*, const MethodInfo*))InvokableCall_3_Invoke_m585455258_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_3_Find_m4267409362_gshared (InvokableCall_3_t499912649 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_3_Find_m4267409362(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_3_t499912649 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m4267409362_gshared)(__this, ___targetObj0, ___method1, method)
