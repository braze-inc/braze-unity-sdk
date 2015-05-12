#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.Exception
struct Exception_t71;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1461;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1477  : public Object_t
{
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::locker
	Object_t * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_userCallback
	AsyncCallback_t473 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_userState
	Object_t * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_asyncException
	Exception_t71 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::handle
	ManualResetEvent_t1461 * ___handle_4;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::completed
	bool ___completed_5;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_bytesRead
	int32_t ____bytesRead_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_fromWrite
	bool ____fromWrite_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_proceedAfterHandshake
	bool ____proceedAfterHandshake_8;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_buffer
	ByteU5BU5D_t97* ____buffer_9;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_offset
	int32_t ____offset_10;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_count
	int32_t ____count_11;
};
