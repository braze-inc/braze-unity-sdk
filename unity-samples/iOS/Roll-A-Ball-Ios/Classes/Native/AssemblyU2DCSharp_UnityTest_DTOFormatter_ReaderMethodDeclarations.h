#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.DTOFormatter/Reader
struct Reader_t207;
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

// System.Void UnityTest.DTOFormatter/Reader::.ctor(System.IO.Stream)
 void Reader__ctor_m804 (Reader_t207 * __this, Stream_t27 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityTest.DTOFormatter/Reader::ReadConvertedNumber(System.Int32)
 ByteU5BU5D_t97* Reader_ReadConvertedNumber_m805 (Reader_t207 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.ResultDTO/MessageType&)
 void Reader_Transfer_m806 (Reader_t207 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(UnityTest.TestResultState&)
 void Reader_Transfer_m807 (Reader_t207 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Byte&)
 void Reader_Transfer_m808 (Reader_t207 * __this, uint8_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Boolean&)
 void Reader_Transfer_m809 (Reader_t207 * __this, bool* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Int32&)
 void Reader_Transfer_m810 (Reader_t207 * __this, int32_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Single&)
 void Reader_Transfer_m811 (Reader_t207 * __this, float* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.Double&)
 void Reader_Transfer_m812 (Reader_t207 * __this, double* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.DTOFormatter/Reader::Transfer(System.String&)
 void Reader_Transfer_m813 (Reader_t207 * __this, String_t** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
