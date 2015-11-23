#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.Collections.ArrayList
struct ArrayList_t1029;

#include "mscorlib_System_Object.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t1473  : public Object_t
{
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t98* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t1029 * ____list_3;
};
