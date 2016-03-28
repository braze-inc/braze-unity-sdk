#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1025395500;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t3644523850  : public Il2CppObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t1025395500 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t3644523850, ____usage_0)); }
	inline AttributeUsageAttribute_t1025395500 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t1025395500 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t1025395500 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier(&____usage_0, value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t3644523850, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
