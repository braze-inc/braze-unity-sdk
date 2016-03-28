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
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t3983467982  : public Il2CppObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t3336811651 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t2121638921 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t3983467982, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier(&____storePath_0, value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t3983467982, ____certificates_1)); }
	inline X509CertificateCollection_t3336811651 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t3336811651 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t3336811651 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier(&____certificates_1, value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t3983467982, ____crls_2)); }
	inline ArrayList_t2121638921 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t2121638921 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t2121638921 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier(&____crls_2, value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t3983467982, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
