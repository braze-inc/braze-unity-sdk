#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.DTOFormatter/Writer
struct Writer_t219;
// System.IO.Stream
struct Stream_t25;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;
// UnityTest.ResultDTO/MessageType
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"
// UnityTest.TestResultState
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.DTOFormatter/Writer::.ctor(System.IO.Stream)
 void Writer__ctor_m899 (Writer_t219 * __this, Stream_t25 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::WriteConvertedNumber(System.Byte[])
 void Writer_WriteConvertedNumber_m900 (Writer_t219 * __this, ByteU5BU5D_t112* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.ResultDTO/MessageType&)
 void Writer_Transfer_m901 (Writer_t219 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(UnityTest.TestResultState&)
 void Writer_Transfer_m902 (Writer_t219 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Byte&)
 void Writer_Transfer_m903 (Writer_t219 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Boolean&)
 void Writer_Transfer_m904 (Writer_t219 * __this, bool* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Int32&)
 void Writer_Transfer_m905 (Writer_t219 * __this, int32_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Single&)
 void Writer_Transfer_m906 (Writer_t219 * __this, float* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.Double&)
 void Writer_Transfer_m907 (Writer_t219 * __this, double* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Writer::Transfer(System.String&)
 void Writer_Transfer_m908 (Writer_t219 * __this, String_t** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
