#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t4226329727;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t1170849942  : public Il2CppObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t4226329727 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t1170849942, ___dict_0)); }
	inline ListDictionary_t4226329727 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t4226329727 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t4226329727 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier(&___dict_0, value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t1170849942, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
