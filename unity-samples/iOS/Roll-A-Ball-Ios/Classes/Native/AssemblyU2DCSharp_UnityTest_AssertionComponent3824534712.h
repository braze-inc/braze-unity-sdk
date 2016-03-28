#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityTest.ActionBase
struct ActionBase_t1626794692;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UnityTest_CheckMethod32932966.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.AssertionComponent
struct  AssertionComponent_t3824534712  : public MonoBehaviour_t3012272455
{
public:
	// System.Single UnityTest.AssertionComponent::checkAfterTime
	float ___checkAfterTime_2;
	// System.Boolean UnityTest.AssertionComponent::repeatCheckTime
	bool ___repeatCheckTime_3;
	// System.Single UnityTest.AssertionComponent::repeatEveryTime
	float ___repeatEveryTime_4;
	// System.Int32 UnityTest.AssertionComponent::checkAfterFrames
	int32_t ___checkAfterFrames_5;
	// System.Boolean UnityTest.AssertionComponent::repeatCheckFrame
	bool ___repeatCheckFrame_6;
	// System.Int32 UnityTest.AssertionComponent::repeatEveryFrame
	int32_t ___repeatEveryFrame_7;
	// System.Boolean UnityTest.AssertionComponent::hasFailed
	bool ___hasFailed_8;
	// UnityTest.CheckMethod UnityTest.AssertionComponent::checkMethods
	int32_t ___checkMethods_9;
	// UnityTest.ActionBase UnityTest.AssertionComponent::m_ActionBase
	ActionBase_t1626794692 * ___m_ActionBase_10;
	// System.Int32 UnityTest.AssertionComponent::checksPerformed
	int32_t ___checksPerformed_11;
	// System.Int32 UnityTest.AssertionComponent::m_CheckOnFrame
	int32_t ___m_CheckOnFrame_12;
	// System.String UnityTest.AssertionComponent::m_CreatedInFilePath
	String_t* ___m_CreatedInFilePath_13;
	// System.Int32 UnityTest.AssertionComponent::m_CreatedInFileLine
	int32_t ___m_CreatedInFileLine_14;

public:
	inline static int32_t get_offset_of_checkAfterTime_2() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___checkAfterTime_2)); }
	inline float get_checkAfterTime_2() const { return ___checkAfterTime_2; }
	inline float* get_address_of_checkAfterTime_2() { return &___checkAfterTime_2; }
	inline void set_checkAfterTime_2(float value)
	{
		___checkAfterTime_2 = value;
	}

	inline static int32_t get_offset_of_repeatCheckTime_3() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___repeatCheckTime_3)); }
	inline bool get_repeatCheckTime_3() const { return ___repeatCheckTime_3; }
	inline bool* get_address_of_repeatCheckTime_3() { return &___repeatCheckTime_3; }
	inline void set_repeatCheckTime_3(bool value)
	{
		___repeatCheckTime_3 = value;
	}

	inline static int32_t get_offset_of_repeatEveryTime_4() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___repeatEveryTime_4)); }
	inline float get_repeatEveryTime_4() const { return ___repeatEveryTime_4; }
	inline float* get_address_of_repeatEveryTime_4() { return &___repeatEveryTime_4; }
	inline void set_repeatEveryTime_4(float value)
	{
		___repeatEveryTime_4 = value;
	}

	inline static int32_t get_offset_of_checkAfterFrames_5() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___checkAfterFrames_5)); }
	inline int32_t get_checkAfterFrames_5() const { return ___checkAfterFrames_5; }
	inline int32_t* get_address_of_checkAfterFrames_5() { return &___checkAfterFrames_5; }
	inline void set_checkAfterFrames_5(int32_t value)
	{
		___checkAfterFrames_5 = value;
	}

	inline static int32_t get_offset_of_repeatCheckFrame_6() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___repeatCheckFrame_6)); }
	inline bool get_repeatCheckFrame_6() const { return ___repeatCheckFrame_6; }
	inline bool* get_address_of_repeatCheckFrame_6() { return &___repeatCheckFrame_6; }
	inline void set_repeatCheckFrame_6(bool value)
	{
		___repeatCheckFrame_6 = value;
	}

	inline static int32_t get_offset_of_repeatEveryFrame_7() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___repeatEveryFrame_7)); }
	inline int32_t get_repeatEveryFrame_7() const { return ___repeatEveryFrame_7; }
	inline int32_t* get_address_of_repeatEveryFrame_7() { return &___repeatEveryFrame_7; }
	inline void set_repeatEveryFrame_7(int32_t value)
	{
		___repeatEveryFrame_7 = value;
	}

	inline static int32_t get_offset_of_hasFailed_8() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___hasFailed_8)); }
	inline bool get_hasFailed_8() const { return ___hasFailed_8; }
	inline bool* get_address_of_hasFailed_8() { return &___hasFailed_8; }
	inline void set_hasFailed_8(bool value)
	{
		___hasFailed_8 = value;
	}

	inline static int32_t get_offset_of_checkMethods_9() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___checkMethods_9)); }
	inline int32_t get_checkMethods_9() const { return ___checkMethods_9; }
	inline int32_t* get_address_of_checkMethods_9() { return &___checkMethods_9; }
	inline void set_checkMethods_9(int32_t value)
	{
		___checkMethods_9 = value;
	}

	inline static int32_t get_offset_of_m_ActionBase_10() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___m_ActionBase_10)); }
	inline ActionBase_t1626794692 * get_m_ActionBase_10() const { return ___m_ActionBase_10; }
	inline ActionBase_t1626794692 ** get_address_of_m_ActionBase_10() { return &___m_ActionBase_10; }
	inline void set_m_ActionBase_10(ActionBase_t1626794692 * value)
	{
		___m_ActionBase_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_ActionBase_10, value);
	}

	inline static int32_t get_offset_of_checksPerformed_11() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___checksPerformed_11)); }
	inline int32_t get_checksPerformed_11() const { return ___checksPerformed_11; }
	inline int32_t* get_address_of_checksPerformed_11() { return &___checksPerformed_11; }
	inline void set_checksPerformed_11(int32_t value)
	{
		___checksPerformed_11 = value;
	}

	inline static int32_t get_offset_of_m_CheckOnFrame_12() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___m_CheckOnFrame_12)); }
	inline int32_t get_m_CheckOnFrame_12() const { return ___m_CheckOnFrame_12; }
	inline int32_t* get_address_of_m_CheckOnFrame_12() { return &___m_CheckOnFrame_12; }
	inline void set_m_CheckOnFrame_12(int32_t value)
	{
		___m_CheckOnFrame_12 = value;
	}

	inline static int32_t get_offset_of_m_CreatedInFilePath_13() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___m_CreatedInFilePath_13)); }
	inline String_t* get_m_CreatedInFilePath_13() const { return ___m_CreatedInFilePath_13; }
	inline String_t** get_address_of_m_CreatedInFilePath_13() { return &___m_CreatedInFilePath_13; }
	inline void set_m_CreatedInFilePath_13(String_t* value)
	{
		___m_CreatedInFilePath_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_CreatedInFilePath_13, value);
	}

	inline static int32_t get_offset_of_m_CreatedInFileLine_14() { return static_cast<int32_t>(offsetof(AssertionComponent_t3824534712, ___m_CreatedInFileLine_14)); }
	inline int32_t get_m_CreatedInFileLine_14() const { return ___m_CreatedInFileLine_14; }
	inline int32_t* get_address_of_m_CreatedInFileLine_14() { return &___m_CreatedInFileLine_14; }
	inline void set_m_CreatedInFileLine_14(int32_t value)
	{
		___m_CreatedInFileLine_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
