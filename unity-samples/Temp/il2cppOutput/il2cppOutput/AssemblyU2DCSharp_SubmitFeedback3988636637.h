#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t2345609593;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SubmitFeedback
struct  SubmitFeedback_t3988636637  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.InputField SubmitFeedback::FeedbackField
	InputField_t2345609593 * ___FeedbackField_2;
	// UnityEngine.UI.InputField SubmitFeedback::EmailField
	InputField_t2345609593 * ___EmailField_3;
	// UnityEngine.UI.Toggle SubmitFeedback::IssueToggle
	Toggle_t1499417981 * ___IssueToggle_4;

public:
	inline static int32_t get_offset_of_FeedbackField_2() { return static_cast<int32_t>(offsetof(SubmitFeedback_t3988636637, ___FeedbackField_2)); }
	inline InputField_t2345609593 * get_FeedbackField_2() const { return ___FeedbackField_2; }
	inline InputField_t2345609593 ** get_address_of_FeedbackField_2() { return &___FeedbackField_2; }
	inline void set_FeedbackField_2(InputField_t2345609593 * value)
	{
		___FeedbackField_2 = value;
		Il2CppCodeGenWriteBarrier(&___FeedbackField_2, value);
	}

	inline static int32_t get_offset_of_EmailField_3() { return static_cast<int32_t>(offsetof(SubmitFeedback_t3988636637, ___EmailField_3)); }
	inline InputField_t2345609593 * get_EmailField_3() const { return ___EmailField_3; }
	inline InputField_t2345609593 ** get_address_of_EmailField_3() { return &___EmailField_3; }
	inline void set_EmailField_3(InputField_t2345609593 * value)
	{
		___EmailField_3 = value;
		Il2CppCodeGenWriteBarrier(&___EmailField_3, value);
	}

	inline static int32_t get_offset_of_IssueToggle_4() { return static_cast<int32_t>(offsetof(SubmitFeedback_t3988636637, ___IssueToggle_4)); }
	inline Toggle_t1499417981 * get_IssueToggle_4() const { return ___IssueToggle_4; }
	inline Toggle_t1499417981 ** get_address_of_IssueToggle_4() { return &___IssueToggle_4; }
	inline void set_IssueToggle_4(Toggle_t1499417981 * value)
	{
		___IssueToggle_4 = value;
		Il2CppCodeGenWriteBarrier(&___IssueToggle_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
