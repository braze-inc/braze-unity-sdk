#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1854958641;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t1750144282  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t1854958641 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	Il2CppObject * ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t1750144282, ____methodDictionary_0)); }
	inline MethodDictionary_t1854958641 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MethodDictionary_t1854958641 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MethodDictionary_t1854958641 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____methodDictionary_0, value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t1750144282, ____hashtableEnum_1)); }
	inline Il2CppObject * get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline Il2CppObject ** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(Il2CppObject * value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier(&____hashtableEnum_1, value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t1750144282, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
