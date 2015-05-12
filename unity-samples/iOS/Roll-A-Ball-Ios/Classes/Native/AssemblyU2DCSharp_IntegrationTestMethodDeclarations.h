#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IntegrationTest
struct IntegrationTest_t234;
// UnityEngine.GameObject
struct GameObject_t154;
// System.String
struct String_t;

// System.Void IntegrationTest::.cctor()
 void IntegrationTest__cctor_m937 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Pass()
 void IntegrationTest_Pass_m938 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Pass(UnityEngine.GameObject)
 void IntegrationTest_Pass_m939 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(System.String)
 void IntegrationTest_Fail_m940 (Object_t * __this/* static, unused */, String_t* ___reason, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(UnityEngine.GameObject,System.String)
 void IntegrationTest_Fail_m941 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, String_t* ___reason, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail()
 void IntegrationTest_Fail_m942 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(UnityEngine.GameObject)
 void IntegrationTest_Fail_m943 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(System.Boolean)
 void IntegrationTest_Assert_m944 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(UnityEngine.GameObject,System.Boolean)
 void IntegrationTest_Assert_m945 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(System.Boolean,System.String)
 void IntegrationTest_Assert_m946 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(UnityEngine.GameObject,System.Boolean,System.String)
 void IntegrationTest_Assert_m947 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, bool ___condition, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::LogResult(System.String)
 void IntegrationTest_LogResult_m948 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::LogResult(UnityEngine.GameObject,System.String)
 void IntegrationTest_LogResult_m949 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject IntegrationTest::FindTestObject(UnityEngine.GameObject)
 GameObject_t154 * IntegrationTest_FindTestObject_m950 (Object_t * __this/* static, unused */, GameObject_t154 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
