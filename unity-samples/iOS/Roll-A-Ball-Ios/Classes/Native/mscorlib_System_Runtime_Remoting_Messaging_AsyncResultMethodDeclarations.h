#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t2055;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1463;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1121;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2052;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t2053;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t2054;

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
 void AsyncResult__ctor_m10230 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
 Object_t * AsyncResult_get_AsyncState_m10231 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1463 * AsyncResult_get_AsyncWaitHandle_m10232 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
 bool AsyncResult_get_CompletedSynchronously_m10233 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
 bool AsyncResult_get_IsCompleted_m10234 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
 bool AsyncResult_get_EndInvokeCalled_m10235 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
 void AsyncResult_set_EndInvokeCalled_m10236 (AsyncResult_t2055 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
 Object_t * AsyncResult_get_AsyncDelegate_m10237 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
 Object_t * AsyncResult_get_NextSink_m10238 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
 Object_t * AsyncResult_AsyncProcessMessage_m10239 (AsyncResult_t2055 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
 Object_t * AsyncResult_GetReplyMessage_m10240 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
 void AsyncResult_SetMessageCtrl_m10241 (AsyncResult_t2055 * __this, Object_t * ___mc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
 void AsyncResult_SetCompletedSynchronously_m10242 (AsyncResult_t2055 * __this, bool ___completed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
 Object_t * AsyncResult_EndInvoke_m10243 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
 Object_t * AsyncResult_SyncProcessMessage_m10244 (AsyncResult_t2055 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
 MonoMethodMessage_t2052 * AsyncResult_get_CallMessage_m10245 (AsyncResult_t2055 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
 void AsyncResult_set_CallMessage_m10246 (AsyncResult_t2055 * __this, MonoMethodMessage_t2052 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
