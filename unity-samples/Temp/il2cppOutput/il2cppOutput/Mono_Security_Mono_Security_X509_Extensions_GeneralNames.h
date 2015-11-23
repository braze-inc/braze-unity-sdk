#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1029;

#include "mscorlib_System_Object.h"

// Mono.Security.X509.Extensions.GeneralNames
struct  GeneralNames_t1294  : public Object_t
{
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t1029 * ___rfc822Name_0;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t1029 * ___dnsName_1;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t1029 * ___directoryNames_2;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t1029 * ___uris_3;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t1029 * ___ipAddr_4;
};
