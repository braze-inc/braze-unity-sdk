#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1121;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2078;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Identity
struct Identity_t2080  : public Object_t
{
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	Object_t * ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	Object_t * ____envoySink_2;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t2078 * ____objRef_3;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_4;
};
