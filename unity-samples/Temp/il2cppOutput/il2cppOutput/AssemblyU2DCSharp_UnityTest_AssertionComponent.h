#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityTest.ActionBase
struct ActionBase_t136;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UnityTest_CheckMethod.h"

// UnityTest.AssertionComponent
struct  AssertionComponent_t135  : public MonoBehaviour_t2
{
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
	ActionBase_t136 * ___m_ActionBase_10;
	// System.Int32 UnityTest.AssertionComponent::checksPerformed
	int32_t ___checksPerformed_11;
	// System.Int32 UnityTest.AssertionComponent::m_CheckOnFrame
	int32_t ___m_CheckOnFrame_12;
	// System.String UnityTest.AssertionComponent::m_CreatedInFilePath
	String_t* ___m_CreatedInFilePath_13;
	// System.Int32 UnityTest.AssertionComponent::m_CreatedInFileLine
	int32_t ___m_CreatedInFileLine_14;
};
