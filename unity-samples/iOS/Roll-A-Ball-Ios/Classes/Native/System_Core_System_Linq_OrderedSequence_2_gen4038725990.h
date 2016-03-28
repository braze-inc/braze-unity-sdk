#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t1902017548;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3536813829;

#include "System_Core_System_Linq_OrderedEnumerable_1_gen1902017548.h"
#include "System_Core_System_Linq_SortDirection2805156518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct  OrderedSequence_2_t4038725990  : public OrderedEnumerable_1_t1902017548
{
public:
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2::parent
	OrderedEnumerable_1_t1902017548 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2::selector
	Func_2_t2135783352 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2::comparer
	Il2CppObject* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2::direction
	int32_t ___direction_4;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t4038725990, ___parent_1)); }
	inline OrderedEnumerable_1_t1902017548 * get_parent_1() const { return ___parent_1; }
	inline OrderedEnumerable_1_t1902017548 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(OrderedEnumerable_1_t1902017548 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier(&___parent_1, value);
	}

	inline static int32_t get_offset_of_selector_2() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t4038725990, ___selector_2)); }
	inline Func_2_t2135783352 * get_selector_2() const { return ___selector_2; }
	inline Func_2_t2135783352 ** get_address_of_selector_2() { return &___selector_2; }
	inline void set_selector_2(Func_2_t2135783352 * value)
	{
		___selector_2 = value;
		Il2CppCodeGenWriteBarrier(&___selector_2, value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t4038725990, ___comparer_3)); }
	inline Il2CppObject* get_comparer_3() const { return ___comparer_3; }
	inline Il2CppObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(Il2CppObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_3, value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(OrderedSequence_2_t4038725990, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
