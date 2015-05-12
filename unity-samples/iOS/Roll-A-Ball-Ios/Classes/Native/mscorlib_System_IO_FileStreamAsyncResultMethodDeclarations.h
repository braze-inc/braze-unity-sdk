#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1923;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1463;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IAsyncResult
struct IAsyncResult_t472;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m9474 (FileStreamAsyncResult_t1923 * __this, AsyncCallback_t473 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m9475 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m9476 (FileStreamAsyncResult_t1923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1463 * FileStreamAsyncResult_get_AsyncWaitHandle_m9477 (FileStreamAsyncResult_t1923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m9478 (FileStreamAsyncResult_t1923 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
