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

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t3831560539;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReadDelegate__ctor_m383609331 (ReadDelegate_t3831560539 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ReadDelegate_Invoke_m3715810392 (ReadDelegate_t3831560539 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t3831560539(Il2CppObject* delegate, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReadDelegate_BeginInvoke_m3231845723 (ReadDelegate_t3831560539 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C"  int32_t ReadDelegate_EndInvoke_m1231787239 (ReadDelegate_t3831560539 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
