#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t4023832425;

#include "mscorlib_System_StringComparer4058118931.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t2876040530  : public StringComparer_t4058118931
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t4023832425 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t2876040530, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t2876040530, ____compareInfo_5)); }
	inline CompareInfo_t4023832425 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t4023832425 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t4023832425 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&____compareInfo_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
