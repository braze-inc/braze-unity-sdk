#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t563003706;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1439411180;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3148194463;

#include "System_System_Text_RegularExpressions_Syntax_Assert324477170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t1074818188  : public Assertion_t324477170
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t563003706 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1439411180 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t3148194463 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t1074818188, ___alternate_1)); }
	inline ExpressionAssertion_t563003706 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t563003706 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t563003706 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier(&___alternate_1, value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t1074818188, ___group_2)); }
	inline CapturingGroup_t1439411180 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t1439411180 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t1439411180 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier(&___group_2, value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t1074818188, ___literal_3)); }
	inline Literal_t3148194463 * get_literal_3() const { return ___literal_3; }
	inline Literal_t3148194463 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t3148194463 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier(&___literal_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
