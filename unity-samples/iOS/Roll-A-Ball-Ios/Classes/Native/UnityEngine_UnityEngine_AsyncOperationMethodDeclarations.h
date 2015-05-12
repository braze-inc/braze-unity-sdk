#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t794;
struct AsyncOperation_t794_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
 void AsyncOperation__ctor_m4463 (AsyncOperation_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
 void AsyncOperation_InternalDestroy_m4464 (AsyncOperation_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
 void AsyncOperation_Finalize_m4465 (AsyncOperation_t794 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t794_marshal(const AsyncOperation_t794& unmarshaled, AsyncOperation_t794_marshaled& marshaled);
void AsyncOperation_t794_marshal_back(const AsyncOperation_t794_marshaled& marshaled, AsyncOperation_t794& unmarshaled);
void AsyncOperation_t794_marshal_cleanup(AsyncOperation_t794_marshaled& marshaled);
