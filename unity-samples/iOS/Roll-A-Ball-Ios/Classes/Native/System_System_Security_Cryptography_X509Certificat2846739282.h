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
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t123613238;
// Mono.Security.X509.X509Store
struct X509Store_t3983467982;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"
#include "System_System_Security_Cryptography_X509Certificat4233344013.h"
#include "System_System_Security_Cryptography_X509Certificat2978696884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t2846739282  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t123613238 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t3983467982 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t2846739282, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t2846739282, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t2846739282, ___list_2)); }
	inline X509Certificate2Collection_t123613238 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t123613238 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t123613238 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t2846739282, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t2846739282, ___store_4)); }
	inline X509Store_t3983467982 * get_store_4() const { return ___store_4; }
	inline X509Store_t3983467982 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t3983467982 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier(&___store_4, value);
	}
};

struct X509Store_t2846739282_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Store::<>f__switch$mapF
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapF_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_5() { return static_cast<int32_t>(offsetof(X509Store_t2846739282_StaticFields, ___U3CU3Ef__switchU24mapF_5)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapF_5() const { return ___U3CU3Ef__switchU24mapF_5; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapF_5() { return &___U3CU3Ef__switchU24mapF_5; }
	inline void set_U3CU3Ef__switchU24mapF_5(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapF_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapF_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
