#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "Mono_Security_Mono_Security_X509_X509Extension1510964268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct  ExtendedKeyUsageExtension_t973649415  : public X509Extension_t1510964269
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::keyPurpose
	ArrayList_t2121638921 * ___keyPurpose_3;

public:
	inline static int32_t get_offset_of_keyPurpose_3() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t973649415, ___keyPurpose_3)); }
	inline ArrayList_t2121638921 * get_keyPurpose_3() const { return ___keyPurpose_3; }
	inline ArrayList_t2121638921 ** get_address_of_keyPurpose_3() { return &___keyPurpose_3; }
	inline void set_keyPurpose_3(ArrayList_t2121638921 * value)
	{
		___keyPurpose_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyPurpose_3, value);
	}
};

struct ExtendedKeyUsageExtension_t973649415_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::<>f__switch$map14
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map14_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_4() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t973649415_StaticFields, ___U3CU3Ef__switchU24map14_4)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map14_4() const { return ___U3CU3Ef__switchU24map14_4; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map14_4() { return &___U3CU3Ef__switchU24map14_4; }
	inline void set_U3CU3Ef__switchU24map14_4(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map14_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map14_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
