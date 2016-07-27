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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1547021349;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// System.Exception
struct Exception_t1967233988;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C"  void ReceiveRecordAsyncResult__ctor_m2998582075 (ReceiveRecordAsyncResult_t1547021349 * __this, AsyncCallback_t1363551830 * ___userCallback0, Il2CppObject * ___userState1, ByteU5BU5D_t58506160* ___initialBuffer2, Stream_t219029575 * ___record3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C"  Stream_t219029575 * ReceiveRecordAsyncResult_get_Record_m871815161 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C"  ByteU5BU5D_t58506160* ReceiveRecordAsyncResult_get_ResultingBuffer_m3820567043 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C"  ByteU5BU5D_t58506160* ReceiveRecordAsyncResult_get_InitialBuffer_m2778078946 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * ReceiveRecordAsyncResult_get_AsyncState_m3272189028 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t1967233988 * ReceiveRecordAsyncResult_get_AsyncException_m3323094132 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C"  bool ReceiveRecordAsyncResult_get_CompletedWithError_m3317022751 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t361062656 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m1089809952 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C"  bool ReceiveRecordAsyncResult_get_IsCompleted_m736891099 (ReceiveRecordAsyncResult_t1547021349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m3955953983 (ReceiveRecordAsyncResult_t1547021349 * __this, Exception_t1967233988 * ___ex0, ByteU5BU5D_t58506160* ___resultingBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m1288331580 (ReceiveRecordAsyncResult_t1547021349 * __this, Exception_t1967233988 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m652335805 (ReceiveRecordAsyncResult_t1547021349 * __this, ByteU5BU5D_t58506160* ___resultingBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
