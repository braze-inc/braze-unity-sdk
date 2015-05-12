#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t2086;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2074;
// System.Reflection.MethodBase
struct MethodBase_t320;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t1572;
// System.Exception
struct Exception_t82;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2087;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m10438 (ReturnMessage_t2086 * __this, Object_t * ___ret, ObjectU5BU5D_t96* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t2074 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m10439 (ReturnMessage_t2086 * __this, Exception_t82 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10440 (ReturnMessage_t2086 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
 ObjectU5BU5D_t96* ReturnMessage_get_Args_m10441 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
 LogicalCallContext_t2074 * ReturnMessage_get_LogicalCallContext_m10442 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
 MethodBase_t320 * ReturnMessage_get_MethodBase_m10443 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
 String_t* ReturnMessage_get_MethodName_m10444 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
 Object_t * ReturnMessage_get_MethodSignature_m10445 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
 Object_t * ReturnMessage_get_Properties_m10446 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
 String_t* ReturnMessage_get_TypeName_m10447 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
 String_t* ReturnMessage_get_Uri_m10448 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
 void ReturnMessage_set_Uri_m10449 (ReturnMessage_t2086 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
 Exception_t82 * ReturnMessage_get_Exception_m10450 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
 ObjectU5BU5D_t96* ReturnMessage_get_OutArgs_m10451 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
 Object_t * ReturnMessage_get_ReturnValue_m10452 (ReturnMessage_t2086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
