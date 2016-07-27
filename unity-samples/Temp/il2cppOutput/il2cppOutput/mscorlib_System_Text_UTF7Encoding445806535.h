#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.SByte[]
struct SByteU5BU5D_t1084170289;

#include "mscorlib_System_Text_Encoding180559927.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t445806535  : public Encoding_t180559927
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t445806535, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t445806535_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t58506160* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t1084170289* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t445806535_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t58506160* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t58506160** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t58506160* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier(&___encodingRules_29, value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t445806535_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t1084170289* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t1084170289** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t1084170289* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier(&___base64Values_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
