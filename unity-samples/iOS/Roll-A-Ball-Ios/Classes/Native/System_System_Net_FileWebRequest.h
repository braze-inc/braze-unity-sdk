#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t61;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1579;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1580;
// System.Net.WebRequest
#include "System_System_Net_WebRequest.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Net.FileWebRequest
struct FileWebRequest_t1581  : public WebRequest_t1537
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t61 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t1579 * ___webHeaders_7;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_8;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_9;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_10;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_11;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_12;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_13;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_14;
};
