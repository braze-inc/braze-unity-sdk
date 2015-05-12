#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2052;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2062;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t71;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
 ObjectU5BU5D_t112* MonoMethodMessage_get_Args_m10324 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
 LogicalCallContext_t2062 * MonoMethodMessage_get_LogicalCallContext_m10325 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
 MethodBase_t307 * MonoMethodMessage_get_MethodBase_m10326 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
 String_t* MonoMethodMessage_get_MethodName_m10327 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
 Object_t * MonoMethodMessage_get_MethodSignature_m10328 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
 String_t* MonoMethodMessage_get_TypeName_m10329 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
 String_t* MonoMethodMessage_get_Uri_m10330 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
 void MonoMethodMessage_set_Uri_m10331 (MonoMethodMessage_t2052 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
 Exception_t71 * MonoMethodMessage_get_Exception_m10332 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
 int32_t MonoMethodMessage_get_OutArgCount_m10333 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
 ObjectU5BU5D_t112* MonoMethodMessage_get_OutArgs_m10334 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
 Object_t * MonoMethodMessage_get_ReturnValue_m10335 (MonoMethodMessage_t2052 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
