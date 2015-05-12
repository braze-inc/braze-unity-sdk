#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.DTOFormatter/Writer
struct Writer_t206;
// System.IO.Stream
struct Stream_t27;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// UnityTest.ResultDTO/MessageType
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"
// UnityTest.TestResultState
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.DTOFormatter/Writer::.ctor(System.IO.Stream)
 void Writer__ctor_m794 (Writer_t206 * __this, Stream_t27 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::WriteConvertedNumber(System.Byte[])
 void Writer_WriteConvertedNumber_m795 (Writer_t206 * __this, ByteU5BU5D_t97* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.ResultDTO/MessageType&)
 void Writer_Transfer_m796 (Writer_t206 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.TestResultState&)
 void Writer_Transfer_m797 (Writer_t206 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Byte&)
 void Writer_Transfer_m798 (Writer_t206 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Boolean&)
 void Writer_Transfer_m799 (Writer_t206 * __this, bool* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Int32&)
 void Writer_Transfer_m800 (Writer_t206 * __this, int32_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Single&)
 void Writer_Transfer_m801 (Writer_t206 * __this, float* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Double&)
 void Writer_Transfer_m802 (Writer_t206 * __this, double* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.String&)
 void Writer_Transfer_m803 (Writer_t206 * __this, String_t** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
