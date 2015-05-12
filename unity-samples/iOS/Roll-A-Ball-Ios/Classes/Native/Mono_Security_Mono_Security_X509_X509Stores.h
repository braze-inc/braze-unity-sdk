#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.X509.X509Store
struct X509Store_t1415;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509Stores
struct X509Stores_t1416  : public Object_t
{
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t1415 * ____trusted_1;
};
