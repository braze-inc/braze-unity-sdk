#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t807;
struct AsyncOperation_t807_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
 void AsyncOperation__ctor_m4558 (AsyncOperation_t807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
 void AsyncOperation_InternalDestroy_m4559 (AsyncOperation_t807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
 void AsyncOperation_Finalize_m4560 (AsyncOperation_t807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t807_marshal(const AsyncOperation_t807& unmarshaled, AsyncOperation_t807_marshaled& marshaled);
void AsyncOperation_t807_marshal_back(const AsyncOperation_t807_marshaled& marshaled, AsyncOperation_t807& unmarshaled);
void AsyncOperation_t807_marshal_cleanup(AsyncOperation_t807_marshaled& marshaled);
