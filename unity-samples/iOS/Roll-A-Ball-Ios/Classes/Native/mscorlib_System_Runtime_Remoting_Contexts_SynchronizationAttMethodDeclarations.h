#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t2060;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2048;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2049;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
 void SynchronizationAttribute__ctor_m10315 (SynchronizationAttribute_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
 void SynchronizationAttribute__ctor_m10316 (SynchronizationAttribute_t2060 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
 void SynchronizationAttribute_set_Locked_m10317 (SynchronizationAttribute_t2060 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
 void SynchronizationAttribute_ReleaseLock_m10318 (SynchronizationAttribute_t2060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void SynchronizationAttribute_GetPropertiesForNewContext_m10319 (SynchronizationAttribute_t2060 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool SynchronizationAttribute_IsContextOK_m10320 (SynchronizationAttribute_t2060 * __this, Context_t2049 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
 void SynchronizationAttribute_ExitContext_m10321 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
 void SynchronizationAttribute_EnterContext_m10322 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
