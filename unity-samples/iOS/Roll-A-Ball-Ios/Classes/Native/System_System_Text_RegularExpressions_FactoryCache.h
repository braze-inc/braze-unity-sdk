#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t414;
// System.Text.RegularExpressions.MRUList
struct MRUList_t1649;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1642  : public Object_t
{
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t414 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t1649 * ___mru_list_2;
};
