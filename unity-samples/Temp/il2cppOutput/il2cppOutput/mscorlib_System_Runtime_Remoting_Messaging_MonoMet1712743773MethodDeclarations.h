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

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1712743773;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1074763138;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C"  ObjectU5BU5D_t11523773* MonoMethodMessage_get_Args_m2372385990 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C"  LogicalCallContext_t1074763138 * MonoMethodMessage_get_LogicalCallContext_m4081651649 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C"  MethodBase_t3461000640 * MonoMethodMessage_get_MethodBase_m1950873241 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C"  String_t* MonoMethodMessage_get_MethodName_m2720364837 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C"  Il2CppObject * MonoMethodMessage_get_MethodSignature_m1148728082 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C"  String_t* MonoMethodMessage_get_TypeName_m2637395646 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C"  String_t* MonoMethodMessage_get_Uri_m2730617429 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C"  void MonoMethodMessage_set_Uri_m1005536772 (MonoMethodMessage_t1712743773 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C"  Exception_t1967233988 * MonoMethodMessage_get_Exception_m1373061008 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C"  int32_t MonoMethodMessage_get_OutArgCount_m1218080105 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C"  ObjectU5BU5D_t11523773* MonoMethodMessage_get_OutArgs_m754565220 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C"  Il2CppObject * MonoMethodMessage_get_ReturnValue_m2245026524 (MonoMethodMessage_t1712743773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
