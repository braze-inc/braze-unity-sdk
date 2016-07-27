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

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t477528403;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t881957571;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t250303288;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1712743773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMet1712743773.h"

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C"  void AsyncResult__ctor_m4145929563 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C"  Il2CppObject * AsyncResult_get_AsyncState_m1982026226 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t361062656 * AsyncResult_get_AsyncWaitHandle_m1919809002 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C"  bool AsyncResult_get_CompletedSynchronously_m448147035 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C"  bool AsyncResult_get_IsCompleted_m563284563 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C"  bool AsyncResult_get_EndInvokeCalled_m130757730 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C"  void AsyncResult_set_EndInvokeCalled_m4140056803 (AsyncResult_t477528403 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C"  Il2CppObject * AsyncResult_get_AsyncDelegate_m1003284646 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C"  Il2CppObject * AsyncResult_get_NextSink_m920306782 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Il2CppObject * AsyncResult_AsyncProcessMessage_m1971781732 (AsyncResult_t477528403 * __this, Il2CppObject * ___msg0, Il2CppObject * ___replySink1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C"  Il2CppObject * AsyncResult_GetReplyMessage_m1791966425 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C"  void AsyncResult_SetMessageCtrl_m1503809360 (AsyncResult_t477528403 * __this, Il2CppObject * ___mc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C"  void AsyncResult_SetCompletedSynchronously_m190268221 (AsyncResult_t477528403 * __this, bool ___completed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C"  Il2CppObject * AsyncResult_EndInvoke_m2269051289 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern "C"  Il2CppObject * AsyncResult_SyncProcessMessage_m2452418033 (AsyncResult_t477528403 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C"  MonoMethodMessage_t1712743773 * AsyncResult_get_CallMessage_m1178656201 (AsyncResult_t477528403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C"  void AsyncResult_set_CallMessage_m2645023562 (AsyncResult_t477528403 * __this, MonoMethodMessage_t1712743773 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
