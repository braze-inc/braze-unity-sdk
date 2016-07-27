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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t530630571;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1568637665;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1130251838_gshared (UnityEvent_1_t530630571 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1130251838(__this, method) ((  void (*) (UnityEvent_1_t530630571 *, const MethodInfo*))UnityEvent_1__ctor_m1130251838_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m1347854496_gshared (UnityEvent_1_t530630571 * __this, UnityAction_1_t1568637665 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1347854496(__this, ___call0, method) ((  void (*) (UnityEvent_1_t530630571 *, UnityAction_1_t1568637665 *, const MethodInfo*))UnityEvent_1_AddListener_m1347854496_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2625816718_gshared (UnityEvent_1_t530630571 * __this, UnityAction_1_t1568637665 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2625816718(__this, ___call0, method) ((  void (*) (UnityEvent_1_t530630571 *, UnityAction_1_t1568637665 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2625816718_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m382043647_gshared (UnityEvent_1_t530630571 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m382043647(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t530630571 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m382043647_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m441737225_gshared (UnityEvent_1_t530630571 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m441737225(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_1_t530630571 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m441737225_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m758008166_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t1568637665 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m758008166(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1733537956 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t1568637665 *, const MethodInfo*))UnityEvent_1_GetDelegate_m758008166_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m2712400111_gshared (UnityEvent_1_t530630571 * __this, Color_t1588175760  ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2712400111(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t530630571 *, Color_t1588175760 , const MethodInfo*))UnityEvent_1_Invoke_m2712400111_gshared)(__this, ___arg00, method)
