#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GameObject
struct GameObject_t141;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void IntegrationTest::Pass()
extern "C" void IntegrationTest_Pass_m812 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Pass(UnityEngine.GameObject)
extern "C" void IntegrationTest_Pass_m813 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(System.String)
extern "C" void IntegrationTest_Fail_m814 (Object_t * __this /* static, unused */, String_t* ___reason, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(UnityEngine.GameObject,System.String)
extern "C" void IntegrationTest_Fail_m815 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, String_t* ___reason, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail()
extern "C" void IntegrationTest_Fail_m816 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Fail(UnityEngine.GameObject)
extern "C" void IntegrationTest_Fail_m817 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(System.Boolean)
extern "C" void IntegrationTest_Assert_m818 (Object_t * __this /* static, unused */, bool ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(UnityEngine.GameObject,System.Boolean)
extern "C" void IntegrationTest_Assert_m819 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, bool ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(System.Boolean,System.String)
extern "C" void IntegrationTest_Assert_m820 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::Assert(UnityEngine.GameObject,System.Boolean,System.String)
extern "C" void IntegrationTest_Assert_m821 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::LogResult(System.String)
extern "C" void IntegrationTest_LogResult_m822 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest::LogResult(UnityEngine.GameObject,System.String)
extern "C" void IntegrationTest_LogResult_m823 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject IntegrationTest::FindTestObject(UnityEngine.GameObject)
extern "C" GameObject_t141 * IntegrationTest_FindTestObject_m824 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
