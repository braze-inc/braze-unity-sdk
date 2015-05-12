#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t1921;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
 void ReadDelegate__ctor_m9432 (ReadDelegate_t1921 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 int32_t ReadDelegate_Invoke_m9433 (ReadDelegate_t1921 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * ReadDelegate_BeginInvoke_m9434 (ReadDelegate_t1921 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
 int32_t ReadDelegate_EndInvoke_m9435 (ReadDelegate_t1921 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
