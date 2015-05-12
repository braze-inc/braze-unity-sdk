#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2041;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2039;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Collections.IList
struct IList_t1534;
// System.Collections.IDictionary
struct IDictionary_t1572;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
 void ConstructionCall__ctor_m10342 (ConstructionCall_t2041 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ConstructionCall__ctor_m10343 (ConstructionCall_t2041 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
 void ConstructionCall_InitDictionary_m10344 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
 void ConstructionCall_set_IsContextOk_m10345 (ConstructionCall_t2041 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
 Type_t * ConstructionCall_get_ActivationType_m10346 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
 String_t* ConstructionCall_get_ActivationTypeName_m10347 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
 Object_t * ConstructionCall_get_Activator_m10348 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
 void ConstructionCall_set_Activator_m10349 (ConstructionCall_t2041 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
 ObjectU5BU5D_t96* ConstructionCall_get_CallSiteActivationAttributes_m10350 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
 void ConstructionCall_SetActivationAttributes_m10351 (ConstructionCall_t2041 * __this, ObjectU5BU5D_t96* ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
 Object_t * ConstructionCall_get_ContextProperties_m10352 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
 void ConstructionCall_InitMethodProperty_m10353 (ConstructionCall_t2041 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ConstructionCall_GetObjectData_m10354 (ConstructionCall_t2041 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
 Object_t * ConstructionCall_get_Properties_m10355 (ConstructionCall_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
