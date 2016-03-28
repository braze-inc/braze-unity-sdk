#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
struct Dictionary_2_t3609216977;
// UnityTest.ITestComponent
struct ITestComponent_t3894659903;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t2471846963;
// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct Func_2_t3516853804;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct  IntegrationTestsProvider_t2398803635  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::testCollection
	Dictionary_2_t3609216977 * ___testCollection_0;
	// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::currentTestGroup
	Il2CppObject * ___currentTestGroup_1;
	// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::testToRun
	Il2CppObject* ___testToRun_2;

public:
	inline static int32_t get_offset_of_testCollection_0() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t2398803635, ___testCollection_0)); }
	inline Dictionary_2_t3609216977 * get_testCollection_0() const { return ___testCollection_0; }
	inline Dictionary_2_t3609216977 ** get_address_of_testCollection_0() { return &___testCollection_0; }
	inline void set_testCollection_0(Dictionary_2_t3609216977 * value)
	{
		___testCollection_0 = value;
		Il2CppCodeGenWriteBarrier(&___testCollection_0, value);
	}

	inline static int32_t get_offset_of_currentTestGroup_1() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t2398803635, ___currentTestGroup_1)); }
	inline Il2CppObject * get_currentTestGroup_1() const { return ___currentTestGroup_1; }
	inline Il2CppObject ** get_address_of_currentTestGroup_1() { return &___currentTestGroup_1; }
	inline void set_currentTestGroup_1(Il2CppObject * value)
	{
		___currentTestGroup_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentTestGroup_1, value);
	}

	inline static int32_t get_offset_of_testToRun_2() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t2398803635, ___testToRun_2)); }
	inline Il2CppObject* get_testToRun_2() const { return ___testToRun_2; }
	inline Il2CppObject** get_address_of_testToRun_2() { return &___testToRun_2; }
	inline void set_testToRun_2(Il2CppObject* value)
	{
		___testToRun_2 = value;
		Il2CppCodeGenWriteBarrier(&___testToRun_2, value);
	}
};

struct IntegrationTestsProvider_t2398803635_StaticFields
{
public:
	// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<>f__am$cache3
	Func_2_t3516853804 * ___U3CU3Ef__amU24cache3_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(IntegrationTestsProvider_t2398803635_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t3516853804 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t3516853804 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t3516853804 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
