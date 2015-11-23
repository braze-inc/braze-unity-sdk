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

// UnityTest.NetworkResultSender
struct NetworkResultSender_t206;
// System.String
struct String_t;
// UnityTest.ResultDTO
struct ResultDTO_t208;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t242;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t241;
// UnityTest.TestResult
struct TestResult_t226;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t263;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.NetworkResultSender::.ctor(System.String,System.Int32)
extern "C" void NetworkResultSender__ctor_m836 (NetworkResultSender_t206 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::SendDTO(UnityTest.ResultDTO)
extern "C" bool NetworkResultSender_SendDTO_m837 (NetworkResultSender_t206 * __this, ResultDTO_t208 * ___dto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::Ping()
extern "C" bool NetworkResultSender_Ping_m838 (NetworkResultSender_t206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
extern "C" void NetworkResultSender_RunStarted_m839 (NetworkResultSender_t206 * __this, String_t* ___platform, List_1_t242 * ___testsToRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C" void NetworkResultSender_RunFinished_m840 (NetworkResultSender_t206 * __this, List_1_t241 * ___testResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestStarted(UnityTest.TestResult)
extern "C" void NetworkResultSender_TestStarted_m841 (NetworkResultSender_t206 * __this, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestFinished(UnityTest.TestResult)
extern "C" void NetworkResultSender_TestFinished_m842 (NetworkResultSender_t206 * __this, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::AllScenesFinished()
extern "C" void NetworkResultSender_AllScenesFinished_m843 (NetworkResultSender_t206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
extern "C" void NetworkResultSender_TestRunInterrupted_m844 (NetworkResultSender_t206 * __this, List_1_t263 * ___testsNotRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
