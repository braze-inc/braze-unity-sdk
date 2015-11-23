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

// UnityTest.DTOFormatter/Writer
struct Writer_t187;
// System.IO.Stream
struct Stream_t68;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.DTOFormatter/Writer::.ctor(System.IO.Stream)
extern "C" void Writer__ctor_m774 (Writer_t187 * __this, Stream_t68 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::WriteConvertedNumber(System.Byte[])
extern "C" void Writer_WriteConvertedNumber_m775 (Writer_t187 * __this, ByteU5BU5D_t98* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.ResultDTO/MessageType&)
extern "C" void Writer_Transfer_m776 (Writer_t187 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.TestResultState&)
extern "C" void Writer_Transfer_m777 (Writer_t187 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Byte&)
extern "C" void Writer_Transfer_m778 (Writer_t187 * __this, uint8_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Boolean&)
extern "C" void Writer_Transfer_m779 (Writer_t187 * __this, bool* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Int32&)
extern "C" void Writer_Transfer_m780 (Writer_t187 * __this, int32_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Single&)
extern "C" void Writer_Transfer_m781 (Writer_t187 * __this, float* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Double&)
extern "C" void Writer_Transfer_m782 (Writer_t187 * __this, double* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.String&)
extern "C" void Writer_Transfer_m783 (Writer_t187 * __this, String_t** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
