#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.Oid
struct Oid_t1557563107;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t4287420181  : public Il2CppObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t1557563107 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t58506160* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t4287420181, ____oid_0)); }
	inline Oid_t1557563107 * get__oid_0() const { return ____oid_0; }
	inline Oid_t1557563107 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t1557563107 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier(&____oid_0, value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t4287420181, ____raw_1)); }
	inline ByteU5BU5D_t58506160* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t58506160** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t58506160* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier(&____raw_1, value);
	}
};

struct AsnEncodedData_t4287420181_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.AsnEncodedData::<>f__switch$mapA
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(AsnEncodedData_t4287420181_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
