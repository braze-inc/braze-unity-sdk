#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1935;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1474;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IAsyncResult
struct IAsyncResult_t486;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m9569 (FileStreamAsyncResult_t1935 * __this, AsyncCallback_t487 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m9570 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m9571 (FileStreamAsyncResult_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1474 * FileStreamAsyncResult_get_AsyncWaitHandle_m9572 (FileStreamAsyncResult_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m9573 (FileStreamAsyncResult_t1935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
