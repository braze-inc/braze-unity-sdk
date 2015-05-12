#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t1931;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1463;
// System.Exception
struct Exception_t71;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
 void StreamAsyncResult__ctor_m9560 (StreamAsyncResult_t1931 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
 void StreamAsyncResult_SetComplete_m9561 (StreamAsyncResult_t1931 * __this, Exception_t71 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
 void StreamAsyncResult_SetComplete_m9562 (StreamAsyncResult_t1931 * __this, Exception_t71 * ___e, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
 Object_t * StreamAsyncResult_get_AsyncState_m9563 (StreamAsyncResult_t1931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1463 * StreamAsyncResult_get_AsyncWaitHandle_m9564 (StreamAsyncResult_t1931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
 bool StreamAsyncResult_get_IsCompleted_m9565 (StreamAsyncResult_t1931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
 Exception_t71 * StreamAsyncResult_get_Exception_m9566 (StreamAsyncResult_t1931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
 int32_t StreamAsyncResult_get_NBytes_m9567 (StreamAsyncResult_t1931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
 bool StreamAsyncResult_get_Done_m9568 (StreamAsyncResult_t1931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
 void StreamAsyncResult_set_Done_m9569 (StreamAsyncResult_t1931 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
