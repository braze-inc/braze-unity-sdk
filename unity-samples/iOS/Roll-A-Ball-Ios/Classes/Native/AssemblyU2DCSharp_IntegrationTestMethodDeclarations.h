#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IntegrationTest
struct IntegrationTest_t221;
// UnityEngine.GameObject
struct GameObject_t140;
// System.String
struct String_t;

// System.Void IntegrationTest::Pass()
 void IntegrationTest_Pass_m832 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Pass(UnityEngine.GameObject)
 void IntegrationTest_Pass_m833 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(System.String)
 void IntegrationTest_Fail_m834 (Object_t * __this/* static, unused */, String_t* ___reason, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(UnityEngine.GameObject,System.String)
 void IntegrationTest_Fail_m835 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, String_t* ___reason, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail()
 void IntegrationTest_Fail_m836 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(UnityEngine.GameObject)
 void IntegrationTest_Fail_m837 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(System.Boolean)
 void IntegrationTest_Assert_m838 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(UnityEngine.GameObject,System.Boolean)
 void IntegrationTest_Assert_m839 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(System.Boolean,System.String)
 void IntegrationTest_Assert_m840 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(UnityEngine.GameObject,System.Boolean,System.String)
 void IntegrationTest_Assert_m841 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, bool ___condition, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::LogResult(System.String)
 void IntegrationTest_LogResult_m842 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::LogResult(UnityEngine.GameObject,System.String)
 void IntegrationTest_LogResult_m843 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject IntegrationTest::FindTestObject(UnityEngine.GameObject)
 GameObject_t140 * IntegrationTest_FindTestObject_m844 (Object_t * __this/* static, unused */, GameObject_t140 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
