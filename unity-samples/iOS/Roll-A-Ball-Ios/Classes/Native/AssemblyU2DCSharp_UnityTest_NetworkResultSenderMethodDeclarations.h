#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.NetworkResultSender
struct NetworkResultSender_t229;
// System.String
struct String_t;
// UnityTest.ResultDTO
struct ResultDTO_t209;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t230;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t231;
// UnityTest.TestResult
struct TestResult_t232;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t228;

// System.Void UnityTest.NetworkResultSender::.ctor(System.String,System.Int32)
 void NetworkResultSender__ctor_m856 (NetworkResultSender_t229 * __this, String_t* ___ip, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::SendDTO(UnityTest.ResultDTO)
 bool NetworkResultSender_SendDTO_m857 (NetworkResultSender_t229 * __this, ResultDTO_t209 * ___dto, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::Ping()
 bool NetworkResultSender_Ping_m858 (NetworkResultSender_t229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
 void NetworkResultSender_RunStarted_m859 (NetworkResultSender_t229 * __this, String_t* ___platform, List_1_t230 * ___testsToRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
 void NetworkResultSender_RunFinished_m860 (NetworkResultSender_t229 * __this, List_1_t231 * ___testResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestStarted(UnityTest.TestResult)
 void NetworkResultSender_TestStarted_m861 (NetworkResultSender_t229 * __this, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestFinished(UnityTest.TestResult)
 void NetworkResultSender_TestFinished_m862 (NetworkResultSender_t229 * __this, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
 void NetworkResultSender_TestRunInterrupted_m863 (NetworkResultSender_t229 * __this, List_1_t228 * ___testsNotRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
