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

// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2632194320;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1400332969;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C"  Il2CppObject * ActivationServices_get_ConstructionActivator_m3957898300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern "C"  Il2CppObject * ActivationServices_CreateProxyFromAttributes_m2361190433 (Il2CppObject * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern "C"  ConstructionCall_t1400332969 * ActivationServices_CreateConstructionCall_m2559285452 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C"  Il2CppObject * ActivationServices_AllocateUninitializedClassInstance_m91641017 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Activation.ActivationServices::EnableProxyActivation(System.Type,System.Boolean)
extern "C"  void ActivationServices_EnableProxyActivation_m2068301505 (Il2CppObject * __this /* static, unused */, Type_t * ___type, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
