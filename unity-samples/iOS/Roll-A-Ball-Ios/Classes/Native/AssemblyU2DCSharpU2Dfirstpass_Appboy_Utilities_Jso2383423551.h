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
// System.IO.StringReader
struct StringReader_t2229325051;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Utilities.Json/Parser
struct  Parser_t2383423551  : public Il2CppObject
{
public:
	// System.IO.StringReader Appboy.Utilities.Json/Parser::json
	StringReader_t2229325051 * ___json_2;

public:
	inline static int32_t get_offset_of_json_2() { return static_cast<int32_t>(offsetof(Parser_t2383423551, ___json_2)); }
	inline StringReader_t2229325051 * get_json_2() const { return ___json_2; }
	inline StringReader_t2229325051 ** get_address_of_json_2() { return &___json_2; }
	inline void set_json_2(StringReader_t2229325051 * value)
	{
		___json_2 = value;
		Il2CppCodeGenWriteBarrier(&___json_2, value);
	}
};

struct Parser_t2383423551_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Appboy.Utilities.Json/Parser::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(Parser_t2383423551_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
