#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Activation.ActivationServices
struct ActivationServices_t2028;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2027;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2029;
// System.String
struct String_t;

// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
 Object_t * ActivationServices_get_ConstructionActivator_m10179 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
 Object_t * ActivationServices_CreateProxyFromAttributes_m10180 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t112* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
 ConstructionCall_t2029 * ActivationServices_CreateConstructionCall_m10181 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t112* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
 Object_t * ActivationServices_AllocateUninitializedClassInstance_m10182 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
