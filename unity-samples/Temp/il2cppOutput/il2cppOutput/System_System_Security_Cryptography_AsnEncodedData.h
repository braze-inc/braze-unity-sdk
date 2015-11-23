#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.Oid
struct Oid_t1073;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t46;

#include "mscorlib_System_Object.h"

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t1072  : public Object_t
{
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t1073 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t98* ____raw_1;
};
struct AsnEncodedData_t1072_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.AsnEncodedData::<>f__switch$mapA
	Dictionary_2_t46 * ___U3CU3Ef__switchU24mapA_2;
};
