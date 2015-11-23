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

// UnityTest.DTOFormatter/Reader
struct Reader_t188;
// System.IO.Stream
struct Stream_t68;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.DTOFormatter/Reader::.ctor(System.IO.Stream)
extern "C" void Reader__ctor_m784 (Reader_t188 * __this, Stream_t68 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityTest.DTOFormatter/Reader::ReadConvertedNumber(System.Int32)
extern "C" ByteU5BU5D_t98* Reader_ReadConvertedNumber_m785 (Reader_t188 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.ResultDTO/MessageType&)
extern "C" void Reader_Transfer_m786 (Reader_t188 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.TestResultState&)
extern "C" void Reader_Transfer_m787 (Reader_t188 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Byte&)
extern "C" void Reader_Transfer_m788 (Reader_t188 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Boolean&)
extern "C" void Reader_Transfer_m789 (Reader_t188 * __this, bool* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Int32&)
extern "C" void Reader_Transfer_m790 (Reader_t188 * __this, int32_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Single&)
extern "C" void Reader_Transfer_m791 (Reader_t188 * __this, float* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Double&)
extern "C" void Reader_Transfer_m792 (Reader_t188 * __this, double* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.String&)
extern "C" void Reader_Transfer_m793 (Reader_t188 * __this, String_t** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
