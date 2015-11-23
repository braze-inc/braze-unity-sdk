#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionary
struct IDictionary_t1127;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1765;
// System.String[]
struct StringU5BU5D_t63;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t46;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t1758  : public Object_t
{
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	Object_t * ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	Object_t * ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t63* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;
};
struct MethodDictionary_t1758_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t46 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t46 * ___U3CU3Ef__switchU24map22_5;
};
