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

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t2739602298;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t4002837491;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;
// System.Runtime.Remoting.Contexts.Context
struct Context_t305277133;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context305277133.h"

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C"  void SynchronizationAttribute__ctor_m2176888868 (SynchronizationAttribute_t2739602298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C"  void SynchronizationAttribute__ctor_m3805252456 (SynchronizationAttribute_t2739602298 * __this, int32_t ___flag0, bool ___reEntrant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C"  void SynchronizationAttribute_set_Locked_m233834078 (SynchronizationAttribute_t2739602298 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C"  void SynchronizationAttribute_ReleaseLock_m3607558612 (SynchronizationAttribute_t2739602298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void SynchronizationAttribute_GetPropertiesForNewContext_m275738322 (SynchronizationAttribute_t2739602298 * __this, Il2CppObject * ___ctorMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Il2CppObject * SynchronizationAttribute_GetClientContextSink_m197546806 (SynchronizationAttribute_t2739602298 * __this, Il2CppObject * ___nextSink0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Il2CppObject * SynchronizationAttribute_GetServerContextSink_m1092455614 (SynchronizationAttribute_t2739602298 * __this, Il2CppObject * ___nextSink0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool SynchronizationAttribute_IsContextOK_m4152767269 (SynchronizationAttribute_t2739602298 * __this, Context_t305277133 * ___ctx0, Il2CppObject * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern "C"  void SynchronizationAttribute_ExitContext_m4269502195 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern "C"  void SynchronizationAttribute_EnterContext_m3151244183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
