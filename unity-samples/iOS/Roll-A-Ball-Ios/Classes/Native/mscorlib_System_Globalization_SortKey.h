#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Globalization.SortKey
struct SortKey_t1795  : public Object_t
{
	// System.String System.Globalization.SortKey::source
	String_t* ___source_0;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options_1;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t97* ___key_2;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid_3;
};
