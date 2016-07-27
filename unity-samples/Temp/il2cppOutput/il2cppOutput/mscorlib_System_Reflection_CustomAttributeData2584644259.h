#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2726907876;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2485227443;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2584644259  : public Il2CppObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t3542137334 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	Il2CppObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	Il2CppObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2584644259, ___ctorInfo_0)); }
	inline ConstructorInfo_t3542137334 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t3542137334 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t3542137334 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctorInfo_0, value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2584644259, ___ctorArgs_1)); }
	inline Il2CppObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline Il2CppObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(Il2CppObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier(&___ctorArgs_1, value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2584644259, ___namedArgs_2)); }
	inline Il2CppObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline Il2CppObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(Il2CppObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier(&___namedArgs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
